/*
3-3. Add an Element* previous to Listing 3-9 to make a doubly linked list. Add
an insert_before method to Element. Traverse the list from front to back, then
from back to front, using two separate for loops. Print the operating_number
inside each loop.
*/

#include <cstdio>

struct Element{
    Element* next{};
    Element* previous{};
    char prefix[2];
    short operating_number;

    void insert_after(Element* new_element){
        new_element->next = next;
        new_element->previous = this;
        if(next) next->previous = new_element;
        next = new_element;
    }
    void insert_before(Element* new_element){
        new_element->previous = previous;
        new_element->next = this;
        if(previous) previous->next = new_element;
        previous = new_element;
    }
};

int main(){

    Element one, two, three, four, zero;

    one.prefix[0] = 'a';
    one.prefix[1] = 'b';
    one.operating_number = 1;
    one.insert_after(&two);

    two.prefix[0] ='c';
    two.prefix[1] = 'd';
    two.operating_number = 2;

    three.prefix[0] ='e';
    three.prefix[1] = 'f';
    three.operating_number = 3;

    four.prefix[0] ='g';
    four.prefix[1] = 'h';
    four.operating_number = 4;

    zero.prefix[0] = 'i';
    zero.prefix[1] = 'j';
    zero.operating_number = 0;

    one.insert_before(&zero);
    two.insert_after(&three);
    three.insert_after(&four);

    for (Element* cursor = &zero; cursor; cursor = cursor->next) {
        printf("Forward: %d\n", cursor->operating_number);
}

    for (Element* cursor = &four; cursor; cursor = cursor->previous) {
        printf("Backward: %d\n", cursor->operating_number);
}

}
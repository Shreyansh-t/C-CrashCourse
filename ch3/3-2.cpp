//  Add a read_from and a write_to function to Listing 3-6. These functions
// should read or write to upper or lower as appropriate. Perform bounds checking to prevent buffer overflows.
#include <cstdio>

void read_from(char* lists){
    printf("%s\n", lists);
}

void write_to(char* lists, int i, char a){
    lists[i] = a;
    read_from(lists);
}

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper;  // Equivalent: &upper[0]
    lower[3] = 'd';  // lower now contains a b c d e \0
    upper_ptr[3] = 'D'; // upper now contains A B C D E \0
    char letter_d = lower[3];  // letter_d equals 'd'
    char letter_D = upper_ptr[3]; // letter_D equals 'D'

    printf("lower: %s\nupper: %s\n", lower, upper); 
    // lower[7] = 'g';  // Super bad. You must never do this.

    read_from(lower);
    write_to(upper, 3, 'D');
}
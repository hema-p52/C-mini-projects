#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(rev, str);
    strrev(rev);   // some compilers don’t support strrev, so we can write our own

    if(strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}

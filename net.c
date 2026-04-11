#include<stdio.h>
int main() {
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z') {
        printf("This character is upper case\n");
    } else if(ch >= 'a' && ch <= 'z'){
        printf("This character is lower case\n");
    } else {
        printf("This character is not an alphabet\n");
    }

    return 0;
}
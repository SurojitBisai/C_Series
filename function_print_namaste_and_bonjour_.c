#include<stdio.h>
//function declaration/ prototype
void namaste();
void bonjour();

//function call
int  main() {
    char ch;
    printf("Enter f for freneh and i for indian :");
    // char ch;
    scanf("%c", &ch);

    if(ch == 'i') {
       namaste();
    } else {
        bonjour();
    }
    
    return 0;
}
//function definition
void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}
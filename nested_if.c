#include<stdio.h>
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if(number >= 0) {
        printf("This number is prositive\n");
        if(number % 2 == 0) {
            printf("But this is even\n");
        } else {
            printf("But this is odd\n");
        }
    } else  {
        printf("This number is negative\n");
    }
    
    return 0;
}
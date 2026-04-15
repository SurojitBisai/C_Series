#include<stdio.h>
int main(){
    
    int n;
    do {
        printf("Enter te number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 7 == 0) {
            break;
        }

    }while(1);
    printf("You have enter the number multiple of 7");
    return 0;
}
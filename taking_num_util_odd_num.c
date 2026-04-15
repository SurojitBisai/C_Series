#include<stdio.h>
int main(){
    
    int n;
    do {
        printf("Enter te number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 2 != 0) {
            break;
        }

    }while(1);
    printf("You have enter the odd number");
    return 0;
}
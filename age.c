#include<stdio.h>
int main() {
    int age;
    printf("Enter the age :");
    scanf("%d", &age);
    if(age > 18) {
    printf("He are adult\n");
    printf("The can Vote\n");
    printf("the can driving\n");
    }
    else {
        printf("not Driving");
    }
    printf("Thank you");
    return 0;
}
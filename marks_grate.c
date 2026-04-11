#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d", &marks);

    if (marks < 30) {
        printf("The great is C\n");
    } 
    else if (marks >= 30 && marks < 70) {
        printf("The great is B\n");
    } 
    else if (marks >= 70 && marks < 90) {
        printf("The great is A\n");

    } 
    else if (marks >= 90 && marks <= 100) {
        printf("The great is A+\n");
    } 
    else {
        printf("invalid marks\n");
    }



    return 0;
}
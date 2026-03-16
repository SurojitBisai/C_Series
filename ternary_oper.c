#include<stdio.h>
int main(){
    int age;
    printf("Entrer ager:");
    scanf("%d", &age);
    age >= 18 ? printf("aAdult\n") : printf("Not adult\n");
    return 0;
}
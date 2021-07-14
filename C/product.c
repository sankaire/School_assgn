#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1, num2;
    float result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = num1 * num2;
    printf("Product: %d %d = %f\n", num1,num2,result );

    return 0;
}
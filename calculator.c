#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
	int result;
	
	printf("Enter an umber: ");
	scanf("%d", &num1 );
	
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	result = num1 * num2;
	
	printf("%d", result);
	return 0;
	
};
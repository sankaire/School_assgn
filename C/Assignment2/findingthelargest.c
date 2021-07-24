#include <stdio.h>

int main()
{
	int first_num;
	int second_num;
	int third_num;
	
	printf("Enter the first Intergers: ");
	scanf("%d", &first_num);
	printf("Enter the second Interger: ");
	scanf("%d", &second_num);
	printf("Enter the third Interger: ");
	scanf("%d", &third_num);
	
	//logic goes here
	
	if(first_num > second_num && first_num > third_num){
		printf("%d is greter than Both Numbers", first_num);
	}else if(second_num > first_num && second_num > third_num){
		printf("%d is greter than Both Numbers", second_num);
	}else if(third_num > first_num && third_num > second_num)
	{
		printf("%d is greter than Both Numbers", third_num);
	}else
	{
		printf("The Numbers Are Equal!!!");
	}
	
	return 0;
}
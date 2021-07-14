#include<stdio.h>
#include<stdlib.h>

int main(){
    int scr;
    printf("Enter score: ");
    scanf("%d", &scr);
    if(scr >= 80){
        printf("A");
    }else if(scr >= 75)
	{
		printf("B+");
	}else if(scr >= 70)
	{
		printf("B");
	}else if(scr >= 65)
	{
		printf("B-");
	}else if(scr >= 60)
	{
		printf("C+");
	}else if(scr >= 55)
	{
		printf("C");
	}else if(scr >= 50)
	{
		printf("C-");
	}else if(scr >= 45){
		printf("D+");
	}else if(scr >= 40){
		printf("D");
	}else
	{
		if(scr >= 35){
			printf("D-");
		}else if(scr >= 30)
		{
			printf("E");
		}
	}

    return 0;
}
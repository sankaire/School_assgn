#include <stdio.h>
#include <stdlib.h>

//area of a rectangle function
float area_of_a_rectangle(float length, float width){
    float area;
    area = length * width;
    return area;
}
//main function
int main(){
    float l;
    float w;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);

    float answer = area_of_a_rectangle(l, w);
    
    printf("%g is the area of the rectangle ", answer); 
    //used a %g format to get rid of the zeroes
}
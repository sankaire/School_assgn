#include<stdio.h>

int main(){
    float distance_in_metres; 
    float convert_to_kilometres;

    printf("Enter distance in meters: ");
    scanf("%f", &distance_in_metres);

    convert_to_kilometres = distance_in_metres * 0.001;

    printf("converted to: %g KM", convert_to_kilometres);

    return 0;
}

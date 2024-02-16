#include<stdio.h>
#include<math.h>
int main(){

float radius;
printf("enter the radius:");
scanf("%f",&radius);
float volume;
volume = 1.33*3.14*pow(radius,3.0);
float surfacearea;
surfacearea = 4*3.14*pow(radius,2.0);

printf("volume is %.2f\n",volume);
printf("surface area is %.2f",surfacearea);








    return 0;
}
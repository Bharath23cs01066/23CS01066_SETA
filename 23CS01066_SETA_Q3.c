#include<stdio.h>
int  main(){
float  a,b,c;

printf("enter the values of a,b,c");
scanf("%f%f%f",&a,&b,&c);
float e,f;
float  d;
d = pow(b,2.0) -(4.0*a*c) ;
if (d<0.0){
printf("imaginary roots");
}
if(d>=0.0){
e = pow(d,0.5) - b;
 f = e/2*a ;
printf("roots are %f",f);

}



    return 0;
}
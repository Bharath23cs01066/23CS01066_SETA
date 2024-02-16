#include<stdio.h>
#include<math.h>
int main(){
int n;
int i=1;
int f1=1;
int f2=1;
int f3=1;
printf("enter the number:");
scanf("%d",&n);
int a;
a = n/100;
int b;
b = n/10 - (a*10);
int c;
c = n-(a*100)-(b*10);

while(i<=a){
    f1 = f1*i;
    i++;
}
while(i<=b){
f2 = f2*i;
i++;
}
for(i=1;i<=c;i++){
f3 = f3*i;

}
if(f1+f2+f3 == n){
    printf("number is strong number");
}
if(f1 +f2+f3 != n){
    printf("number is  not strong number");
}
printf("%d\n",c);
printf("%d\n%d\n%d",f1,f2,f3);

    return 0;
}
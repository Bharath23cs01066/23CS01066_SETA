#include <stdio.h>

int main(){
    int number;
    int prime1;
    int prime2;

    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i = 2;i<number;i++){
        prime1 = 1;
        prime2 = 1;
        for(int a = 2;a<i;a++){
            if((i%a)==0){
                prime1=0;
                a = i;
            }

        }
        if(prime1==1){
           for(int a = 2;a<(number-i);a++){
            if(((number-i)%a)==0){
                prime2=0;
                
            }
        } 
        }
        if((prime1==1)&&(prime2==1)&&(i<=(number/2)+1)){
            printf("\nPrime couple is %d and %d",i,(number-i));
        }


    }
    
return 0;

}
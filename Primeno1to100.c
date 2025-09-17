#include<stdio.h>
int main(){
    int i,j,isPrime;
    printf("prime numbers between 1 and 100 are:");
    for(i=2;i<=100;i++){
        isPrime=1;
        for(j=2;j*j<=i;j++){
            if(i%j == 0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d\t",i);
        }
            }
            return 0;
        }

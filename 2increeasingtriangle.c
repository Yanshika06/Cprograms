#include<stdio.h>
int main(){
    int i,j;
    int n=3;
        for(i=1;i<=n;i++){
            //print left stars
            for(j=1;j<=i;j++){
                printf("*");
            }
            for(j=1;j<=(n-i)*2;j++){
                printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
        
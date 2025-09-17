#include<stdio.h>
int getSumofDigits(int num){
    int sum=0;
    while(num>0){
        sum += num%10;
        num /=10;
    
    }
    return sum;
}
int isMagicNumber(int n){
    int sum=n;
    while(sum>9){
        sum=getSumofDigits(sum);
    }
    return (sum == 1);
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(isMagicnumber(number)){
        printf("%d is a Magic Number.\n,number");
    }else{
        printf("%d")
    }
}
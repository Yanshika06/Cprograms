#include<stdio.h>
int main(){
    int arr[5]={3,12,52,34,5};
    int min=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
printf("%d",min);
}
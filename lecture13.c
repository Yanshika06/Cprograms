#include<stdio.h>
int main(){
    int arr[7]={1,3,4,6,-5,5,1};
    int k=7;
for(int i=0;i<7;i++){
    for(int j=i+1;j<7;j++){
        if (arr[i]+arr[j]==k){
            printf("%d %d",i,j);
            break;
        }
        }
    }
}    
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int check=1;
    for(int i=0;i<5/2;i++){
        if(arr[i]!=arr[5-1-i]){
            check=0;
            break;
        }
    }
    if(check){

    }else 











    #include<stdio.h>
    int main(){
        int arr[]={1,2,3,4,5}
        for(int=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
    arr[n-1]=First element;
    }
    for(int=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
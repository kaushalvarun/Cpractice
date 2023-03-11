#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i,temp=0;
    for (i=0;i<10/2+1;i+=2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    for (i=0;i<9;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
# include <stdio.h>
int main(){
    //Create array to input 25 elements
    int arr[25],i;
    int n,cnt = 0;
    for (i=0;i<26;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    //input number to be matched
    printf("Enter number to be matched");
    scanf("%d",&n);

    //Printing n the number of times it is matched
    for (i=0;i<26;i++){
        if (arr[i]== n)
            cnt++;
    }
    printf("%d appeared %d times\n",n,cnt);
    return 0;
}
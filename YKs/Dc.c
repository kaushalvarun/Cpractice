# include <stdio.h>
int main(){
    int num[100],i,j;
    for (i=0;i<100;i++){
        num[i] = i+1;
    }
    for (i=1;i<100; i++){
        if (num[i]%2==0)
            num[i] = 0;
        if (num[i]!=0){
            for (j=i;j<100;j++){
                if (num[j]%num[i]==0)
                    num[j]=0;
            }
            printf("Hi");
            //printf("%d\n",num[i]);
        }
        printf("%d\n",num[i]);
    }
    return 0;
}
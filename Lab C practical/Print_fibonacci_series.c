#include<stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=0,b=1;

    if(n==0){
        printf("%d ",a);
    }
    if(n<2){
        printf("%d ",a);
        printf("%d ",b);
    } else{
        int i=2;
        printf("%d ",a);
        printf("%d ",b);
        while(i<=n){
            int c = a+b;
            printf("%d ",c);
            a =  b;
            b = c;
            i++;
        }
    }

    

    return 0;
}
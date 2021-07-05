#include<stdio.h>

int main(){
    int t,d,x,y,z;
    scanf("%d",&t);

    while(t--){
        int max = 0,max1= 0;
        scanf("%d %d %d %d",&d,&x,&y,&z);

        max1 = x*7;
        max = d*y + (7-d)*z;

        if(max1>=max){
            printf("%d\n",max1);
        } 
        else{
            printf("%d\n",max);
        }
        max = 0;
        max1 = 0;
    }
}
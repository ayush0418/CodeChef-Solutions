#include<stdio.h>

int main(){
    int t,c,g;
    scanf("%d",&t);

    while(t--){
        int h;
        scanf("%d %d",&g,&c);

        h = (c*c)/(2*g);

        printf("%d\n",h);
    }
}
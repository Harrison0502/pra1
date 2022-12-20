#include <stdio.h>
#include <stdlib.h>

int main(){
    int start,a,b,c;
    int sum;
    while(scanf("%d %d %d %d",&start,&a,&b,&c)!=EOF){
        sum=0;
        sum+=720;
        int tmp1=0,tmp2=0,tmp3=0;
        tmp1=(start+(40-a))*9;
        if (tmp1>360)
            tmp1-=360;
        sum+=tmp1;
        sum+=360;
        tmp2=((40-a)+b)*9;
        if(tmp2>360)
            tmp2-=360;
        sum+=tmp2;
        tmp3=(b+(40-c))*9;
        if (tmp3>360)
            tmp3-=360;
        sum+=tmp3;
        printf("%d\n",sum);

        
    }
}
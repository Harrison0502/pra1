#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int f(int a,int b){
    if(b==0)
        return a;
    return f(b,a%b);
}

int num(char *str){
    int len=strlen(str);
    int sum=0;
    int j=0;
    for(int i=len-1;i>=0;i--){
        if(str[i]=='1')
            sum+=pow(2,j);
        j++;
    }
    return sum;


}
int main(){
    char s1[200],s2[200];
    while(scanf("%s %s",s1,s2)!=EOF){
        int a=num(s1);
        int b=num(s2);
        if(f(a,b)==1)
            printf("Love is not all you need!");
        else
            printf("All you need is love!");
        
    }

}
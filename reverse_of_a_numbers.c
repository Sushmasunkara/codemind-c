#include<stdio.h>
int main()
{
    int n,p=1,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        s=s*10+n%10;
        n/=10;
    }
    {
        printf("%d",s);
    }    
}
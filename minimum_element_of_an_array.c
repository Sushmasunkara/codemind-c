#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,min=1111;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(min=a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
}
#include<stdio.h>
#include<string.h>
int main()
{

    int number[100000],i=0,j,num1[100000],lnum1=0,k,l,m=0,n,coun1[100000],num2[100000];
    while(scanf("%d",&number[i++])==1)
    {
        num2[i-1]=number[i-1];
    }
    for(j=0;j<i;j++)
    {
        n=0;
        for(k=0;k<i;k++)
        {
            if(number[j]==num2[k])
            {
                num2[k]=7896;
                n++;
            }
        }
        if(n>0)
        {
            num1[m]=number[j];coun1[m++]=n;
        }
    }
    for(i=0;i<m-1;i++)
    {
        printf("%d %d\n",num1[i],coun1[i]);
    }
    return 0;
}

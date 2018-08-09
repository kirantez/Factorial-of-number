#include<stdio.h>
int main()
{
    int count=0,i=0,num=0;
    printf("Enter the number\n");
    scanf("%u",&num);
    count=num;
    for (i=(count-1); i>0; i--)
    {
	count=count*i;
    }
    printf("%u \n",count);
}

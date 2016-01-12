#include<stdio.h>
int main()
{
    int n,i,temp,num[100];

    printf("Enter the desired number you want to print:");
    scanf("%d",&n);

    printf("\nInclude %d numbers in the array:\n",n);

    printf("\nThe numbers are:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("\nInitially the values are: ");
    for(i=0;i<n;i++)
    {
        printf("\nElement at %d position is %d",i,num[i]);
    }

    for(i=1;i<n-1;i++)
    {
        while(i>0 && num[i]<num[i-1])
        {
            temp=num[i];
            num[i]=num[i-1];
            num[i-1]=temp;
            i--;
        }
    }

    printf("\nThe Sorted numbers in ascending order are: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",num[i]);
    }
}

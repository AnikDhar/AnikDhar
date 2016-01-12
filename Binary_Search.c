#include<stdio.h>
int main()
{
    int i,n,first,middle,last,search,array[100];

    printf("Enter desired number of elements : ");
    scanf("%d",&n);

    printf("\nEnter %d integers : ",n);

            for(i=0;i<n;i++)
            {
            scanf("%d",&array[i]);
            }
            printf("\nEnter value to search : ");
            scanf("%d",&search);

            first=0;
            last=n-1;
            middle=(first+last)/2;

            while(first<=last && search!=array[middle])
                {
                if(search>array[middle])
                    first=middle+1;

                else
                    last = middle-1;
                    middle=(first+last)/2;
                }
            if(search==array[middle])
            {
                printf("%d Found at location %d \n",search,middle+1);

            }
            if(first>last)
            {
                printf("Searched number not found! %d is not present in the list.\n",search);
            }
            getch();
}

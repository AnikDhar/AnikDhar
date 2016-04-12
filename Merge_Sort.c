#include<stdio.h>
void merge(int [],int ,int, int);
void merge_sort(int a[], int p, int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}
void merge(int a[], int p, int q, int r)
{
    int n1,n2,lt[50],rt[50],i,j,k;
    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
    {
        lt[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        rt[j]=a[q+j];
    }
    lt[n1+1]=10000;
    rt[n2+1]=10000;
    i=1;
    j=1;

    for(k=p;k<=r;k++){
        if(lt[i]<=rt[j])
        {
            a[k]=lt[i];
            i++;
        }
        else
        {
            a[k]=rt[j];
            j++;
        }

    }
}
int main()
{
    int p,r,i,x,n;
    int a[50],lt[50],rt[50];
    printf("\nEnter the array size: ");
    scanf("%d",&n);
    printf("\nEnter %d element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=0;
    r=n-1;

   merge_sort(a, p, r);
   printf("\nThe sorted array is: \n");
   for(x=0;x<n;x++)
   {
       printf("%d\t",a[x]);
   }
    return 0;
}


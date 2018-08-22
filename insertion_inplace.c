#include<stdio.h>
void putarray(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
void insertionsort(int *p ,int n)
{
    int i,x,j,w,e,r=0;
    scanf("%d",&*(p+0));
    for(i=1;i<n;i++)
    {
        scanf("%d",&*(p+i));
        x = *(p+i);j=r;
        while(j>=0 && x < *(p+j))
        {

        j--;
        }
        w = j+1;e=r;
        while(e>=w)
     {
         *(p+(e+1)) = *(p+e);
         e--;
     }
*(p+w) = x;
r++;
    }
}
int main()
{
int n;
printf("enter the size of array :\n");
scanf("%d",&n);
int a[n],b[n];
printf("enter the element of array :\n");
insertionsort(a,n);
printf("the sorted array is: \n");
putarray(a,n);
}

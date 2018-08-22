#include<stdio.h>
void getarray(int *p, int n)
{
    int i;
for(i=0;i<n;i++)
{
scanf("%d",&*(p+i));
}
}
void putarray(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
void insertionsort(int *p, int *q ,int n)
{
    int i,r=0,x,j,w,e;
    *(q+0) = *(p+0);
    for(i=1;i<n;i++)
    { x = *(p+i);
    for(j=r;j>=0;)
    {
        if(*(q+j)> x)
        {
            j--;
        }
          w = j+1;
         if(*(q+j)<= x){
        break;}


    }
    e = r;
     while(e>=w)
     {
         *(q+(e+1)) = *(q+e);
         e--;
     }
     *(q+w) = x;
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
getarray(a,n);
printf("the sorted array is: \n")
insertionsort(a,b,n);
putarray(b,n);
}

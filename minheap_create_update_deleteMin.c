#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void update_heap(int p[],int n, int x, int y)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(p[i] == x)
        {
            p[i] = y;
            break;
        }
    }
    minhepify(p,n,i);
}
void printarray(int p[], int n)
{
    for(int i=0;i<n;i++)
    {
    printf("%d",p[i]);
    }
    printf("\n");
}
void create_heap(int p[], int n)
{
    int i,k,j;
    for(i=1;i<n;i++)
    {
        k = (i-1)/2;
        j = i;
        while(k>=0 && p[j] < p[k])
        {
            swap(&p[j],&p[k]);
            j=k;
            if(k!=0)
            k = (k-1)/2;
            else
                break;
        }
    }
}
void minhepify(int p[], int n,int f)
{
    int i,k,x,j;
    for(i = f;i<n;)
        {
    j = 2*i;
    k = 2*i + 1;
    x = p[i];
    if(p[j] < p[k])
    {
        if(p[j] < x)
               {
                   swap(&p[i],&p[j]);
                   i = j;
               }
        else
            break;
    }
    else if(p[j] > p[k])
    {
        if(p[k] < x)
               {
                   swap(&p[i],&p[k]);
                   i = k;
               }
               else
                break;
    }
    }

}
void delete_heap(int p[],int n)
{
    p[0] = p[n-1];
    n=n-1;
    minhepify(p,n,0);
}
}
int main()
{
int n;
printf("enter the no. of element in array: \n");
scanf("%d",&n);
int a[n];
int x,y;
printf("enter the element in array :\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element to update : \n");
scanf("%d",&x);
printf("enter updated no. : \n");
scanf("%d",&y);
printf("the heap is :\n");
create_heap(a,n);
printarray(a,n);
printf("the heap after updation : \n");
update_heap(a,n,x,y);
printarray(a,n);
printf("the heap after deleting minimum :\n");
delete_heap(a,n);
printarray(a,n-1);
}

#include<stdio.h>
void inputarr(int *p,int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&*(p+i));
}
void quicksort(int p[],int f,int l)
{
    if(f<l){
    int z;
    z = quick(p,f,l);
    quicksort(p,f,z-1);
    quicksort(p,z+1,l);}
}
int quick(int p[],int f,int l)
{
    int x = p[f],j=f,i,t;
    for(i=f+1;i<=l;i++)
    {
        if(p[i]<=x)
        {
            j++;
            t=p[i];
            p[i]=p[j];
            p[j] = t;
        }
    }
    p[f] = p[j];
    p[j] = x;
    return (j);

}
void showarray(int *p, int n)
{
    for(int i =0;i<n;i++)
        printf("%d",*(p+i));
}
int main()
{
int n,x,z,i;
printf("enter the no. of element in array :\n");
scanf("%d",&n);
int a[n];
inputarr(a,n);
quicksort(a,0,n-1);
printf("the sorted array :\n");
showarray(a,n);
}

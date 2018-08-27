#include<stdio.h>
void inputarr(int *p,int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&*(p+i));
}
int binarys(int p[], int x,int f,int n)
{
    int mid;
    if(n>=f){
mid = (n-f)/2 + f;
//printf("here");
if(p[mid]== x)
    return mid;
else if(p[mid]>x)
    return binarys(p,x,f,mid-1);
else if(p[mid]<x)
    return binarys(p,x,mid+1,n);
}
else
return -1;
}
int main()
{
int n,x,z;
printf("enter the no. of element in array :\n");
scanf("%d",&n);
int a[n];
inputarr(a,n);
printf("enter the element to be found: \n");
scanf("%d",&x);
z = binarys(a,x,0,n);
if(z != -1){
printf("the index of the give element: \n");
printf("%d",z);}
else
{
    printf("the given element is not in array");
}
}

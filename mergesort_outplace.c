#include<stdio.h>
void givearray(int *p , int n)
{
    int i;
for(i=0;i<n;i++)
{
scanf("%d",&*(p+i));
}
}
void outputarray(int *p, int n){
    int i;
for(i=0;i<n;i++)
{
printf("%d ",*(p+i));
}}
void mergesort(int *p, int x, int y)
{
    if(x<y)
    {
    int mid = x +(y-x)/2;
    mergesort(p,x,mid);
    mergesort(p,mid+1,y);
    merge(p,x,mid,y);
}}
void merge(int *p, int x , int m, int y)
{
  int i,j,k;
  int n1 = m - x + 1;
  int n2 = y - m;
  int a[n1],b[n2];
  for(i=0;i<n1;i++)
    a[i] = *(p+(i+x));
  for(i=0;i<n2;i++)
    b[i] = *(p+(i+m+1));
      i = 0;j=0,k=x;
      while(j<n1 && i < n2)
      {
          if(a[j] < b[i])
          {
          *(p+k) = a[j];
            j++;
          }
          else{
            *(p+k) = b[i];
            i++;
          }
          k++;
      }
        while(j<n1)
        {
            *(p+k) = a[j];
            j++;
            k++;
        }
        while(i<n2)
        {
            *(p+k) = b[i];
            i++;
            k++;
        }


}
int main()
{
int n;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("enter element in array\n");
givearray(a,n);
mergesort(a,0,n-1);
printf("the sorted array is\n");
outputarray(a,n);
}

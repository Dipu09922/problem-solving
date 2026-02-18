#include <stdio.h>
#include <limits.h>
int main()
{  
  int x,y;

  scanf("%d",&x);
  int a[x];
  for(int i=0;i<x;i++)
  {
    scanf("%d",&a[i]);
  }

  int mx=INT_MIN;
  int mn=INT_MAX;
  for(int i=0;i<x;i++)
  {
    if(a[i] < mn)
    {
     mn=a[i];
    }

    if(a[i] > mx)
    {
     mx=a[i];
    }
  }
  printf("%d",mx-mn);

}

#include <stdio.h>
int tsum(int arr[],int size,int t){
  int st=-1,en=-1,i=0,j=0;
  int currsum=0;
  while(j<size && currsum+arr[j]<=t){
      j++;
      currsum+=arr[j];
  }
  
  if(currsum==t){
      printf("%d %d",i+1,j);
      return 0;
  }
  
  while(j<size){
      currsum+=arr[i];
      while(currsum>t){
          currsum-=arr[i];
          i++;
      }
      if(currsum==t){
          st=i+1;
          en=j+1;
      }
      j++;
  }
  printf("%d %d",st,en);
  return 0;
}
int main()
{
   int n[4]={1,2,5,9};
   int s=4;
   int k=17;
   tsum(n,s,k);
}
//OUTPUT:1 4

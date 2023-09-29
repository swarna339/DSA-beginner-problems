input: 6
  1 2 2 3 4 5
output: 1 2 3 4 5


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],new[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
     int j=0;
   for(int i=0;i<n-1;i++){
      if(a[i]!=a[i+1]){
          new[j++]=a[i];
      }    
   }
   new[j++]=a[n-1];
  
   for(int i=0;i<j;i++){
       a[i]=new[i];
   }
   for(int i=0;i<j;i++){
       printf("%d",a[i]);
   }   
}

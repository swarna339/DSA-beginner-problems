input:5
  1 3 1 2 4
output:
  1 3 2 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  
 for (int i = 0; i < n; i ++)   {  
        for (int j = i + 1; j <n; j++)  { 
            if ( a[i] == a[j])  
            {  
                for ( int k = j; k<n- 1; k++)  
                {  
                    a[k] = a[k + 1];  
                }  
                n--;  
                j--;      
            }  
        }  
    }  
   
   for(int i=0;i<n;i++){
       printf("%d ",a[i]);
       }
}

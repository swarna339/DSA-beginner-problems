// smallest missing positive element in  array :
#include <stdio.h>
#include<stdbool.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            c+=arr[j];
            
            printf("%d ",c);
        }
        c=0;
    }
    
}

// input:
3
  1 2 2
// OUTPUT:
  1 3 5 2 4 2

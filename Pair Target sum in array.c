#include <stdio.h>
int pairt(int arr[],int size,int t){
    int low=0;
    int high=size-1;
    while(low<high){
        if(arr[low]+arr[high]==t){
            printf("%d %d",arr[low],arr[high]);
            return 0;
        }else if(high>low){
            high--;
        }else{
            low++;
        }
    }
    printf("NOT FOUND");
}
int main()
{
   int n[5]={1,2,5,9,3};
   int s=5;
   int k=10;
   pairt(n,s,k);
}
// output: 1,9

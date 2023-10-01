// max product of an subarray
#include<stdio.h>
#include<stdlib.h>
int max(int a , int b){
    if(a>b){
        return a;
    }
    return b;
}
int maxproduct(int arr[],int size){
    int p,s;
    int ans;
    for(int i=0;i<size;i++){
        if(p==0){
            p=1;
        }
        if(s==0){
            s=1;
        }
        p*=arr[i];
        s*=arr[size-i-1];
        ans=max(ans,max(p,s));
    }
    return ans;
}

int main(){
    int n=6;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result=maxproduct(a,n);
    printf("%d",result);
 }

// adding element to an array 
#include<stdio.h>
#include<stdlib.h>

void insertatbegin(int arr[],int size , int ele){
    
    for(int i=size-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=ele;
}
void insertatend(int arr[],int size,int ele){
    arr[size]=ele;
    
}
void insertatposition(int arr[],int size,int pos,int key){
    int i=0;
    while(i>pos-1){
        i++;
    }
    arr[pos]=key;
     size++;
    for(int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
   
}
int main(){
    int n=6,k=3,p=2;
    // scanf("%d %d %d",&n,&k,&p);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // insertatbegin(a,n,k);
    // insertatend(a,n,k);
    insertatposition(a,n,p,k);
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);

    }
 }

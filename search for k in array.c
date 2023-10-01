INPUT:5 2 
  1 4 2 3 7
OUTPUT:
  2
#include<stdio.h>
#include<stdlib.h>


int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]==k){
        printf("%d",i);
        break;
        }
        else{
            i++;
        }

    }
 }

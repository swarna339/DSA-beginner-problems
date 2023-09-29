#include <stdio.h>
#include <stdlib.h>
int com(const void *n1,const void *n2){
    return *(int*)n1-*(int*)n2;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),com);
     
    if(n%2==0){
        printf("%d",a[n/2]);
    }else{
        printf("%d",a[(n-1)/2]);
    }
    
    
}

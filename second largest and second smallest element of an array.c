input: 5
        56 78 54 32 48
output: 56 
        48



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
    
   
        // for second large element
        printf("%d ",a[n-2]);
        // for second small elemnt{
            printf("%d",a[1]);
    
    
}

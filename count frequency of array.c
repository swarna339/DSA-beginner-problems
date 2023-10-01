input : 7
   1 2 1 3 4 2 1 
output: 1 3
        2 2
        3 1
        4 1

  #include<stdio.h>
#include<stdlib.h>


int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int vis[100]={0};
    for(int i=0;i<n;i++){
        if(vis[i] == 1)
                continue;
        int c=1;
        for(int j=i+1;j<n;j++){
            
            if(a[i]==a[j]){
                vis[j] = 1;
                c++;
            }
           
        }
        printf("%d %d\n",a[i],c);
    }
}

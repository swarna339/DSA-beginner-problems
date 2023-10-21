// smallest missing positive element in  array :
#include <stdio.h>
#include<stdbool.h>
int main(){
    int n[5]={11,-2,10,-1,3};
    int s=5,ans=0,cur=0;
    bool check[s];
    for (int i=0;i<s;i++){
        check[i]=false;
    }
     for(int i=0;i<s;i++){
        if(n[i]>=0){
            check[i]=true;
        }
    }
    for(int i=0;i<s;i++){
        if(check[i]==true){
            
            cur=i;//0
            if(n[cur]<=n[ans]){//11<11
                ans=cur;
            }
        }
    
    }
    printf("%d",ans);
}

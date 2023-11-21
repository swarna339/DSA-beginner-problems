#include <stdio.h>

int main()
{
    char str[100]="aaahbbbybjgtbj";
    char vis[100]={'0'};
    int c1=0;
    int l=strlen(str);
    for(int i=0;i<l;i++){
        int f=0;
        int c=0;
        for(int j=0;j<strlen(vis);j++){
            if(str[i]==vis[j]){
                f=1;
            }
        }
        if (f==0){
            for(int k=i;k<l;k++){
                if(str[i]==str[k]){
                    c++;
                }
            }
            c1++;
            vis[c1]=str[i];
            
            printf("%c %d\n",str[i],c);
        }
        
    }
    
    
}

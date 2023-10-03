#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    char str[100];
    scanf("%s",str);
    char res[100];
    int l=0;
    for(int i=0;i<strlen(str);i++){
    if(isalpha(str[i])){
    res[l++]=str[i];
    }
    }
    printf("%s",res);

    return 0;
}

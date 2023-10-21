// QUESTION:
/**The program must accept an odd integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):
5 <= N <= 99

Input Format:
The first line contains N.

Output Format:
The first N lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
5

Output:
1 * 1
2 2 *
3 * *
4 4 *
5 * 5

Example Input/Output 2:
Input:
7

Output:
1 * * 1
2 * 2 *
3 3 * *
4 * * *
5 5 * *
6 * 6 *
7 * * 7 **/

// answer:

#include <stdio.h>

int main()
{
   int n=5,c=1;
   int m = (n%2)? (n/2)+1:(n/2) ;
   for(int i=1;i<m;i++){
       for(int j=1;j<=m;j++){
          if(j==1){
              printf("%d",i);
          }
           else if(j+i==m+1){
               printf("%d",i);
           }else{
          printf("*");
           }
       }
       c++;
       printf("\n");
   }
   for(int i=1;i<=m;i++){
       for(int j=1;j<=m;j++){
           if(j==1){
               printf("%d",c);
           }else if(j==i){
               printf("%d",c);
           }else{
               printf("*");
           }
       }
       c++;
       printf("\n");
   }
}

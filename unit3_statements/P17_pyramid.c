// Program 17 | Print pyramid of digits as shown below for n number of lines
/*
Pyramid of digits:
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4
……………………………..
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows in the triangle:\t");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int cnt = 0;
        for(int j = 1; j <= 2*n; j++){
            if(i > (n-j)){
                printf("%d ", (i+cnt));
                cnt++;
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
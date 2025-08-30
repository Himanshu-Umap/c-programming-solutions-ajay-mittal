/*
Program 18 | Print Floyd’s triangle
Floyd’s triangle:
1
2 3
4 5 6
7 8 9 10
……………………………..
*/

#include <stdio.h>

int main(){
    int n, cnt = 1;
    printf("Enter the number of rows in floy'd triangle: ");
    scanf("%d", &n);

    for (int i =  1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
}
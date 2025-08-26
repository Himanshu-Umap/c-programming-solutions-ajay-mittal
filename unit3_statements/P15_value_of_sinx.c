// Program 15 | Making use of sine series, evaluate the value of sin(x), where x is in radians

// sin(x) = x- x^3/(3!) + x^5/(5!) - x^7/(7!) + ..n

#include <stdio.h>

// main(){
//     int i=1,n;
//     float sum, term, x;
//     printf("Enter the value of x in radians\t");
//     scanf("%f",&x);
//     printf("Enter the power of end term\t");
//     scanf("%d",&n);
//     sum=0;
//     term=x;
//     i=1;
//     while(i<=n)
//     {
//         sum=sum + term;
//         term=(term*x*x*-1)/((i+1)*(i+2));
//         i=i+2;
//     }
//     printf("Sin of %4.2f is %f",x, sum);
// }


int fact(int n){
    if ( n == 1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}


int main() {
    int n;
    float sum, x;
    printf("Enter the number x in sin(x): ");
    scanf("%f", &x);
    printf("Enter the power of end term in sin(x): ");
    scanf("%d", &n);
    int i = 1;
    sum = 0.0;
    while((2*i+1) <= n){
        sum += (((-1)^(i-1))*((int)x^(2*i+1)))/(float)(fact(2*i+1));
        i++;
    }
    printf("value of sin(%.2f) is %f", x, sum);

}
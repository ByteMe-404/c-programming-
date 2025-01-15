// 11. Write a C program to calculate the root of a quadratic equation.



#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    printf("enter the value of a , b ,c :");
    scanf("%d %d %d",&a,&b,&c);

    int d = pow(b,2) -4*a*c;


    if (d == 0)
    {
        double x = -b / (2 * a);
        printf("The roots are real and the same.\n");
        printf("x = %.2f\n", x);

            
    }else if( d < 0){
            printf("the root is imaginary .");
    }else{
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 : %lf\n",x1);
        printf("x2 : %lf\n",x2);
   
    }
    


    return 0;
}
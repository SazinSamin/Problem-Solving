// Write a C program which gives the solution of a quadratic equation, using the following formula: 
// You must find any kind of roots (either real or imaginary). In case of imaginary roots ,the roots
// should be of the form c+id and c- id. Keep the option that when one enter a = 0 as input, it prints:
// This is not a quadratic equation.


#include<stdio.h>
#include<math.h>


int main(){

    double a, b, c, discremant, r1, r2, real_part, imag_part;
    printf("Enter coefficient a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0){
        printf("This is not a quadratic equation");
        return 0;
    }

    discremant = (b * b) - (4 * a * c);
    
    if(discremant > 0){
        r1 = (-b + sqrt(discremant)) / (2 * a);
        r2 = (-b - sqrt(discremant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }else if(discremant == 0){
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf", r1);
    }else{
        real_part = -b / (2 * a);
        imag_part = sqrt(-discremant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real_part, imag_part, real_part, imag_part);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

void root_Quadratic(int a, int b, int c) {
    float determinant, x1, x2;
    determinant=(b*b)-(4*a*c);
    if(determinant>0)
	{
        x1=(-b+sqrt(determinant))/(2 * a);
        x2=(-b-sqrt(determinant))/(2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", x1, x2);
    } 
    else if(determinant==0)
	{
        x1=x2=(float)-b/(2*a);
        printf("Roots are real and same: %.2f\n", x1);
    }
}

int main() {
    int a, b, c;
    printf("Enter coefficients A,B,C (Ax^2+Bx+C): ");
    if(scanf("%d %d %d", &a, &b, &c)==3 && a!=0) root_Quadratic(a, b, c);
	else printf("Invalid input. 'A' cannot be zero for a quadratic equation.\n");
    return 0;
}

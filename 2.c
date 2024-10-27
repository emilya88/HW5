#include <stdio.h>

struct complex{
    float real;
    float imaginary;
};

struct complex add_nums(struct complex num1, struct complex num2){
    struct complex final;
    final.real= num1.real+ num2.real;
    final.imaginary=num1.imaginary+num2.imaginary;
    return final;

}

struct complex mult_nums( struct complex num1, struct complex num2){
    struct complex final;
    final.real= num1.real * num2.real -num1.imaginary* num2.imaginary;
    final.imaginary= num1.real* num2.imaginary+num1.imaginary*num2.real;
    return final;
}

int main(){
    struct complex num1, num2, sum, product;

    printf("enter first complex number");
    scanf("%f %f", &num1.real, &num1.imaginary);

   printf("enter second complex number");
    scanf("%f %f", &num2.real, &num2.imaginary);

   sum= add_nums(num1, num2);
   product= mult_nums(num1, num2);

   printf("Sum = %.2f+ %.2fi\n", sum.real, sum.imaginary);
   printf("Product = %.2f+ %.2fi", product.real, product.imaginary);

   return 0;





}
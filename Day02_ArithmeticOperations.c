#include <stdio.h>
int main(){
    float number1;
    float number2;
    float product;
    float quotient;
    printf("Please enter your first number: ");
    scanf("%f",&number1);
    printf("Please enter your second number: ");
    scanf("%f",&number2);
    printf("Sum of these numbers is %.2f\n",number1+number2);
    product=number1*number2;
    printf("Product of these numbers is %.2f\n",product);
    
    if(number1>=number2){
        printf("Difference of these numbers is %.2f\n",number1-number2);
    }
    else{
        printf("Difference of these numbers is %.2f\n",number2-number1);
    }
    if (number1 == 0 || number2 == 0) {
    printf("Cannot divide by zero.\n");
} 
else {
    if (number1 >= number2) {
        printf("Quotient of these numbers is %.2f\n", number1 / number2);
    } 
    else {
        printf("Quotient of these numbers is %.2f\n", number2 / number1);
    }
}
    
   return 0; 
}

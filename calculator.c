#include <stdio.h>  
#include <math.h>  

int main() {  
  
//RituRajPS
   float num1, num2;
   char op_math;
  
  printf("Enter the operation +,-,*,/,x:");
  scanf("%c", &op_math);

 printf("Enter the 1st Number: ");
  scanf("%f", &num1);

 printf("Enter the 2nd Number: ");
  scanf("%f", &num2);

 // int square = pow(num1,num2);
  
  switch(op_math)
    {
      case '+' :
        printf("Sum is : %f", num1 + num2);
      break;

      case '-' :
        printf("Sub is : %f", num1 - num2);
      break;

      case '*' :
        printf("Multiply is : %f", num1 * num2);
      break;

      case '/' :
        printf("Divide is : %f", num1 / num2);
      break;

      case 'x':
        printf("Power of : %f", pow(num1,num2));
      break;

      default:
      printf("Option does not meet");    
        break;
    }
  
    return 0;  
}

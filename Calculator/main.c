//
//  main.c
//  Calculator
//
//  Created by Geraldo Lata on 10.5.23.
//

#include <stdio.h>
#include <math.h>


float add(float a, float b) {
    return a + b;
}


float subtract(float a, float b) {
    return a - b;
}


float multiply(float a, float b) {
    return a * b;
}


float divide(float a, float b) {
    return a / b;
}


float squareRoot(float num) {
    return sqrt(num);
}


float power(float base, int exp) {
    float result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}
float average(int count) {
    float sum = 0, num;
    printf("Enter %d numbers to calculate the average:\n", count);
    for (int i = 1; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    return sum / count;
}


int main(void) {
    char choice;
    float num1, num2, result;
    printf("Select an operation to perform:\n");
    printf("a. Average\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root\n");
    printf("6. Power\n");
    printf("Enter your choice: ");
    scanf("%c", &choice);

    switch (choice) {
       
        case 'a':
            printf("Enter the number of elements: ");
            int count;
            scanf("%d", &count);
            result = average(count);
            printf("Result = %.2f\n", result);
            break;
        case '1':
            printf("Enter two numbers to add: ");
            scanf("%f %f", &num1, &num2);
            result = add(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '2':
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &num1, &num2);
            result = subtract(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '3':
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &num1, &num2);
            result = multiply(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '4':
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &num1, &num2);
            result = divide(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '5':
            printf("Enter a number to find its square root: ");
            scanf("%f", &num1);
            result = squareRoot(num1);
            printf("Result = %.2f\n", result);
            break;
        case '6':
            printf("Enter a number and its power: ");
            scanf("%f %c", &num1, &choice);
            result = power(num1, choice);
            printf("Result = %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}

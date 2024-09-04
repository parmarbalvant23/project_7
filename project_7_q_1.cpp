#include <stdio.h>


void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
void modulus(int a, int b);

int main() 

{
    char choice;
    float num1, num2;

    do 
	{
        
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf(" %c", &choice);

        switch (choice) 
		{
            case '1':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                add(num1, num2);
                break;
            case '2':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                subtract(num1, num2);
                break;
            case '3':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                multiply(num1, num2);
                break;
            case '4':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                divide(num1, num2);
                break;
            case '5':
                {
                    int int1, int2;
                    printf("Enter two integers: ");
                    scanf("%d %d", &int1, &int2);
                    modulus(int1, int2);
                }
                break;
            case '6':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }

    } while (choice != '6');

    
    
   }



void add(float a, float b) 

{
    printf("Result: %.2f\n", a + b);
}

void subtract(float a, float b) 

{
    printf("Result: %.2f\n", a - b);
}

void multiply(float a, float b) 
{
    printf("Result: %.2f\n", a * b);
}

void divide(float a, float b) 
{
    if (b != 0) 
	{
        printf("Result: %.2f\n", a / b);
    } 
	else
	{
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulus(int a, int b) 
{
    if (b != 0) 
	{
        printf("Result: %d\n", a % b);
    } 
	else 
	{
        printf("Error: Modulus by zero is not allowed.\n");
    }
}

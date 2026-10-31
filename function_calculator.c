#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    bool CalculatorRunning = true;

    while (CalculatorRunning)
    {
        char Choice;
        char Choice1;
        double a, b, Result = 0.0;

        printf("\n---Calculator---\n");
        printf("\nEnter an Operator ( + , - , * , / ) :  ");
        scanf(" %c", &Choice);

        if (Choice == '+' || Choice == '-' || Choice == '*' || Choice == '/')
        {

            printf("\nEnter Your First Number : ");
            scanf("%lf", &a);
            printf("Enter Your Second Number : ");
            scanf("%lf", &b);

            if (Choice == '+')
            {
                Result = a + b;
            }
            else if (Choice == '-')
            {
                Result = a - b;
            }
            else if (Choice == '*')
            {
                Result = a * b;
            }
            else if (Choice == '/')
            {
                if (b != 0)
                {
                    Result = a / b;
                }
                else
                {
                    printf("Error: Zero se divide nahi kar sakte !\n");
                    continue;
                }
            }
            printf("\nResult : %.2lf %c %.2lf = %.2lf\n\n", a, Choice, b, Result);
        }
        else
        {
            printf("Galat operator choice! Kripya sahi operator chunein.\n");
        }
        printf("Doy Want Quit to Calculator Press ( Q / q ) and enter : ");
        scanf(" %c", &Choice1);
        if (Choice1 == 'Q' || Choice1 == 'q')
        {
            CalculatorRunning = false;
            printf("\nCalculator ShutDown\n\n");
        }
    }

    return 0;
}
#include <stdio.h>

int main ()
{
    int result = 0, number1 = 0, number2 = 1;

    for(int i = 0; i < 10; ++i)
    {   printf(" %d", result);
        result = number1 + number2;
        if (i % 2 != 0)
        {
            number1 = result;
        }
        else
        {
            number2 = result;
        }
        
    }

    

    return 0;
}
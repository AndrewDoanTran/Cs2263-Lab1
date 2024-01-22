#include <stdio.h>

int main()
{
    int result = 0, number1 = 0, number2 = 0, number3 = 1, count = 0;

    for (int i = 0; i < 10; ++i)
    {
        printf(" %d", result);
        result = number1 + number2 + number3;

        switch (count)
        {
        case 0:

            number3 = result;
            count = 1;
            break;

        case 1:

            number2 = result;
            count = 2;
            break;

        case 2:

            number1 = result;
            count = 0;
            break;
        }
    }

    return 0;
}

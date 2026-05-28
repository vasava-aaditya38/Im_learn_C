#include <stdio.h>

int main()
{
    for (int i = 0; i < 14; i++)
    {
        if (i == 10)
        {
            // break; // Stop loop!
            continue; // Skip this itrestion now That means not print 10
        }
        printf("i is %d\n", i);
    }

    return 0;
}
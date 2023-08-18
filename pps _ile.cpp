#include <stdio.h>

int main()
{

    int values[5], n=0;

    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &values[i]);
    }
    
    for (int i = 1; i < n; ++i)
    {
        if (values[0] < values[i])
        {
            values[0] = values[i];
        }
    }

    printf("Largest element = %.2f", values[0]);
}

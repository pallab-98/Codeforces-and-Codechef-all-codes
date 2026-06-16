#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int terms;
    int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("\n\nFibonacci Series: ");
    for (int i = 0; i < terms; i++)
    
    {
        int value = fibonacci(i);
        printf("%d ", value);
        sum += value; // যোগফল হিসাব
    }

    printf("\n\nTotal Fibonacci series sum: %d\n\n", sum);

    return 0;
}
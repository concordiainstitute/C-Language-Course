#include <stdio.h>

int sum(int n, int s)
{
    if (n == 0)
    {
        printf("%d", s);
        return;
    }

    sum(n - 1, s + n);

    return;
}

int main()
{

    int n;

    printf("Enter the number: ");

    scanf("%d", &n);
    sum(n, 0);
    return 0;
}
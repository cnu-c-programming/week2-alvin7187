#include<stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    int result = 0;

    switch (c)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    }

    printf("%d\n", result);
    
    return 0;
    
}

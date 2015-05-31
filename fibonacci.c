#include<stdio.h>
/* Fibonacci loop */
main()
{
        unsigned int first, second, limit;

        first = 1;
        second = 1;
        printf("Stop fibbin at #?\n");
        scanf("%i", &limit);
        while (first <= limit && second <= limit)
        {
                printf("%i\n%i\n", first, second);
                first = first + second;
                second = second + first;
        }
        if (first <= limit && second != limit)
        printf("%i\n", first);
        else if (second <= limit && first != limit)
        printf("%i\n", second);
}

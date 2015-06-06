#include<stdio.h>
/* Fibonacci loop */
main()
{
        unsigned long long int first, second, limit;

        first = 1;
        second = 1;
        printf("Stop fibbin at #?\n");
        scanf("%lli", &limit);
        while (first <= limit && second <= limit)
        {
                printf("%lli\n%lli\n", first, second);
                first = first + second;
                second = second + first;
        }
        if (first <= limit && second != limit)
        printf("%lli\n", first);
        else if (second <= limit && first != limit)
        printf("%lli\n", second);
}

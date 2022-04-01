#include <stdio.h>

/**
 * print_times_table - prints times table
 *@n: is intiger variable for print times table
 *
 * Return: Always 0.
 */
int main()
{
    long unsigned int i,sum=0;
    clrscr();
    for(i=0;i<1000;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            sum=sum+i;
        }
    }
    printf("%ld\n",sum);
    getchar();
    return 0;
}

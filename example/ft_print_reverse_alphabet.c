#include <unistd.h>

int ft_putchar(a);

void ft_print_reverse_alphabet(void)
{
    char n;
    n = 'z';
    
    while (n >= 'a')
    {
        ft_putchar(n);
        n--;
    }
}


#include <stdio.h>
#include "libft.h"

void    test_func(unsigned int i, char *c)
{
        if (i % 2 == 0)
                *c = *c - 32;
}

int main(void)
{
        char str[] = "abcdef";

        ft_striteri(str, test_func);
        printf("%s\n", str);
        return (0);
}


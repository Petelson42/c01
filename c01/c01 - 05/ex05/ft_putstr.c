#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;

    while(*(str + i) != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }

    printf("\n%p\n",&str);
    printf("\n%s\n",*str);

}

int main()
{
    char nome[] = "Ola, mundo !  .";

    ft_putstr(nome);

    return 0;

}
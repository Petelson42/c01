
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;

    printf("\ndivisao: %d\n", *div);
    printf("\nporcentagem: %d\n", *mod);
}
#include "includes/ft_printf.h"
#include <limits.h>
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>

int main(void)
{
	//PF_RED;
	ft_printf(PF_RED "Hello" PF_WHITE " and " PF_BLUE "goodbye!\n" PF_RESET);
	//ft_printf("\e[1;97;41m");
	ft_printf("ft_printf: %d ", 42);
	printf("printf: %d\n", 42);
	ft_printf("[%30%]\n");
	ft_printf(PF_RESET); //ft_printf("\033[0m");
	ft_printf("Le fichier " PF_CYAN "%s " PF_RESET "contient : " PF_RED " %s" PF_RESET "\n", "LUL", "LUL");
	return (0);
}
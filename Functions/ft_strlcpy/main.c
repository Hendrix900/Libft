#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char origin[] = "PISTACH";
	char dest[] = "Este es la cadena de destino";

	ft_strlcpy(dest, origin, 7);
	printf("%s", dest);
}


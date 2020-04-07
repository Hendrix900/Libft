#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main(void)
{
	char origin[] = "PISTACH";
	char dest[] = "Este es la cadena de destino";

	ft_strlcpy(dest, origin, 7);
	printf("%s", dest);
}


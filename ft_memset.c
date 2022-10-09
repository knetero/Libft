#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char*p;

	p = ptr;
	while (n > 0)
	{
		*p = x;
		p++;
		n--;
	}
	return (ptr);
}
int main()
{
    char str[] = "HELLO WORLD";
    ft_memset(str, '!', 2);
    printf("%s", str);
}
#include "libft.h"

void	*ft_memset(void *ptr, int i, size_t n)
{
	char*p;

	p = ptr;
	while (n > 0)
	{
		*p = i; // changing the first index of the array pointed by *p//
		p++;
        i--; 
	}
	return (ptr);
}
int main()
{
    char str[] = "HELLO WORLD";
    ft_memset(str, '!', 2);
    printf("%s", str);
}
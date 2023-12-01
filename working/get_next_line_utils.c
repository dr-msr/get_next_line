#include <limits.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	int			overflow;

	if ((int) count == INT_MIN || (int) size == INT_MIN)
		return (NULL);
	overflow = count * size;
	if (overflow == 0)
		return (malloc(0));
	if (overflow / count != size)
		return (NULL);
	ptr = (void *) malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return ((void *)ptr);
}
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char const *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i] == ' ')
			i--;
		while ((argv[1][i] != ' ') && (i > 0))
			i--;
		while (argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');

	return (0);
}
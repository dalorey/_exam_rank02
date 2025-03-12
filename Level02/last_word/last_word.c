#include <unistd.h> // for write;

int	is_letter(char letter)
{
	int	is;
	
	is = 0;
//	if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
	if (letter >= 33 && letter <= 126)
		is = 1;
	return (is);
}

#include <stdio.h> // for printf;

int	main(int argc, char *argv[])
{
	int	pos;
	int	word_start;
	
	word_start = -1;
	if (argc == 2)
	{
		pos = 0;
		while (argv[1][pos])
		{
			if ((pos == 0 && is_letter(argv[1][pos])) ||
				(pos > 0 && argv[1][pos - 1] == ' ' && is_letter(argv[1][pos])))
				word_start = pos;
			pos++;
		}
		pos = word_start;
//		if (pos >= 0)
//		{
			while (argv[1][pos] && argv[1][pos] != ' ')
			{
				write(1, &argv[1][pos], 1);
				pos++;
			}
//		}
	}
	write(1, "\n", 1);
	return (0);
}

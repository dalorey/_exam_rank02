#include <unistd.h>

int	main(int argc, char *argv[])
{
	int len;

	len = 0;
	if (argc == 4)
	{
		while (argv[1][len])
		{
			if (argv[1][len] == argv[2][0])
				argv[1][len] = argv[3][0];
			len++;
		}
	}
	write(1, argv[1], len);
	write(1, "\n", 1);
	return (0);
}

/*
#include <unistd.h>

int main(int ac, char *av[])
{
    if (ac == 4)
    {
        int i;
        
        i = 0;
        // loop over the whole string only if the second and 
        // third argument are only one character
        //
        while (av[1][i])
        {
            // if the current character is the one we have to
            // replace, we replace it by the third argument
            //
            if (av[1][i] == av[2][0])
                av[1][i] = av[3][0];
            // then we write the current character
            //
            write(1, &av[1][i], 1);
            i++;
        }
    }
    // at the very end we write a new line, that way we write
    // the new line everytime, whether we have enough argument or not
    //
    write(1, "\n", 1);
}
*/

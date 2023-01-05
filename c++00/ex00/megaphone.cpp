#include <iostream>

int main (int argc, char **argv)
{
	int	a;
	int	b;

	for (a = 1 ; a < argc ; a++)
	{
		b = 0;
		while (argv[a][b])
			std::cout << char(toupper(argv[a][b++]));
	}
	if (argc == 1)
		std::cout << "*LOUD AND UNBERABLE FEEDBACK NOISE*" << std::endl;
	return(0);
}

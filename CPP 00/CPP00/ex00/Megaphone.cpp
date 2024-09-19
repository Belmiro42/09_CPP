#include <cctype>
#include <iostream>
#include <cstring>
#include <string>
#include <limits>

int main(int argc, char **argv)
{

	std::string arg;
	int arg_count;
	int iterate;

	arg_count = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++arg_count != argc)
	{
		iterate = 0;
		arg = argv[arg_count];
		while (iterate != arg.size())
			std::cout << (char)toupper(arg[iterate++]);
	}
	std::cout << std::endl;
	return (0);
}

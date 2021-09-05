#include <iostream>       // std::cout
#include <string>         // std::string
#include <fstream>

int main (int ac, char **av)
{

	std::ofstream ofs;
	std::ifstream ifs;
	std::string str;
    size_t first_occurence;

	ofs.open("av");
	ifs.open(av[1]);

	while (getline(ifs, str))
	{
		size_t start = 0;
		while ((first_occurence = str.find('-')) != std::string::npos)
		{
			str[ first_occurence ] = '!';
			
		}
		std::cout << str << "\n";
		ofs << str;
        ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return 0;
}

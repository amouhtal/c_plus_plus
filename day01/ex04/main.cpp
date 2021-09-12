#include <iostream>
#include <fstream>
#include <string>

void replace(std::string filename, std::string s1, std::string s2)
{
    std::string buff;
    std::ifstream ifs(filename);
    size_t first_occurence;

    if (s1 == s2)
    {
        std::cerr << "[Error!] same strings s1 & s2 ! " << std::endl;
        return ;
    }
    if (ifs.fail())
    {
        std::cerr << "[Error!] file :" << filename << std::endl;
        return ;
    }
    filename = filename + ".replace";
    std::ofstream ofs(filename);
    if (ofs.fail())
    {
        std::cerr << "[Error!] file :" << filename << std::endl;
        return ;
    }
    while (std::getline(ifs, buff))
    {
        while ((first_occurence = buff.find(s1)) != std::string::npos)
            buff = buff.substr(0, first_occurence) + s2 + buff.substr(first_occurence + s1.length(), buff.length());
        ofs << buff;
        ofs << std::endl;
    }
    ifs.close();
    ofs.close();
}


int main(int ac, char **av)
{
    if (ac == 4)
    {
        replace(av[1], av[2], av[3]);
        return (0);
    }
    else
        std::cerr << "Wrong number of arguments" <<  std::endl;
    return (1);
}
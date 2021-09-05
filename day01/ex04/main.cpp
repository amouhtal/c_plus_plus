#include <iostream>
#include <fstream>
#include <string>

void replace(std::string filename, std::string s1, std::string s2)
{
    int first_occurence;
    int start;
    std::string buff;
    std::string str;
    std::ifstream ifs(filename);
    start = 0;
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
        start = 0;
        while ((first_occurence = buff.find(s1)) != std::string::npos)
        {
            str = buff.substr(0, first_occurence) + s2 + buff[first_occurence + s1.length()];
            // while ((first_occurence + start) <  first_occurence + s2.length())
            // {
            //     buff[first_occurence + start] = s2[start];
            //     start++;
            // }
        }
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
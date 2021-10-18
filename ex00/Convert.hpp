#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <sstream>
#include <exception>
class Convert
{
private:
    std::string type;
    float       vFloat;
    double      vDouble;
    int         vInt;
    char        vChar;
    int         flagImpossible;
    int         flagNonDisplayable;
    size_t         index;
    char            *_av;
public:
    Convert(/* args */);
    void	findType(std::string &str);
    std::string const& getType() const;
    void    stringInType(std::string &str);
    void    print(std::string&);
    void    printChar() const ;
    void    printInt() const ;
    void    printFloat() const ;
    void    printDouble() const ;
    void    setav(char *av);
    class   invalidTypeException: public std::exception
    {
        virtual const char * what() const throw();
    };
    ~Convert();
};

#endif /* CONVERT_HPP */

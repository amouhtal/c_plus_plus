#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137)
{
	;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrubbery", 145, 137), _target(target)
{
	;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	;
}

void ShrubberyCreationForm::Action() const 
{
	std::ofstream ofs(_target + "_shrubbery");

	if (ofs.fail())
		throw FileNotOpenExeception();

	ofs <<"       /\\         " << std::endl;
	ofs <<"      /\\*\\      " << std::endl;
	ofs <<"     /\\O\\*\\     " << std::endl;
	ofs <<"    /*/\\/\\/\\    " << std::endl;
	ofs <<"   /\\O\\/\\*\\/\\   " << std::endl;
	ofs <<"  /\\*\\/\\*\\/\\/\\  " << std::endl;
	ofs <<" /\\O\\/\\/*/\\/O/\\ " << std::endl;
	ofs <<"       ||       " << std::endl;
	ofs <<"       ||       " << std::endl;
	ofs <<"       ||       " << std::endl;

	ofs.close();
}

const char * ShrubberyCreationForm::FileNotOpenExeception::what() const throw()
{
	return "File Not Create";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other.getName(), 145, 137)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

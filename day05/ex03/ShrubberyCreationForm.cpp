#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrubbery", 145, 137), _target(target)
{
	;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137)
{
	;
}

void ShrubberyCreationForm::Action() const
{
	std::ofstream ofs(_target + "_shrubbery");

	if (ofs.fail())
		throw FileNotOpenExeception();

	ofs << "       /\\         " << std::endl;
	ofs << "      /\\*\\      " << std::endl;
	ofs << "     /\\O\\*\\     " << std::endl;
	ofs << "    /*/\\/\\/\\    " << std::endl;
	ofs << "   /\\O\\/\\*\\/\\   " << std::endl;
	ofs << "  /\\*\\/\\*\\/\\/\\  " << std::endl;
	ofs << " /\\O\\/\\/*/\\/O/\\ " << std::endl;
	ofs << "       ||       " << std::endl;
	ofs << "       ||       " << std::endl;
	ofs << "       ||       " << std::endl;

	ofs.close();
}

std::string ShrubberyCreationForm::GetTarget(void) const
{
	return (this->_target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	_target = rhs._target;
	return *this;
}

const char *ShrubberyCreationForm::FileNotOpenExeception::what() const throw()
{
	return "File Not Create";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	;
}
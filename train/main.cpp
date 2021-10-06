
#include <iostream>
#include <exception>
class stack
{
private:
	int size;
	int top;
	int *data;

public:
	stack(int s) : size(s), top(-1)
	{
		if (size <= 0)
			throw WrongSizeException();
		data = new int[s];
	}
	class WrongSizeException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "wrong size";
		}
	};
	void push(int a)
	{
		if (top == size - 1)
			throw FullException();
		data[++top] = a;
	}
	class FullException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "stack is full";
		}
	};
	void print() const
	{
		for (int i = top; i >= 0; i--)
			std::cout << data[i] << std::endl;
	}
	~stack() {}
};

int main(int argc, char const *argv[])
{
	try
	{
		stack s(2);
		s.push(1);
		s.push(2);
		s.push(3);
		s.print();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

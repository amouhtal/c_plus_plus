#include <iostream>
#include <iomanip>

template <typename T = float>

class Vertex
{
	// NOTE HAMRA ZAMLE
public:
	Vertex(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z) {}
	~Vertex(void) {}

	T const &getX(void) const { return this->_x; }
	T const &getY(void) const { return this->_y; }
	T const &getZ(void) const { return this->_z; }

private:
	T const _x;
	T const _y;
	T const _z;

	
	Vertex(void);
};

template <typename T>
std::ostream &operator<<(std::ostream  &out, Vertex<T> const &v)
{
	std::cout.precision(1);
	o << setiosglag(std::ios::fixed);
	out << v.getX() << ", ";
	out << v.getY() << ", ";
	out << v.getZ() << std::endl;
	return out;
}

int main()
{
	Vertex<int> v1(12, 23, 34);
	Vertex<> v2(12, 23, 23);

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;
	
	return 0;
}

#include <iostream>
#include <iomanip>

template< typename T = float >
class Vertex {

public:
	Vertex(T const & x, T const & y, T const & z) : _x( x ), _y( y ), _z( z ) {}
	~Vertex() {}

	T const &	getX() const { return this->_x; }
	T const &	getY() const { return this->_y; }
	T const &	getZ() const { return this->_z; }

private:

	T const _x;
	T const _y;
	T const _z;
} ;

template< typename T >
std::ostream &	operator<<(std:: ostream & o, Vertex< T > const & v) {
	std::cout.precision( 1 );
	o << std::setiosflags( std::ios::fixed );
	o << "Vertex( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";
	return o;
}

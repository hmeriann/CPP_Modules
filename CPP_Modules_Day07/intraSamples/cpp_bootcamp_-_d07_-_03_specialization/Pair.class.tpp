#include <iostream>
#include <iomanip>

template<typename T, typename U >
class Pair
{
private:

	T const &	_lhs;
	U const &	_rhs;

	Pair<T, U>();

public:
	Pair< T, U >(T const & lhs, U const & rhs) : _lhs( lhs ), _rhs( rhs ) {
		std::cout << "Generic template" << std::endl;
		return;
	}

	~Pair< T, U >() {}

	T const &	fst() const	{ return	this->_lhs; }
	U const &	snd() const	{ return	this->_rhs; }
};


template< typename U >
class Pair< int, U >
{
private:

	int			_lhs;
	U const &	_rhs;

	Pair<int, U>();

public:
	Pair< int, U >(int lhs, U const & rhs) : _lhs( lhs ), _rhs( rhs ) {
		std::cout << "Int partial specialization" << std::endl;
		return;
	}

	~Pair< int, U >() {}

	int			fst() const	{ return	this->_lhs; }
	U const &	snd() const	{ return	this->_rhs; }

};


template<>
class Pair< bool, bool >
{
private:

	int	_n;

	Pair<bool, bool>();

public:
	Pair< bool, bool >(bool lhs, bool rhs) {
		std::cout << "bool/bool specialization" << std::endl;
		this->_n = 0;
		this->_n |= static_cast<int>(lhs) << 0;
		this->_n |= static_cast<int>(rhs) << 1;
	}

	~Pair< bool, bool >() {}

	bool	fst() const	{ return	(this->_n & 0x01); }
	bool	snd() const	{ return	(this->_n & 0x02); }

};

template< typename T, typename U >
std::ostream &	operator<<(std:: ostream & o, Pair< T, U > const & p) {
	o << "Pair ( ";
	o << p.fst() << ", ";
	o << p.snd();
	o << " )";
	return o;
}

std::ostream &	operator<<(std:: ostream & o, Pair< bool, bool > const & p) {
	o << "Pair ( ";
	o << p.fst() << ", ";
	o << p.snd();
	o << " )";
	return o;
}

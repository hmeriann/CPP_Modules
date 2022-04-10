#ifndef TYPECAST
#define TYPECAST

#include <iostream>
#include <iomanip>
#include <exception>
#include <typeinfo>

class TypeCast {
public:
	TypeCast() {};
	virtual ~TypeCast() {};
	TypeCast(const std::string &str) : str_(str) {};
	TypeCast(const TypeCast &other) { this->str_ = other.str_; };
	TypeCast &operator =(const TypeCast &rhs);

	void to_char();
	void to_int();
	void to_double();
	void to_float();
private:
	std::string str_;
};

#endif

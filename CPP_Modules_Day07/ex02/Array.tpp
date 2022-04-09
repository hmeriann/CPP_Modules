#include "Array.hpp"

template<typename T>
Array<T>::Array() : data(nullptr), n_(0) {};


template<typename T>
Array<T>::Array(unsigned int n) : data(new T[n]), n_(n) {}


template<typename T>
Array<T>::Array(const Array &arr) : data(new T[arr.n_]), n_(arr.n_)
{
	for (unsigned int i = 0; i < arr.n_; ++i)
		data[i] = arr.data[i];
}


template<typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
	if (this->data)
		delete [] this->data;
	if (rhs.size())
	{
		this->data = new T[rhs.n_](); // calling the default constructor to init new empty array
		for (unsigned int i = 0; i < rhs.size(); i++)
			this->data[i] = rhs.data[i];
	}
	else
		this->data = nullptr;
	this->n_ = rhs.n_;

	return *this;
}


template<typename T>
Array<T>::~Array() { delete [] this->data; };


template<typename T>
unsigned int	Array<T>::size() const { return this->n_; }


template<typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->n_)
		throw std::out_of_range("Index is out of range\n");
	return data[i];
}

// template<typename T>
// void	Array<T>::print(void)	const
// {

// }

#include "Array.hpp"

template<typename T>
class Array
{

private:

	T	*data; 			// elements content
	unsigned int	n_; // elements count

public:

	Array() : data(nullptr), n_(0) {}
	~Array() { delete [] this->data; }

	Array(unsigned int n) : data(new T[n]), n_(n) {}
	Array(const Array<T> &arr) : data(new T[arr.n_]), n_(arr.n_)
	{
		for (unsigned int i = 0; i < arr.n_; ++i)
			data[i] = arr.data[i];
	}

	unsigned int	Array<T>::size() const { return this->n_; }

	Array	&operator=(const Array &rhs);
	T &operator[](unsigned int i);
	// void	print(void)	const;
};



template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
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

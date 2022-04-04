#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
private:
	/* data */
public:
	Sample(/* args */);
	~Sample();

	void	bar(char const c) const;
	void	bar(int const n) const;
	void	bar(float const z) const;
	void	bar(Sample const &i) const;
};




#endif

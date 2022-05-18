#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int bit = 8;

public:
	Fixed();
	Fixed(const Fixed& fixed);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);
	void setRawBits(const int raw);
	int getRawBits(void) const;
};

#endif
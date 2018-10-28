#include<iostream>
#include<cstdint>
#include<cmath>

class FixedPoint2 {

	int16_t m_base;
	int8_t  m_fraction;
public:

	FixedPoint2(int16_t base, int8_t fraction)
		    :m_base(base),m_fraction(fraction) {

		if(m_base < 0 || m_fraction < 0) {
			if(m_base > 0)
				m_base = -m_base;
			if(m_fraction > 0)
				m_fraction = -m_fraction;
		}
	}

	FixedPoint2(double p) { //0.16
	
		m_base = static_cast<int16_t>(p);
		m_fraction = static_cast<int8_t>(round((p-m_base)*100));
	}

	operator double() const
	{
		return m_base + static_cast<double>(m_fraction) / 100;
	}

	friend std::ostream& operator<<(std::ostream &out,const FixedPoint2 &p) {
		
		std::cout<<static_cast<double>(p);
		return out;
	}

	friend FixedPoint2 operator+(const FixedPoint2 &p1, const FixedPoint2 &p2) {
	
		return FixedPoint2(static_cast<double>(p1)+static_cast<double>(p2));
	}

	friend bool operator==(const FixedPoint2 &p1, const FixedPoint2 &p2) {

		return (p1.m_base==p2.m_base && p1.m_fraction==p2.m_fraction) ;
	}

	friend FixedPoint2 operator-(const FixedPoint2 p) {
	
		return -(static_cast<double>(p));
	}

	friend std::istream& operator>>(std::istream &in,FixedPoint2 &p) {
	
		double d;
		in >> d;
		p = FixedPoint2(d);
 
		return in;
	}
	
};

void testAddition()
{
	std::cout << std::boolalpha;
	std::cout << (FixedPoint2(0.75) + FixedPoint2(1.23) == FixedPoint2(1.98)) << '\n'; // both positive, no decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(1.50) == FixedPoint2(2.25)) << '\n'; // both positive, with decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.23) == FixedPoint2(-1.98)) << '\n'; // both negative, no decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.50) == FixedPoint2(-2.25)) << '\n'; // both negative, with decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.23) == FixedPoint2(-0.48)) << '\n'; // second negative, no decimal overflow
	std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.50) == FixedPoint2(-0.75)) << '\n'; // second negative, possible decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.23) == FixedPoint2(0.48)) << '\n'; // first negative, no decimal overflow
	std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.50) == FixedPoint2(0.75)) << '\n'; // first negative, possible decimal overflow
}
 
int main()
{
	testAddition();
 
	FixedPoint2 a(-0.48); 
	std::cout << a << '\n';
 
	std::cout << -a << '\n';
 
	std::cout << "Enter a number: "; // enter 5.678
	std::cin >> a;
	
	std::cout << "You entered: " << a << '\n';
 
	return 0;
}

#include<iostream>
#include<cassert>
class Fahrenheit;
class Celsius {

private:  
	double m_celsius;

public:

	Celsius(double celsius=0.0)
			:m_celsius(celsius){

		assert(celsius>-273.15);

}

//	operator Fahrenheit() {return Fahrenheit(m_celsius*9/5+32.0);}	// wrong

/*	This is called as circular dependency -- The implementation of some Celsius functions depend on Fahrenheit, and vice versa. Moving the relevant member function definitions below the class definitions allows each class to at least be fully declared by the point of function definition. */

	operator Fahrenheit();	// Forward declaration and then defining it below Feh Classs.

    	operator double() {return m_celsius;}

	friend std::istream& operator>>(std::istream &in,Celsius &temp);
 
};

class Fahrenheit {

private:
	double m_fahrenheit;

public:

	Fahrenheit(double fahrenheit=32.0)
			  :m_fahrenheit(fahrenheit){

		assert(fahrenheit>-459.67);

}

	operator Celsius();
	operator double() {return m_fahrenheit;}

	friend std::istream& operator>>(std::istream &in,Fahrenheit &temp);
};

Celsius::operator Fahrenheit() {return Fahrenheit(m_celsius*9/5+32.0);}
Fahrenheit::operator Celsius() {return Celsius((m_fahrenheit-32.0)*5/9);}

void printtempCel(Celsius celsius) {

	std::cout<<"The temp is "<<celsius<<" degree C"<<"\n";
}

void printtempfah(Fahrenheit fahrenheit) {

	std::cout<<"The temp is "<<fahrenheit<<" degree F"<<"\n";
}

std::istream& operator>> (std::istream &in,Celsius &temp) {

	in>>temp.m_celsius;

return in;
}

std::istream& operator>> (std::istream &in,Fahrenheit &temp) {

	in>>temp.m_fahrenheit;

return in;
}

int main() {
    Celsius temp;
	std::cin>>temp;
    printtempfah(temp);

return 0;
}

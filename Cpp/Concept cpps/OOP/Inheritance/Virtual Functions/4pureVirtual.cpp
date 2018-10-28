#include<iostream>
#include<math.h>

// Pure virtual function
// Abstract base class
// Interface classes

class Base	// This is abstract base class(which has one or more than one pure virtual function) meaning no object can be instansiated.
{
private:

	int _x;

public:

	Base(int x = 0) : _x(x) {}

	virtual void pureVirtualFuc() = 0;	/* pure virtual function. We use them we want only derived classes to define
						 functionality. This concept is essential and used for Interface classes(discussed below)*/
	
	int get() { return this-> _x; }
};


class Derived : public Base
{
private:

	int _y;

public:

	Derived(int x = 0, int y = 0) : _y(y), Base(x) {}

// if we dont define any member functions even this class will be treated as abstract class and no object can be instansiated

	virtual void pureVirtualFuc() 
	{ 
		std::cout << "We define functionality of the pure virtual function in derived class\n"; 
	}

	int get() { return this-> _y; }
};


class IErrorLog 	// Interface class example( This has no data members but only pure virtual functions )
{			// We leave the definations for member functions in hands of derived class.
public:

    	virtual bool openLog(const char *filename) = 0;
    	virtual bool closeLog() = 0;
 
    	virtual bool writeError(const char *errorMessage) = 0;
 
    	virtual ~IErrorLog() {}; 
};


class FileErrorLog : public IErrorLog
{
	// we will define openLog and other member functions of the IErrorLog here.
	//eg. writeError() will print the error to file
};


class ScreenErrorLog : public IErrorLog
{
	// We will do the same for the this class as well just the defininations will be diiferent
	// eg. writeError() will only be defined to print message to console and rest two will not be defined.
};


// In short we will give the defination of the functionality of the pure virtuals functions in base class in hands of derived classes


// Its use can be seen in this following function, we can pass any derived class object as an argument to this function
// eg. mySqrt(-4, FileErrorLog object)
//     mySqrt(-8, ScreenError object)
double mySqrt(double value, IErrorLog &log)
{
	if (value < 0.0)
	{
		log.writeError("Tried to take square root of value less than 0");

	return 0.0;
	}

	else
		return sqrt(value);
}

int main()
{
//	Base ob;	will give error since Base is abstract base class

	Derived ob;

	ob.pureVirtualFuc();

//	ScreenErrorLog ob1;	// Since we havet defined this lines wont work beacuse Screen and File Both would be Abstract classes
//	FileErrorLog ob2("myfile.txt");	

//	mySqrt(-3, ob1);	// displays error message in console.
//	mySqrt(-4, ob2);

return 0;
}


#include<iostream>

class A
{
public:
    virtual const char* getName() { return "A"; }
};
 
class B: public A
{
public:
    virtual const char* getName() { return "B"; }
};
 
class C: public B
{
private:          // made it private.
    virtual const char* getName() { return "C"; }
};
 
class D: public C
{
public:
    virtual const char* getName() { return "D"; }
};
 
int main()
{
    C c;
    B &rBase = c; // note: rBase is a B this time
    std::cout << rBase.getName() << '\n';
 
    return 0;
}


// We know that when we call rBase.getName() most derived version of getName() will be called because of the virtual function
// In this case it will call C::getName(), but since it is private will it work ?? 

// Turns out, yes, it works since access specifiers are resolved at compile time and the virtual functions are called by 
// concept of late binding and virtual table. So at compile time rBase.getName() resolves to B::getName() which is fine.

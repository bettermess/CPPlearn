#ifndef __COMPLEXH__
#define __COMPLEXH__

#include <ostream>

using namespace std;

class Complex
{
private:
    double re;
    double im;
    friend Complex& _doapl(Complex *ths, const Complex& x);

public:
    Complex(double x=0, double y=0):re(x), im(y){};
    ~Complex();
    Complex& operator += (const Complex& x);

    double real() const {return re;}
    double imag() const {return im;}

    friend Complex operator + (const Complex& x, const Complex& y);
    friend ostream& operator << (ostream& os,const Complex& x);
    friend Complex operator + (const Complex& x, double y);
};

inline
Complex& _doapl(Complex *ths, const Complex& x)
{
    ths->re += x.re;
    ths->im += x.im;
    return *ths;
}

Complex operator + (const Complex& x, const Complex& y)
{
    return Complex(x.real()+y.real(), x.imag()+y.imag());
}

Complex operator + (const Complex& x, double y)
{
    return Complex(x.real()+y, x.imag());
}

inline Complex& 
Complex::operator += (const Complex& x)
{
    return _doapl(this, x);
}

inline 
Complex::~Complex()
{}

ostream& operator << (ostream& os,const Complex& x)
{
    return os<<'('<<x.real()<<','<<x.imag()<<')';
}


#endif
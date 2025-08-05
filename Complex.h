#pragma once
#include"Numeric.h"

class Complex:public Numeric{
    private:
     int real;
     int imj;
    public:
    void setReal(int value);
    void setImj(int value);
    Complex();
    Complex(Numeric* other);//conversion constructor to use Int i=Numeric*ptr
    Complex(int Rvalue,int Ivalue);
    Complex(int Rvalue);
    ~Complex();
    int toInt()const override;
    double toDouble()const override;
    float toFloat()const override;
//Numeric* operator=(const Numeric& other)override;    
Numeric* operator+(const Numeric& other)override;
Numeric* operator-(const Numeric& other)override;
Numeric* operator*(const Numeric& other)override;
Numeric* operator/(const Numeric& other)override;

virtual bool operator<(const Numeric& other) const override;
virtual bool operator>(const Numeric& other) const override;
virtual bool operator==(const Numeric& other) const override;
virtual void print(ostream&os) const override;
};

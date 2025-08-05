#pragma once
#include"Numeric.h"

class Int:public Numeric{
    private:
     int IntValue;
    public:
    void setInt(int value);
    Int();
    Int(Numeric* other);//conversion constructor to use Int i=Numeric*ptr
    Int(int value);
    ~Int();
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

#pragma once
#include"Numeric.h"

class Float:public Numeric{
    private:
     float FloatValue;
    public:
    void setFloat(float value);
    Float();
    Float(Numeric*other);
    Float(float value);
    ~Float();
    float toFloat()const override;
    int toInt()const override;
    double toDouble()const override;
Numeric* operator+(const Numeric& other)override;
Numeric* operator-(const Numeric& other)override;
Numeric* operator*(const Numeric& other)override;
Numeric* operator/(const Numeric& other)override;

virtual bool operator<(const Numeric& other)const override;
virtual bool operator>(const Numeric& other)const override;
virtual bool operator==(const Numeric& other)const override;
virtual void print(ostream&os) const override;
};

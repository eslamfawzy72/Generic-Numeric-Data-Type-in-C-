#pragma once
#include"Numeric.h"

class Double:public Numeric{
    private:
     double DoubleValue;
    public:
    void setDouble(double value);
    Double();
    Double(Numeric*other);
    Double(double value);
    ~Double();
    double toDouble()const override;
    int toInt()const override;
    float toFloat()const override;
Numeric* operator+(const Numeric& other)override;
Numeric* operator-(const Numeric& other)override;
Numeric* operator*(const Numeric& other)override;
Numeric* operator/(const Numeric& other)override;

virtual bool operator<(const Numeric& other) const override;
virtual bool operator>(const Numeric& other)const override;
virtual bool operator==(const Numeric& other) const override;
virtual void print(ostream&os) const override;
};

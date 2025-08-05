#pragma once
#include<iostream>
using namespace std;
class Numeric{
    public:
   // void setInt(int value){this->IntValue=value;}
    //int getInt()const {return this->IntValue;}
//virtual destructor 
virtual ~Numeric(){cout<<"Numeric destructor is called!\n";};
 //arthimetic operations
 //the return value is numeric* due to polymorphism
 //we can not return it by Numeric because it is abstract class

 //assignment operator
// virtual Numeric* operator=(const Numeric& other)=0; 
virtual Numeric* operator+(const Numeric& other)=0;
virtual Numeric* operator-(const Numeric& other)=0;
virtual Numeric* operator*(const Numeric& other)=0;
virtual Numeric* operator/(const Numeric& other)=0;
//comparisons operations
virtual bool operator<(const Numeric& other)const =0;
virtual bool operator>(const Numeric& other)const=0;
virtual bool operator==(const Numeric& other)const=0;
virtual int toInt()const=0;
virtual double toDouble()const=0;
virtual float toFloat()const=0;
virtual void print(ostream&os) const = 0;

};
inline ostream& operator<<(ostream &os, const Numeric&ptr){
   ptr.print(os);
   return os;
}
inline ostream& operator<<(ostream &os, const Numeric*ptr){
   ptr->print(os);
   return os;
}
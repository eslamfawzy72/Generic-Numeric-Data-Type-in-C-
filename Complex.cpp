#include "Complex.h"
   // void Int:: setInt(int value){this->getInt=value;}
    int Complex::toInt()const{
        return real;
    }
    double Complex::toDouble()const{
         return static_cast<double>(real);
    }
    float Complex::toFloat()const{
        return  static_cast<float>(real);
    }
    void Complex::setReal(int value){
        real=value;
    }
    void Complex::setImj(int value){
        imj=value;
    }
     Complex::Complex(Numeric* other){
       this->real=other->toInt();
       this->imj=0;
    }
    Complex::Complex(){
        setReal(0);
        setImj(0);
    }
    Complex::Complex(int value){
        real=value;
        imj=0;
    }
    Complex::Complex(int rvalue,int imjvalue){
        real=rvalue;
        imj=imjvalue;
    }

    Complex::~Complex(){
        cout<<"Complex destructor is called!\n";
    }
Numeric*  Complex:: operator+(const Numeric& other){
        int newValue=this->real+other.toInt();
        return new Complex(newValue);
    }
Numeric*  Complex:: operator-(const Numeric& other){
  int newValue=this->real-other.toInt();
        return new Complex(newValue);
}
 Numeric*  Complex:: operator*(const Numeric& other){
  int newValue=this->real*other.toInt();
        return new Complex(newValue);
 }
 Numeric*  Complex:: operator/(const Numeric& other){
   int newValue=this->real/other.toInt();
        return new Complex(newValue);
}
// Numeric* Numeric:: operator=(const Numeric& other){
// this->IntValue=other.toInt();
// }

bool Complex:: operator<(const Numeric& other)const{
    return this->real<other.toDouble();}
bool Complex:: operator>(const Numeric& other)const{return this->real>other.toDouble();}
bool Complex:: operator==(const Numeric& other) const{return this->real==other.toDouble();}
void Complex:: print(ostream&os) const{
    if(imj>=0){
os<<"Value of Complex:"<<real<<"+"<<imj<<"j"<<endl;
    }
    else{
os<<"Value of Complex:"<<real<<imj<<"j"<<endl;
    }
}


#include"Double.h"


    double Double::toDouble()const{
        return DoubleValue;
    }
    int Double::toInt() const{
        return static_cast<int>(DoubleValue);
    }
    float Double::toFloat()const{
        return static_cast<float>(DoubleValue);
    }
    void Double::setDouble(double value){
        DoubleValue=value;
    }
    Double::Double(){
        setDouble(0);
    }
    Double::Double(double value){
        setDouble(value);
    }
    Double::Double(Numeric* other){
        this->DoubleValue=other->toDouble();
    }

    Double::~Double(){
        cout<<"Double destructor is called!\n";
    }
   Numeric*  Double:: operator+(const Numeric& other){
        double newValue=this->DoubleValue+other.toDouble();
        return new Double(newValue);
    }
Numeric*  Double:: operator-(const Numeric& other){
  double newValue=this->DoubleValue-other.toDouble();
        return new Double(newValue);
}
 Numeric*  Double:: operator*(const Numeric& other){
  double newValue=this->DoubleValue*other.toDouble();
        return new Double(newValue);
 }
 Numeric*  Double:: operator/(const Numeric& other){
   double newValue=this->DoubleValue/other.toDouble();
        return new Double(newValue);
 }


bool Double:: operator<(const Numeric& other)const{ return this->toFloat()<other.toFloat();}
bool Double:: operator>(const Numeric& other)const{return this->toFloat()>other.toFloat();}
bool Double:: operator==(const Numeric& other)const{return this->toFloat()==other.toFloat();}
void Double:: print(ostream&os) const{
os<<"Value of double:"<<DoubleValue<<endl;;
}


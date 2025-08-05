
#include"Float.h"

    float Float::toFloat()const{
        return FloatValue;
    }
    int Float::toInt() const{
        return static_cast<int>(FloatValue);
    }
    double Float::toDouble()const{
        return static_cast<double>(FloatValue);
    }
    void Float::setFloat(float value){
        FloatValue=value;
    }
    Float::Float(){
        setFloat(0);
    }
    Float::Float(float value){
        setFloat(value);
    }
    Float::Float(Numeric* other){
        this->FloatValue=other->toFloat();
    }

    Float::~Float(){
        cout<<"Float destructor is called!\n";
    }
   Numeric*  Float:: operator+(const Numeric& other){
        double newValue=this->FloatValue+other.toFloat();
        return new Float(newValue);
    }
Numeric*  Float:: operator-(const Numeric& other){
  double newValue=this->FloatValue-other.toFloat();
        return new Float(newValue);
}
 Numeric*  Float:: operator*(const Numeric& other){
  double newValue=this->FloatValue*other.toFloat();
        return new Float(newValue);
 }
 Numeric*  Float:: operator/(const Numeric& other){
   double newValue=this->FloatValue/other.toFloat();
        return new Float(newValue);
 }


bool Float:: operator<(const Numeric& other)const{ return this->FloatValue<other.toFloat();}
bool Float:: operator>(const Numeric& other)const{return this->FloatValue>other.toFloat();}
bool Float:: operator==(const Numeric& other)const{return this->FloatValue==other.toFloat();}
void Float:: print(ostream&os) const{
os<<"Value of float:"<<FloatValue<<endl;;
}


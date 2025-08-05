#include "Int.h"
   // void Int:: setInt(int value){this->getInt=value;}
    int Int::toInt()const{
        return IntValue;
    }
    double Int::toDouble()const{
         return static_cast<double>(IntValue);
    }
    float Int::toFloat()const{
        return  static_cast<float>(IntValue);
    }
    void Int::setInt(int value){
        IntValue=value;
    }
     Int::Int(Numeric* other){
       this->IntValue=other->toInt();
    }
    Int::Int(){
        setInt(0);
    }
    Int::Int(int value){
        setInt(value);
    }

    Int::~Int(){
        cout<<"Int destructor is called!\n";
    }
Numeric*  Int:: operator+(const Numeric& other){
        int newValue=this->IntValue+other.toInt();
        return new Int(newValue);
    }
Numeric*  Int:: operator-(const Numeric& other){
  int newValue=this->IntValue-other.toInt();
        return new Int(newValue);
}
 Numeric*  Int:: operator*(const Numeric& other){
  int newValue=this->IntValue*other.toInt();
        return new Int(newValue);
 }
 Numeric*  Int:: operator/(const Numeric& other){
   int newValue=this->IntValue/other.toInt();
        return new Int(newValue);
}
// Numeric* Numeric:: operator=(const Numeric& other){
// this->IntValue=other.toInt();
// }

bool Int:: operator<(const Numeric& other)const{
    return this->IntValue<other.toDouble();}
bool Int:: operator>(const Numeric& other)const{return this->IntValue>other.toDouble();}
bool Int:: operator==(const Numeric& other) const{return this->IntValue==other.toDouble();}
void Int:: print(ostream&os) const{
os<<"Value of int:"<<IntValue<<endl;
}


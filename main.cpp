#include"Double.h"
#include"Int.h"
#include"Float.h"
#include"Complex.h"
#include<vector>
using namespace std;


int main(){
    vector<Numeric*> numbers;
    // Create some Int and Double objects and add to vector
    numbers.push_back(new Int(10));
    numbers.push_back(new Double(10.1));
    numbers.push_back(new Int(7));
    numbers.push_back(new Double(2.71));
    numbers.push_back(new Float(2.71f));
    numbers.push_back(new Complex(2));
    numbers.push_back(new Complex(3,2));
    numbers.push_back(new Complex(3,-2));

 //test cases to check that the comparisons operator is working
    if(*numbers[3]==*numbers[4]){
                cout<<*numbers[3]<<" equals "<<*numbers[4];
    }
     if(*numbers[4]>*numbers[3]){
        cout<<*numbers[4]<<" more than "<<*numbers[3];
    }
     if(*numbers[3]<*numbers[4]){
         cout<<*numbers[4]<<" more than "<<*numbers[3];
    }
     if(*numbers[5]<*numbers[6]){
         cout<<*numbers[6]<<" more than "<<*numbers[5];
    }
     if(*numbers[5]<*numbers[2]){
         cout<<*numbers[2]<<" more than "<<*numbers[5];
    }
     if(*numbers[0]>*numbers[7]){
  cout<<*numbers[0]<<" more than "<<*numbers[7];
    }
    if(*numbers[1]>*numbers[3]){
 cout<<*numbers[1]<<" more than "<<*numbers[3];
    }

    cout<<"Finish\n";
    // Print all numbers
    std::cout << "Initial numbers:" << std::endl;
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout<<numbers[i];
         std::cout << std::endl;
     }
    
    // Numeric* result =  *numbers[1]+*numbers[0];
     Int sum=*numbers[3]+*numbers[7];//check for conversion constructor
     cout<<sum; 
    //sort the numbers;
    for(int i=0;i<numbers.size()-1;i++){
        for(int j=i+1;j<numbers.size();j++){
            if(*numbers[i]>*numbers[j]){
                Numeric*temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;
                  
            } 
        }
       }
    cout<<"Sorted array:\n";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout<<*numbers[i];
        std::cout << std::endl;
    }

    // Clean up allocated memory
    for (size_t i = 0; i < numbers.size(); ++i) {
        delete numbers[i];
    }
    

    return 0;


}
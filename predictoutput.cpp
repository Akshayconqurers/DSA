#include<iostream>
using namespace std;

class A{
public:

      A() { cout<< "constructor A"<<endl;}
      ~A() { cout<< "destructor A"<<endl;}
};

class B : public A{
public:
       B() {cout<<"Constructor B"<<endl;}    
       ~B() {cout<<"destructor B"<<endl;}
};

int main(){
    B obj;
    return 0;
}
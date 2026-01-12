#include<iostream>
using namespace std;
 class Complex{
 	int a,b;
 	public:
 		//Creating a constructor
 		//Constructor is a special member function with same name as of the class.
 		//It is used to initialize the objects of its class
 		//it is automatically invoked whener an object is created
 	
	 	Complex(void);//Constructor declaration
     void printNumber();
 };
 
 void Complex::printNumber()
 {
 	cout<<"The number is"<<a <<"+" <<b<<endl;
	 
	 } 
 	Complex :: Complex(void){
 		a=10;
 		b=0;
	 }
	 int main(){
	 	Complex c;
	 	c.printNumber();
	 	return 0;
	 }

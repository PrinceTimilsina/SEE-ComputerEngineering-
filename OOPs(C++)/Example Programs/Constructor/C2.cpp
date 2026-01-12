#include<iostream>
using namespace std;

class Complex
{
	int a,b;
 	public:
	Complex(int,int);//Constructor declaration
     void printNumber(){
 	cout<<"The number is"<<a <<"+" <<b<<endl;
	 
	 } 
 };
 	Complex :: Complex(int x,int y){
 		a=x;
 		b=y;
	 }
	 int main(){
	 	Complex a(4,7);
	 	
	 	Complex b = Complex(5,7);
	 	a.printNumber();
	 	b.printNumber();
	 	return 0;
	 }

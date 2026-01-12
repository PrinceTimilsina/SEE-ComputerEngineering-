#include<iostream>
using namespace std;
class teacher;
class student;
class teacher{
	private:
		string name;
		string address;
	public:
		teacher(string name,string address){
			strcpy(this->name,name);
			strcpy(this->age,age);
			friend int display(student &s,teacher &t);
		}
}; 
class student{
	private:
		student(string x,string y){
			strcpy(n,x);
			strcpy(a,y);
			friend int sisplay()
		}
};

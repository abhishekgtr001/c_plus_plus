#include<iostream>
using namespace std;


class Employee
{
	public:
		string name;
		int salary;
	Employee(string name, int salary)
	{
		this->name=name;
		this->salary=salary;
	}
	void printdetails()
	{
		 cout<<"the name of the employee is: "<<name<<endl<<"the salary of the employee is: "<<salary<<endl;
	}
};

int main()
{
	Employee har("Abhishek",100);
	//har.name="harry";
	//har.salary=100;
	har.printdetails();
	return 0;
}

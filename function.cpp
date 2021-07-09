#include<iostream>
using namespace std;

	int add(int a, int b)
	{
		int c;
		c= a+b;
		return c;
	}
int main()
{
	int a,b;
	cout<<"Enter a number: "<<endl;
	cin>>a;
	cout<<"Enter a number: "<<endl;
	cin>>b;
	cout<<"the sum of the numbers are: "<<add(a,b)<<endl;
	return 0;
}

#include<iostream>
using namespace std;
class Sample
{
	int id;
	public:
		Sample(int x)
		{
			id=x;
		}
		Sample(Sample &z) //copy constructor
		{
			id=z.id;
		}
		void display()
		{
			cout<<"id is = "<<id<<endl;
		}
};
int main()
{
	Sample s(20);
	s.display();
	
	Sample s1(s); //call copy constructor
	s1.display();
	}

#include<iostream>
using namespace std;
class Line
{
		private:
		double length;
		public :
//	     void setLength(double len);
//       	 double getLength(void);
	     Line(double len); //this is constructo r
};
  Line::Line(double len)
  {
  	length=len;
	cout<<"Object is being created, length ="<<len<<endl;
  }
//   void Line::setLength(double len){
//   	  length=len;
//   }
//   double Line::getLength(void)
//   {
//   	return length;
//   }
   int main()
   {
   	Line line(10.00);
   	Line line2(6.00);
//   	cout<<"length of line "<<line.getLength()<<endl;
//   	line.setLength(6.00);
//   	cout<<"length of line "<<line.getLength()<<endl;
   }


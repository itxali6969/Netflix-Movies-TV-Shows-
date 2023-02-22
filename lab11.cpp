#include<iostream>
using namespace std ;

class Mathclass
{
	private:
		    int number;
	public:
	       Mathclass(){
	       	number = 0;
		   }	    
		   Mathclass(int x){
		   	number = x;
		   }
	Mathclass operator +(Mathclass m)
		   {
		   	Mathclass temp;
		   	temp.number = number+m.number;
		   	return temp;
		   }
		   void Display(){
		   	cout<<"result"<<number<<endl;
		   }
};
int main(){
   Mathclass first (2), second (4), result;
   result = first + second;
   result.Display();
   system("pause");
}

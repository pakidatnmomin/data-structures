#include<iostream>
using namespace std;
class bass1
{
	private:
	string features,function;
	public:
		void input()
{
	cout <<"enter the features and function of laptop";
	cin>>function>>features;
	
  }  
		
void show()
{
	cout<<"features and function of laptop";
	cout<<function<<features;
}
};
class base2
{
	private:
string features,functions;		
public:
void input1()
{
cout<<"enter the function and function of pen";
cin>feature>>function;
}
void show1()
{
	cout<<"features and function of pen is";
	cout<<function<<feature;
		}		
};
class derive:public base1,public base2
{
	private:
		void input2()
		{
			cout<<"enter the features and function of pen";
			cin>>function>>features;
		}
		void show2()
{
	cout<<"function and features of pen";
	cout<<function<<features;
	
}

};
main()
{
	derive ob
	ob.input2();
	ob.show2();
	ob.input1();
	ob.show1();
	ob.input();
	ob.show();
}

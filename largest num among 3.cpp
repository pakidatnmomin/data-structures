#include<iostream>
using namespace std;
int main() {
	int num1,num2,num3;
	cout<<" Enter value for 1st number";
	cin>>num1;
	cout<<" Enter value for second number";
	cin>>num2;
	cout<<" Enter value for third number";
	cin>>num3;
	if(num1>num2&&num1>num3)
	 {
		cout<<" 1st number is greatest:"<<endl<<"that is= "<<num1;
	}
	 else if(num2>num1&&num2>num3)
	  {
		cout<<" Second number is greatest"<<endl<<"that is= "<<num2;
	}
	 else
	 {
		cout<<" Third number is greatest"<<endl<<"that is= "<<num3;
	}
	return 0;
}

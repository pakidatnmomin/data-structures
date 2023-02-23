#include<iostream>

class birds
{
	public:
birds()
{
cout<<"birds can not give direct birth "
}
};
class insects
{
	public:
insects()
{
cout<<"insects can flap"
}
};
class bat:public birds,public inseccts {
};
int main()
{
	bat b1;
	return 0;
}


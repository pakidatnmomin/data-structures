#include<iostream>

using namespace std;
int main()
{
   int num, temp=0, last, first, sum=0;
   cout<<"Enter a Number: ";
   cin>>num;
   while(num!=0)
   {
      if(temp==0)
      {
         last = num%10;
         temp++;
      }
      first = num%10;
      num = num/10;
   }
   sum = first + last;
   cout<<"\nSum of First ("<<first<<") and Last ("<<last<<") Digit = "<<sum;
   cout<<endl;
   return 0;
}

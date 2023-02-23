#include<iostream>

using namespace std;
int main()
{
   int total, days, weeks, years;
   cout<<"Enter Total Number of Days: ";
   cin>>total;
   years = total/365;
   
   weeks = ((total%365)%30)/7;
   days = ((total%365)%30)%7;

   cout<<"\nYears: "<<years<<endl;
   
   cout<<"Weeks: "<<weeks<<endl;
   cout<<"Days: "<<days<<endl;
   cout<<endl;
   return 0;
}

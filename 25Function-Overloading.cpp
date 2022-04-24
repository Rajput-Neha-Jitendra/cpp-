//Function Overloading
#include<iostream>
using namespace std;

int sum(int a,int b)
{
 return(a+b);
}

int sum(int a,int b,int c)
{
 return(a+b+c);
}

int main()
{
  cout<<"Sum of two Numbers:"<<sum(5,5)<<endl;
  cout<<"Sum of three Numbers:"<<sum(3,3,3);
}

//2:Function Overloading
#include <iostream>

using namespace std;
 

void print(int i) {

  cout << " Here is int " << i << endl;
}

void print(double  f) {

  cout << " Here is float " << f << endl;
}

int main()
{
  print(5);
  print(6.3);
}
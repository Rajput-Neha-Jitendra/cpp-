#include<iostream>
using namespace std;

 inline int add(int a ,int b)
{
  return (a*b);
}
int main()
{
    int x=10,y=5;
    int h=6,i=6;
    cout << add(x,y) << endl;
    cout << add(h,i);
    return 0;
}
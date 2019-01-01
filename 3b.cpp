#include<iostream>
using namespace std;

class In
{
public:
  int count;
public:
  In()
  {
    cout<<"enter the count value\n";
    cin>>count;
  }
  void operator ++(int)
  {
    cout<<"count value after post increment="<<count++<<endl;
  }
  void operator ++()
  {
    cout<<"count value after pre increment="<<++count<<endl;
  }
};

int main()
{
  In i;
  i++;
  ++i;

}

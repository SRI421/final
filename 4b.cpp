#include<iostream>
#include<string.h>
using namespace std;

class A
{
public:
  char *a=new char[25];
public:
  A()
  {
    a='\0';
  }
  A(char *b)
  {
    strcpy(a,b);
  }

  A cat(A p)
  {
    strcat(a,p.a);
    return *this;
  }
};


int main()
{
  A a1;
  A b("banglore ");
  //A c(b);
  A d("city");
  b.cat(d);
  cout<<"the concatinated string is "<<b.a<<endl;
  return 0;
}


#include<iostream>
using namespace std;
int main()
{
  try
  {
    try
    {
      throw "a char exception";
    }
    catch(const char* e)
    {
      cout<<"char type in inner block"<<endl;
      cout<<"rethrowing th eexception"<<endl;
      throw;
    }
  }
  catch(const char* e)
  {
    cout<<"char type in enter block: "<<e<<endl;
  }
  catch(...)
  {
    cout<<"unexpected exception in enter block"<<endl;
  }
}

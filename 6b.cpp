#include<iostream>
using namespace std;

class Stack
{
public:
  int arr[6];
  int top=-1;
public:
  void push(int x)
  {
    try{
      if(top>=6) throw x;
      else
      {
        arr[++top]=x;
      }
    }
    catch(int y)
    {
      cout<<y<<" cannot push bcos stack is full\n";
      exit(0);
    }
  }
  int pop()
  {
    try
    {
      if(top==-1) throw 'b';
      else
      {
        return arr[top--];
      }
    }
    catch(char b)
    {
      cout<<"stack is empty\n";
    }
  }
};

int main()
{
  Stack s;
  int ch;
  while(1)
  {
  cout<<"enter 1 to push, 2 to pop, 3 to exit\n";
  cin>>ch;

  switch(ch)
  {
    case 1:int p;
            cout<<"enter element to push into stack\n";
            cin>>p;
            s.push(p);
            break;
    case 2:

            cout<<"poped element is "<<s.pop()<<endl;
            break;
    case 3: exit(0);
  }
  }
}

#include<iostream>
using namespace std;

template <class T>

class Bubble
{
public:
  int i,j,n;
  T arr[20];

public:
  void read()
  {
    cout<<"enter no of elements\n";
    cin>>n;
    cout<<"enter the elements into array\n";
    for(i=0;i<n;i++)
    cin>>arr[i];
  }

  void sort()
  {
    T temp;
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(arr[j]>arr[j+1])
    {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
    }

  }
  void display()
  {
      cout<<"the sorted elements are\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<endl;
  }
};

int main()
{
  int ch;
  while(1)
  {
  cout<<"enter 1 for integer, 2 for character, 3 to exit \n";
  cin>>ch;

  switch(ch)
  {
    case 1: Bubble<int> b;
            b.read();
            b.sort();
            b.display();
            break;
    case 2: Bubble<char> a;
            a.read();
            a.sort();
            a.display();
            break;
    case 3: exit(0);
  }
  }
}

#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
vector<int>::iterator i;
int main()
{
  vector<int> v;
  int ch;
  while(1)
  {
      cout<<"1.Insert\n2.Delete\n3.Display\n4.vector size\n5.clear vetor\n 6.exit\n";
      cin>>ch;
      switch(ch)
      {
          case 1:
                  int x;
                  cout<<"Enter the value to be inserted  : ";
                  cin>>x;
                  v.push_back(x);
                  break;
          case 2:
                  int y;
                  cout<<"The element deleted is  : "<<v[v.size()-1];
                  v.pop_back();
                  break;
          case 3:
                for(i=v.begin();i!=v.end();i++)
                {
                  cout<<'>'<<*i<<endl;
                }
                break;
          case 4:cout<<"size of vector is "<<v.size();
                      break;
          case 5:v.clear();
                      break;
          case 6: exit(0);
      }
  }
}

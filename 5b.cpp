#include<iostream>
#include<list>
using namespace std;


int main()
{
  list<int> l;
  list<int>::iterator itr;
  int ch,x;

  while(1)
  {
    cout<<"enter 1.insert front\n 2.insert end\n 3.delete front\n4.delete back\n";
    cout<<"5.size of list\n 6.reverse\n 7.merge\n";
    cin>>ch;
    switch(ch)
    {
      case 1: cout<<"enter element to insert front\n";
              cin>>x;
              l.push_front(x);
              break;
      case 2: cout<<"enter element to insert end\n";
              cin>>x;
              l.push_back(x);
              break;
      case 3: itr=l.begin();
              cout<<"element deleted is "<<*itr<<endl;
              l.erase(itr);
              break;
      case 4: itr=l.end();
              cout<<"element deleted is "<<*itr<<endl;
              l.erase(itr);
              break;
      case 5: cout<<"size of list is "<<l.size()<<endl;
              break;
      case 6:cout<<"intial list\n";
              for(itr=l.begin();itr!=l.end();itr++)
              cout<<*itr<<" ";
              cout<<endl;
              l.reverse();
              cout<<"reversed list\n";
              for(itr=l.begin();itr!=l.end();itr++)
              cout<<*itr<<" ";
              cout<<endl;
              break;
      case 7: list<int> l1,l2;
              cout<<"enter 3 datas for list1\n";
              for(int i=0;i<3;i++)
              {
                cin>>x;
                l1.push_back(x);
              }
              cout<<"enter 3 datas for list2\n";
              for(int i=0;i<3;i++)
              {
                cin>>x;
                l2.push_back(x);
              }
              l2.merge(l1);
              l2.sort();
              cout<<"new merged list is\n";
              for(itr=l.begin();itr!=l.end();itr++)
              cout<<*itr<<" ";
              cout<<endl;
              break;



    }
  }
}

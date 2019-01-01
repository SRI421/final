#include<iostream>
#include <iterator>
#include <map>
using namespace std;
map<char,int>::iterator i;
int main() {
  map<char,int> m;
  int ch;
  char key;
  while(1){
      cout<<"1.Insert\n2.Search\n3.Display\n4.size of map\n5.Delete\n6.exit\n";
      cin>>ch;
      switch(ch){
          case 1:
                int x;
                cout<<"Enter the key and value to be inserted  : ";
                cin>>key>>x;
                m.insert(pair<char,int>(key,x));
                break;
          case 2:
                int y;
                cout<<"The element key to be searched : ";
                cin>>key;
                i=m.find(key);
                cout<<"The value is : "<<i->second<<endl;
                break;
          case 3:
                for(i=m.begin();i!=m.end();i++){
                    cout<<'>'<<i->first<<"\t"<<i->second<<endl;
                  }
                  break;
          case 5:
              cout<<"Enter the key to be deleted : ";
              cin>>key;
              m.erase(key);
              break;
          case 4: cout<<"the size of map is "<<m.size()<<endl;
                  break;
          case 6:exit(0);

      }
  }
}

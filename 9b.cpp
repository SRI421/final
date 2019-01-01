#include <iostream>
using namespace std;
class Publication{
  public:
  string title;
  float price;
  string getTitle(){
    return title;
  }
  float getPrice(){
    return price;
  }
  void putData(){
    cout<<"Enter the Title of the publication : ";
    cin>>title;
    cout<<"Enter the price of the publication : ";
    cin>>price;
  }
};


class book : public Publication{
  public:
  int pagecount;
  void putBook(){
    putData();
    cout<<"Enter the Pagecount of the book : ";
    cin>>pagecount;
  }
  int getBook(){
    return pagecount;
  }
};


class tape : public Publication{
  public:
  int playingTime;
  void putTape(){
    putData();
    cout<<"Enter the Playing time of the tape ( in Hrs ): ";
    cin>>playingTime;
  }
  int getTape(){
    return playingTime*60;
  }
};

int main() {
  book b;
  b.putBook();
  tape t;
  t.putTape();
  cout<<"Title : "<<b.getTitle()<<" Price : "<<b.getPrice()<<" Page Count : "<<b.getBook()<<endl;
  cout<<"Title : "<<t.getTitle()<<" Price : "<<t.getPrice()<<" Play time : "<<t.getTape()<<endl;
}

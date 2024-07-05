#include<iostream>
using namespace std;

class car{
    public:
  virtual  void start()=0;
   virtual void stop()=0;
};
class swift:public car{
    public:
    void start(){
        cout<<"swift start"<<endl;
    }
     void stop(){
        cout<<"swift stop"<<endl;
    }
};
class nano:public car{
    public:
    void start(){
        cout<<"nano start"<<endl;
    }
     void stop(){
        cout<<"nano stop"<<endl;
    }
};
int main(){
    car *p=new swift();
    p->start();
    p->stop();
    cout<<endl;
    p=new nano();
    p->start();
    p->stop();
}

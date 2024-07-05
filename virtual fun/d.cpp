#include<iostream>
using namespace std;
class base{
    public:
   virtual void fun(){                          // without virtual base class called 
        cout<<"haseen"<<endl;
    }
};
class derived:public base{
    public:
    void fun(){
        cout<<"harsh"<<endl;
    }
};
int main(){
     base *p=new derived();
     p->fun();
     
}

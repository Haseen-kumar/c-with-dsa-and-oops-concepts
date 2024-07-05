#include<iostream>
using namespace std;

class base{
    public:
    virtual void fun1()=0;
    virtual void fun2()=0;
};
class derived:public base{
    public:
    void fun1(){
        cout<<"herllo"<<endl;
    }
    void fun2(){
        cout<<"gof"<<endl;
    }
};
int main(){
    derived o;
    o.fun1();
    o.fun2();
    cout<<endl;

     base *p=new derived();
    p->fun1();
    p->fun2();

}

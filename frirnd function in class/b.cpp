#include<iostream>
using namespace std;
class you;

class my{
    private: int a;
    protected: int b;
    public: int c;
    friend you;

};
class you{
    public:
    my t;
    void fun(){
  t.a=10;

  t.b=20;
  t.c=30;
  cout<<t.a<<t.b<<t.c;
    }

};
int main(){
    you o;
    o.fun();

}

#include<iostream>
using namespace std;


class outer{
    public:
    int a=10;
    static int b;
    void fun(){
        i.fun1();
        cout<<i.x;
        
    }

    class inner{
        public:
        int x=25;
        void fun1(){
            cout<<b<<endl;
        }
    };
    inner i;
};
    int outer::b=10;
    int main(){
        outer p;
        p.fun();
        
    }


#include<iostream>
using namespace std;

class test{
    private:
    int a;
    int b;
    public:
    static int count;
    test(){
        a=10;
        b=20;
        count++;
    }


    
    static int getCount(){
        return count;
    }
};
int test::count=0;  // imp for static count variable
int main(){
    test t1;
    cout<<t1.count<<endl;
    test t2;
    cout<<t2.count<<endl;
    // cout<<test::count<<endl;
    // test t1,t2;
    cout<<t1.getCount()<<endl;
  cout<<test::getCount()<<endl;
  cout<<t1.count<<endl;
   cout<<t2.count<<endl;
  t1.count =90;
  cout<<t2.count;
    

}
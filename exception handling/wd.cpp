#include<iostream>
using namespace std;
int main(){
    int a=10,b=2,c;
    try{
        if(b==0)
        throw 101;
        c=a/b;
        cout<<c<<endl;
    }
    catch(int e){
        cout<<" dividing by zero "<<e<<endl;
    }
    cout<<"bye";
}
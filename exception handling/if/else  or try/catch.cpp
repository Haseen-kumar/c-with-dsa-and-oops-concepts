#include<iostream>
using namespace std;


int divison(int x,int y){
    if(y==0)
    throw 1;
    return x/y;
};

int main(){
    int a=10,b=2,c;
    try{
        c=divison(a,b);
        cout<<c<<endl;
    }
    catch(int e){
        cout<<"having an error "<<endl;
    }
    cout<<"bye"<<endl;
}

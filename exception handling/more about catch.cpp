#include<iostream>
using namespace std;
int main(){
    // can be donr for the child and parent clas  also...
    // child class come first 
    // see in note books ...

int a=10,b=0,c;

try{
if(b==0)
throw 10.1;
c=a/b;
cout<<c<<" hello "<<endl;

}
catch(int e){
cout<<" oh oh "<<endl<<e;

}
catch(double e){
cout<<" oh oh "<<endl<<e;
}



}
#include<iostream>
using namespace std;

// int main(){
//    const int  x=10;
//     // x++;
//     cout<<x;

// }


// int main(){
//     int x=34;
//     int * const ptr=&x;
//     ++*ptr;
//     cout<<*ptr;

// }


// int main(){
//     int x=34;
//    const int * const ptr=&x;
   
//     cout<<*ptr;
//     int y=60;
//     ptr=&y;
//     cout<<*ptr;
// }

// class demo{
//     public :
//     int x=45;
//     int y=56;
//     void display() const
//     {
//         // x++;
//         cout<<x<<" "<< y<<endl;
//  }
// };
// int main(){
//     demo d;
//     d.display();
// }

 void fun( const int &a,int &b){
    cout<<a<<" "<<b<<endl;
    // a++;
 }

int main(){
    int x=20;
    int y=109;
    fun(x,y);
    cout<<" main "<<x<<" "<< y<<endl;
    }

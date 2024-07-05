#include<iostream>
using namespace std;
 void  ulti(char a[],int n){
    int s=0;
    int e=n-1;   // -1 is for '\0'
   
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
 }

//  void print(char a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i] ;
//     }
//  }



int main (){

    char  a[]="haseen";
    int n= sizeof(a);
    ulti(a,n);
  //  print(a,n);
  cout<<a<<endl;


    return 0;
}
#include<iostream>
#include<vector>
using namespace std;


int main(){
    int a[4]={3,2,2,3};
    vector<int>b;
    int n=4;
    int v=3;
    int i;
    for(i=0;i<n;i++){
    if(a[i]!=v){
      b.push_back(a[i]);
      b+1;
    }

    }

   cout<<b<<endl;
   




    return 0;
}
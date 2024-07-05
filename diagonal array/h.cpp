#include<iostream>
using namespace std;


int main(){
    int x,y;
    cin>>x;
    cin>>y;

    int m[x][y];
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>m[i][j];
        }
     }
  

     
      for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
   
     
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(i==j){
                cout<<m[i][j]<<" ";
            }
           
        }
     
}

   
}
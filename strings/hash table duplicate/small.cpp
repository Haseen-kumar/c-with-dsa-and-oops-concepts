#include<iostream>
using namespace std;
int main(){

    char a[]="hassssssseenn";
      int  h[26]={0};
    int i;
    for(i=0;a[i]!='\0';i++){
        h[a[i]-97]+=1;
    }
    for(i=0;i<26;i++){
        if(h[i]>1){
            cout<<char(i+97)<<" ";
            
          cout<<h[i]<<" ";
          cout<<endl;
                   }
    }



    return 0;
}
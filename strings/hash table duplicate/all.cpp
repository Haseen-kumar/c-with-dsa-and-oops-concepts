#include<iostream>
using namespace std;
int main(){
    char a[]="HASEEemhgdhtydgrdsrhgrRETSJYTHEDYen";
    int h[52]={0};
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<91){
        h[a[i]-65]+=1;
        }
        else if(a[i]>=97 && a[i]<123){
             h[a[i]-71]+=1;
        }
}
for(i=0;i<52;i++){
    if(h[i]>1 && i<=25){
      
        cout<<char(i+65)<<" " ;
        cout<<h[i];
        cout<<endl;

    }
    else if(h[i]>1){
           cout<<char(i+71)<<" ";
          cout<<h[i];
          cout<<endl;
    }
      

    

}



    return 0;
}
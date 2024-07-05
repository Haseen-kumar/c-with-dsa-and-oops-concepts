#include<iostream>
using namespace std;

 int valid(char *name){
    int i=0;
    for(i=0;name[i]!='\0';i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97
        && name[i]<=122) && !(name[i]>=48 && name[i]<=57)){
            return 0;
        }
        
    }
     return 1;
   
 }

int main(){
    // char *name="ejghf"
   char *name=new char[5];
   for(int i=0;i<5;i++){
    cin>>name[i];
   }


  if(valid(name)){
    cout<<" it is a valid string"<<endl;

  }
else{
    cout<<" does not a valid password"<<endl;
}






    return 0;
}
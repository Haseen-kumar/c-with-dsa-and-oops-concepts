#include<iostream>
using namespace std;

class student{

   public:
   int roll;
   string name;
   static int addno;
   student(string n){
    name =n;
    addno++;
    roll=addno;

   

   }
   void display(){
    cout<<"name :--"<<name<<endl<<"roll :--"<<roll<<endl;
   }

   
};
int student::addno=0;
int main(){
   student s1("john");
   student s2("ddgder");
   student s3("ragvsrgv");
   student s4("dfsgvbsfb");

  s1.display();
   s2.display();
    // s3.display();
    //  s4.display();
     cout<<"number od addmisdsion "<<student::addno;
}
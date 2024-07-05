#include<iostream>
using namespace std;
class student{
    public:
   int roll;
   string name;
   static int addno;
   student(string n){
    addno++;
    roll=addno;
    name=n;
   }
   void display(){
    cout<<"name "<< name<<endl<<"roll "<<roll<<endl;

   }
};
int student::addno=0;
int main()
{
    student s1("haseen");
    student s2("harsh");
    student s3("vikas");
    student s4("nano");
       student s5("dfgdfc");
    student s6("fdgedf");
 
    s1.display();
    s5.display();
    cout<<"numaber sdamission "<<student::addno<<endl;
}
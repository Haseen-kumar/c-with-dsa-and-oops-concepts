#include<fstream>
#include<iostream>

using namespace std;
int main(){

    ofstream abc("my.text");
    abc<<"jhguigkjhkkuh"<<endl;
    abc<<4654<<endl;
    abc.close();



    ifstream def("my.text");
    

    // or def.open("my.text");
    string str;
    int x;
    def>>str;
    def>>x;
    cout<<str<<" "<<x<<endl;
    if(def.eof()){
        cout<<" end of file is reached "<<endl;
    }
    def.close();

}
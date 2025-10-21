#include<iostream>
using namespace std;
int main(){
    string input;
    cout<<"Enter a line:";
    getline(cin,input);
    if(input.length()>=2&&input[0]=='/'&&input[1]=='/')
        cout<<"it is a single line comment"<<endl;
    else if(input.length()>=4&&input[0]=='/'&&input[1]=='*'&&
            input[input.length()-2] =='*'&& input[input.length()-1] =='/'
            )
    cout<<"it is a multi-line comment"<<endl;
    else
        cout<<"it is not a comment"<<endl;

    return 0;
    }

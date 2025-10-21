#include<iostream>
using namespace std;
bool isoperator(char ch)
{
    char operators[]={'+','-','*','/','%','=','\0'};
    for(int i=0;operators[i] !='\0';i++){
        if(ch==operators[i])
            return true;
    } return false;
}
int main(){
    string input;
    cout<<"enter expression:";
    cin>>input;
    cout<<"0perators found:"<<endl;
    for(int i=0; i<input.length();i++){
        if(isoperator(input[i])){
            cout<<input[i]<<endl;
        }
    }
return 0;












}

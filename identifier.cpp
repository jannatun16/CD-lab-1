#include<iostream>
using namespace std;
bool isAlphabet(char ch ){
    if(( ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z'))
        return true;
    else
        return false;
}
bool isdigit(char ch ){
    if( ch>='0'&& ch<='9')
        return true;
    else
        return false;
}
bool isidentifier(string input){
int len=input.length();{
if(len==0)
    return false;
}
if(!(isAlphabet(input[0])||input[0]=='_')){
    return false;}
for(int i=1;i<len;i++){
    if(!(isAlphabet(input[i])||(isdigit(input[i])||input[i]=='_')))
       return false;
}

return true;
}
int main(){
    string word;
cout<<"Enter:";
cin>>word;
if (isidentifier(word)){
    cout<<"identifier is valid";}
    else
     cout<<"identifier is  not valid";
    return 0;
}

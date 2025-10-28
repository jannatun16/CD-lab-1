#include<iostream>
using namespace std;
int main(){
string first,last,full=" ";
cout<<"First name"<<endl;
cin>>first;
cout<<"Last name"<<endl;
cin>>last;
for(int i=0;i<first.length();i++){

    full = full + first[i];}
    full= full +' ';
   for(int i=0;i<last.length();i++){

    full=full + last[i];

}
cout<<"Full name:"<<full;
return 0;
}

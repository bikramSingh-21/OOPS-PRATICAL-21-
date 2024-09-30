/*Implement a C++ program to find the non-repeating characters in string*/

#include <iostream>
using namespace std;
int main(){
 string str;
 cout<<"Enter the String: ";   
 getline(cin,str);
 string ans ;

 for(int i=0 ;i<str.size();i++){
   for(int j=0;j<str.size();j++){
    if(i!=j && str[j]!=-1){
        if(str[i]==str[j]) {
            str[j] = -1;
        }
    }
   }
 }

 for(int i=0;i<str.size();i++){
    if(str[i]!=-1){
        cout<<str[i]<<" ";
    }
 }

}
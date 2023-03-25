#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    // string str;
    // str="1A2B3C";
    // stringstream sso(str);
    // char a;
    // int b;
    //  while(sso>>b)
    //  {
    //    cout<<b; 
    //  }
    string str;
    string first_name="akash";
    string last_name="dange";
    int roll=67;
    stringstream ss;//object creation of stringstream object
    ss<<first_name<<last_name<<roll; //setting string to ss object
    str=ss.str();//str() method return string of ss object
    cout<<str<<endl;//print string
    cout<<str[1];//accessing string using index

    return 0;
}
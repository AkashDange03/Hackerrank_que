//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s) //3+i4
    {
        int v1=0;//3
        int i=0;
        while(s[i]!='+')//3  false
        {
            v1=v1*10+s[i]-'0';//0+3-'0'=3
            i++;
        }
        cout<<"first while loop:"<<i<<endl;
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')//+ i 4-false
        {
            i++;
        }
         cout<<"second while loop:"<<i<<endl;
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        cout<<"third while loop:"<<i<<endl;
        a=v1;
        b=v2;
    }
};

Complex operator+(Complex A,Complex B)
{
    Complex res;
    res.a= A.a + B.a;
    res.b= A.b + B.b;
    return res;
}

ostream& operator<<(ostream& out,Complex &res)
{
    return out<<res.a<<"+i"<<res.b;
} 

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}

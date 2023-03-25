#include<iostream>
using namespace std;
class person{
    public:
        string first_name;
        string last_name;
        person(string f,string l)
        {
            first_name=f;
            last_name=l;
        }
        
};
 ostream& operator <<(ostream &out, person &x)
{
    return out<<x.first_name<<" "<<x.last_name;
}

int main()
{
 person p("Akash","Dange");
 person x("naruto","uzumaki");
 cout<<p;
 cout<<x;
 return 0;
}
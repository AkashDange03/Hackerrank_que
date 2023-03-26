#include<iostream>
using namespace std;
//hackerrank
//user defined exception using class
class Badlength{
    private:
    int n;
    public:
    Badlength(int len) //constructor to initialize int n 
    {
        n=len;
    }
    int what()
    {
        return n; //return length
    }
};
int main()
{
    int test_cases;
    int len;
    cin>>test_cases;
    string username="akash";
     while(test_cases--)
     {
     string username;
     cin>>username;
     len=username.length();
     try{
         if(len>2)
            {
                cout<<"valid\n"<<endl;
            }
        else{
                throw Badlength(len);//throwing exception if length of username is less than 2
            }
        }
        catch(Badlength e) //catch exception
        {
            cout<<"Too short:"<<e.what()<<"\n"<<endl;
        }
     }
   return 0;
}
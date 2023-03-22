#include<iostream>
using namespace std;
class complex{
      int rel;
      int img;
    public:
      complex(){
        rel=0;
        img=0;
      }
      complex(int r,int i){
        rel=r;
        img=i;
      }
      complex operator+(complex &b){
        complex c;
        c.rel=rel+b.rel;
        c.img=img+b.img;
        return c;
      }
      void display(complex c)
      {
        cout<<"Addition: "<<c.rel<<"+i"<<c.img;
      }
};
int main()
{
  complex a(1,2);
  complex b(1,2);
  complex res;
  res=a+b;
  res.display(res);
  return 0;
}
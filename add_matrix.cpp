#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<vector<int>> a;
  vector<int> a1;
  a1.push_back(2);
  a1.push_back(2);
  a1.push_back(2);
  a1.push_back(2);
  // cout<<a1.size()<<endl;
  vector<int> a2;
  a2.push_back(1);
  a2.push_back(2);
  a2.push_back(3);
  a2.push_back(4);
  a.push_back(a1);
  a.push_back(a2);
  // cout << a.size() << endl;
  vector<int> c;
  for (int i = 0; i < a.size(); i++) {
    cout<< "Matrix " << i << ": ";
    for (int j = 0; j < a[0].size(); j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < a.size() - 1; i++) {
    // i=0  0<1 true
    for (int k = 1; k < a.size(); k++) {
      // k=1 1<4
      for (int j = 0; j < a[i].size(); j++) {
        // j=0 0<4
        int ele;
        ele = a[i][j] + a[k][j];
        c.push_back(ele);
        // 0=a[0][0]+a[1][0] =3
        // 1=a[0][1]+a[1][1] =4
        // 2=a[0][2]+a[1][2] =5
        // 3=a[0][3]+a[1][3] =6
      }
    }
  }
  cout << "Additon of matrix: ";
  for (int i = 0; i < c.size(); i++) {
    cout << c[i] << " ";
  }
  cout<<endl;
  // cout << a2.size()<<endl;

  // for(int i=0; i<a1.size(); i++)
  //   {
  //     cout<<a1[i]<<endl;
  //   }
  return 0;
}
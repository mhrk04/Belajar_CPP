#include <iostream>

using namespace std;

int main(){
  // operasi +,-,*,/,%
  int a = 5;
  int b = 10;
  int hasil;
  // tambah

  hasil=b+a;
  cout<< hasil<<endl;

  // tolak
  hasil = a-b;
  cout<< hasil<<endl;
  // bahagi
  hasil = b/a;
  cout<< hasil<<endl;
  // modulus % hasil baki

  int genap = 20;
  int ganjil = 15;
  hasil = genap%ganjil;
  cout<< hasil<<endl;

  // urutan 
  double urutan = a+ b*a/b;
  cout<<urutan<<endl;
  return 0;
}
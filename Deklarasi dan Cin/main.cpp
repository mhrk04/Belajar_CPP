#include <iostream>
// kalau letak ini x perlu tulis std:: dihadapan cout
using namespace std;

int main(){
  int a;
  a = 10;
  cout<< a<<endl;
// declare b ialah integer 
  int b;
// amik nilai dari user
  cout<<"Sila Masukkan Nilai Intiger : ";
  cin >> b;
// papar nilai yang dimasukkan
  cout << "Nilai yang masukkan tadi ialah : "<<b;
  return 0;
}
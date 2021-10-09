#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
  float a,b,c;
  cout << "Enter the size a,b,c: "<<endl;
  cin>>a>>b>>c;
  if(a<b+c && b<a+c && c<a+b)
  { 
    cout<<"mosalas nist";
  }
  else
    cout<<"mosalas hast";
  return 0;
}

#include <iostream>
using namespace std;
int main()
{
  int i,j,rows;
  rows=6;
  for(i=1; i<=rows; i++){
  for(j=i; j>=1; j--){
  cout<<((char)(j-1+65));
  }
 cout<<"\n";
  }
 return 0;
}
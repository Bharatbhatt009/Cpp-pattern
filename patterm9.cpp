#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value :";
  cin>>n;
  int a=1;
  while (a<=n)
  {
   int b=1;
   int value= a;
   while (b<=a)
   {
    cout<<" "<<value;
    value=value+1;
    b=b+1;
   }
   cout<<endl;
   a=a+1;
   

  }
  
}
  



/*    PATTERN
      1 
      2 3
      3 4 5 
      4 5 6 7
*/
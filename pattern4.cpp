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
    while (b<=n)
    {
        cout<< " "<<n-b+1;
        b=b+1;
    }
    cout<<endl;
    a=a+1;
    
   }
   
}
 /*   PATTERN
        3 2 1
        3 2 1
        3 2 1
 */
#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the value :";
    cin>>n;
    int a=1;
    char ch='A'+a-1;
    while (a<=n)
    {
        int b=1;

        while (b<=a)
        {
            cout<<" "<<ch;
            ch=ch+1;
             b=b+1;
        }
        cout<<endl;
        a=a+1;        
    }
    
 }
 /*     PATTERN
        A
        B C
        D E F 
        G H I J
 */
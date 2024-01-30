#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int a=1;
    char ch='A';
    while (a<=n)
    {
        int b=1;
        while (b<=n)
        {
            cout<<" "<<ch;
            b=b+1;
            ch=ch+1;
        }
        cout<<endl;
        a=a+1;
        
    }
    
    
}
/*  PATTERN
    A B C 
    D E F
    G H I
*/
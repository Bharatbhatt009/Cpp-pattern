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
        char ch= 'A';
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
    A B C       A+j-1 :- can be use as alternative formula
    A B C
*/
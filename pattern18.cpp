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
        char ch='A'+n-a-b+1;
        while (b<=a)
        {
            cout<<" "<<ch;
            b=b+1;
            ch=ch+1;
        }
        cout<<endl;
        a=a+1;
        
    }
    

}
/*      PATTERN
        D
        C D     Alternate formula : n-a
        B C D 
        A B C D
*/
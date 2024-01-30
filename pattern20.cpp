#include<iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter the value :";
        cin>>n;
        int a=1;
        while (a<=n)
        {
                int star=n-a+1;
                while (star)
                {
                        cout<<" *";
                        star=star-1;
                }
                cout<<endl;
                a=a+1;
                
        }
        
}
/*      PATTERN
        * * * *
        * * *
        * *
        *       
*/

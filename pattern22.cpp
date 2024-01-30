#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int a=1;
  while (a<=n)
    {
            int space=a-1;
            while (space)
            {
                cout<<" ";
                space=space-1;
            }
            int b=n-a+1;
            while (b)
            {
                cout<<a<<"";
                b=b-1;
            }
            cout<<endl;
            a=a+1;
            
            
    }
    

}
/*  PATTERN
        1 1 1 1
          2 2 2
            3 3
              4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int a=1;
    while (a<=n)
    {  
      int space=n-a;
      while (space)
      {
        cout<<" ";
        space=space-1;
      }
      
        int b=1;
        while (b<=a)
        {
            cout<<a<<"";
            b=b+1;
        }
        cout<<endl;
        a=a+1;
        
    }
    
}
/*      PATTERN
            1    row=1; space=3;
          2 2    row=2; space=2;
        3 3 3    row=3; space=1;
      4 4 4 4    row=4; space=0;    
*/
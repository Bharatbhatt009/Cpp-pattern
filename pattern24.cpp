#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int a=1;
    while (a<=n)
    {
        int space=a;
        while (space)
        {
            cout<<" ";
            space=space-1;
        }
        
        int b=1;
        int value=4;
        while (b<=a)
        {
            cout<<""<<value;
            b=b+1;
            value=value-1;
        }
        cout<<endl;
        a=a+1;
        
    }
}
    
/*      PATTERN
        1 2 3 4  row=1 , space=0 
          2 3 4  row=2 , space=1
            3 4  row=3 , space=2
              4  row=4 , space=3
 
*/

//2nd WAY TO SOLVE USING FOR LOOP
    // for(int i=0;i<4;i++){
    //     for(int j=i;j>0;j--){
    //         cout<<" ";
    //     }
    //     for(int k=i+1;k<=4;k++){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }
    //3RD WAY TO SOLVE
//     int i=4;
//     while(i>0){
//         for(int k=4-(i-1);k<=4;k++){
//             cout<<k;
//         }
        
//         cout<<endl;
//         i--;
//     }
    
// }
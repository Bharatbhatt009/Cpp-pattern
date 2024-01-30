#include<iostream>
using namespace std;
int main(){
    int abc = 1;
    cout << abc << endl;

    bool d = false;
    cout << d << endl;

    char a ='z';
    cout << a << endl;

    float b = 1.1; 
    cout << b << endl;

    double c = 1.23;
    cout << c << endl;

    /* DATATYPE SIZE*/
    int size = sizeof(abc); 
    cout << "size of abc is :" << size << endl;

    int size1 =sizeof(d); 
    cout << "size of d is :" << size1 << endl;

    int size2 = sizeof(a); 
    cout << "size of a is :" << size2 << endl;

    int size3 = sizeof(b); 
    cout<< "size of b is :" << size3 << endl;

    int size4 = sizeof(c); 
    cout << "size of c is :" << size4 << endl;

    /*TYPECASTING*/
    int a7 = 'a'; 
    cout<< a7 <<endl;

    int a9 = 'z'; 
    cout<< a9 << endl;

    char ch = 107; 
    cout<< ch << endl;

    char ch1= 123456; /* larger value is stored in smaller data type*/
    cout << ch1 << endl;
 
 /*NEGATIVE NUMBER
    -> Positive number has starting bit = 0
    -> Negative number has starting bit = 1*/
    
    unsigned int zxy = 1234;
    cout << zxy << endl;

     int a1 = 2/5;
     cout << a1 << endl;

     cout<< 2.0/5 << endl;

     float a2 = 2.0/5;
     cout<< a2<<endl;

     double a3 = 2.0/5;
     cout<<a3<<endl;
   
    int a12 =20;
    int b12 = 200;
    bool first = (a12==b12);
    cout<< first <<endl;

      bool second = (a12>b12);
    cout<< second <<endl;

      bool third = (a12<b12);
    cout<< third <<endl;

      bool forth = (a12>=b12);
    cout<< forth <<endl;

      bool fifth = (a12<=b12);
    cout<< fifth <<endl;

      bool sixth = (a12!=b12);
    cout<< sixth <<endl;

    /*LOGICAL OPERATOR
    ->&& : Executing multiple conditions together
    ->|| : Few or any single condition should run out of multiple conditions  
    ->!  : Make complement of true and false
    */
   int a4 = 21;
   cout<<!a4<<endl;

}



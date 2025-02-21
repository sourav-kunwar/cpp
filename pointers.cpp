#include<iostream>

using namespace std;

void passvalue(int a){
    a = 10;
}

void passreference(int *a)
{
    *a = 30;
}
void passalias(int &b)
{
    b=50;
}
int main(){
    // int a = 10;
    // // cout<<&a<<endl;

    //  int *ptr = &a;
    // // cout<<ptr<<endl;

    // //pointer to pointer

    // int** parptr = &ptr;
    // cout<<&ptr<<endl;
    // cout<<parptr;

    // //dereferencing

    // cout<<"\nDereferencing pointer:"<<*(&a)<<endl;
    // cout<<"using pointer:"<<*(ptr);
    // cout<<"\nusing parentpointer:"<<**parptr;

    //passby value:

    int a = 10;
    passvalue(a);
    cout<<"pass by value:"<<a<<endl;

    // pass by reference

    passreference(&a);
    cout<<"pass by reference:"<<a<<endl;

    //pass by reference using alias;

    a = 23;
    passalias(a);
    cout<<"pass by reference using alias:"<<a<<endl;

    //array pointer

    int arr[] = {1,2,3,4,5,6};
    //array pointer is constant pointer as its value can't be changed after initialization

    //pointer increment and decrement
    int m =1;
    int* ptr = &m;
    cout<<ptr<<endl;
    *(ptr++);
    cout<<ptr;
    cout<<m;

    return 0;
}
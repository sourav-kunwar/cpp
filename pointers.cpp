#include<iostream>

using namespace std;

int main(){
    int a = 10;
    // cout<<&a<<endl;

     int *ptr = &a;
    // cout<<ptr<<endl;

    //pointer to pointer

    int** parptr = &ptr;
    cout<<&ptr<<endl;
    cout<<parptr;

    //dereferencing

    cout<<"\nDereferencing pointer:"<<*(&a)<<endl;
    cout<<"using pointer:"<<*(ptr);
    cout<<"\nusing parentpointer:"<<**parptr;

    
    return 0;
}
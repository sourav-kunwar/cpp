#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int rem; 
    int pow = 1;
    while(n!=0){
        rem = n%2;
        n=n/2;
        ans+=(rem*pow);
        pow*=10;    
    }
    cout<<ans;
    return 0;
}
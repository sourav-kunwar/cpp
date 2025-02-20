#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    vector<int> arr = {1,2,3};
    vector<int> arr2 = {4,5,6};
    // cout<<vec[0]<<endl;


    // these is how we use the vector with for loop
    for(int i : arr){
        cout<<i<<endl;
    }
    
    //vector functions

    //1.
    //for vector size >>>>> ==== vector_name.size().
    cout<<"vector size:"<<arr.size()<<endl;

    //2.
    //push_back for putting value inside the vector array.
    cout<<"before pushing into vec array size:"<<endl;
    cout<<vec.size();
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    cout<<"after pushing into vec array size:"<<vec.size()<<endl;
    for(int val:vec){
        cout<<"value inside the vector vec:"<<val<<endl;
    }

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;

    // cout<<vec.size();
    // cout<<endl<<vec.capacity()<<endl;

    vec.push_back(28);
    vec.push_back(29);

    cout<<vec.size();
    cout<<endl<<vec.capacity()<<endl;






    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int linear_search(vector<int>& vec,int val)
{
    for(int i = 0;i<vec.size();i++)
    {
        if(vec[i]==val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8,9,10};

    int value;
    cin>>value;

    int res = linear_search(vec,value);
    if(res == -1)
    {
        cout<<"not present";
    }
    else
    {
        cout<<"present";
    }
    return 0;
}
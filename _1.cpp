#include<bits/stdc++.h>
using namespace std;
string reverse_string(string str)
{
    int left = 0;
    int right = str.size()-1;
    while(left < right)
    {
        swap(str[left] , str[right]);
        left++;
        right--;
    }
    return str;
}
int main()
{
    string str;
    cin>>str;
    string output = reverse_string(str);
    for_each(output.begin() , output.end() , [&](char i)
    {
        cout<< i <<" ";
    });
}
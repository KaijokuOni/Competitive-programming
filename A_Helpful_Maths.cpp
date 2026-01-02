#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,newstring;
    int count1=0,count2=0,count3=0;
    cin>>s;
    cin >> s;
    vector<char> nums;
    for(char c: s) if(c != '+') nums.push_back(c);
    sort(nums.begin(), nums.end());

    for(size_t i=0;i<nums.size();i++){
        cout<<nums[i];
        if(i + 1 < nums.size()) cout<<'+';
    }}
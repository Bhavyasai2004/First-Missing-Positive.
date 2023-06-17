#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    vector<int>v;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    int s=v.size();
    for(i=0;i<s;i++)
    {
        if(v[i]!=i+1) return i+1;
    }
    return s+1;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    //n is no of integers
    //d is no of left-rotation
    cin>>n>>d;
    int arrt[n];
     for(int i=0;i<n;i++)
     {cin>>arrt[i];}
     int s=sizeof(arrt)/sizeof(arrt[0]);
     std::vector<int> arr(arrt, arrt + s); //converting array to vector 
     std::rotate(arr.begin(), arr.begin()+d, arr.end());
     for(int i=0;i<arr.size();i++)
    {std::cout<<arr[i]<<" ";}
    return 0;
}

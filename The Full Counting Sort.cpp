#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<vector<string>> vect(n/2);
    string str, tem;
    int k;
    int freq[n] = {0};
    for(int i=0; i<n/2; i++)
    {
        cin>>k>>str;
        tem="-";
        freq[k]++;
        vect[k].push_back(tem);

    }

    for(int i=n/2;i < n;i++)
    {
        cin>>k>>str;
        freq[k]++;
        vect[k].push_back(str);
    }

    for(int i=0; i<n/2; i++)
    {
        int j;
        j=freq[i];

        for(int l=0;l<j;l++)
        {
            cout<<vect[i][l]<<" ";
        }
    }

     return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool findpermutation(string s1,string s2)
{
   string s3 = s1;
   reverse(s1.begin(),s1.end());
   if(s2.find(s1) != string::npos || s2.find(s3) != string::npos)
     return true;
   else
     return false;

}
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<findpermutation(s1,s2);
    return 0;
}
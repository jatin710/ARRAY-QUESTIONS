#include<bits/stdc++.h>
using namespace std;


  void fun( string s)
  {
      map<pair<char,char>,int> dpairs;
       for( int i = 0 ; i <s.size()-1;i++)
       {
           dpairs[make_pair(s[i],s[i+1])]++;
       }
       cout<<"Distinct sub-string with count\n";
       for(auto it=dpairs.begin();it!=dpairs.end();it++)
       {
           cout<<it->first.first<<it->first.second<<" "<<it->second<<" ";
       }
      
  }
int main()
{
    string s;
    cin>>s;
    fun(s);
}

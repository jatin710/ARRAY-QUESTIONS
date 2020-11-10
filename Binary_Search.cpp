#include <iostream>
using namespace std;
  
    int bin_serch( int a[],int l, int r , int key)
    {   
        int m;
          while( r- l > 1)
          {
              m = l +(r-l)/2;
              if( a[m] <= key)
                 l = m;
             else
                r = m;
              
              
          }
          if( a[l] == key)
           return l;
           if( a[r] == key)
        return r;
        else 
          return -1;
    }
int main()
{
    int  i,r, n,key,l=0;
    cin>>n;
    int a[n];
    for( i = 0 ; i < n; i++)
    {
        cin>>a[i];
    }
      cin>>key;
   r =  bin_serch( a ,l, n-1 , key );
      ( r == -1) ? cout<< "element not found" : (cout<<"element found at" << r+1 <<" position");
      
    return 0;
}

//Array -rotation by juggling algorithm
#include <iostream>
#define max 100
using namespace std;
  int gcd(int a,int b)
  {
      if(b ==0)
      return a;
      else
         return gcd(b,a%b);
  }

 void arr_rot(int *a,int n, int d)
 {  
     int g_c_d,i,j,k,temp;
     d = d%n;
     g_c_d=gcd(n,d);
    for( i = 0 ; i<g_c_d;i++)
    {
        temp =  a[i];
        j =i;
        while(1)
        {
            k = j+d;
            if(k >= n)
            k = k- n;
            if( k == i)
              break;
            else
              
              
              a[j] = a[k];
                j = k;
        }
        a[j] = temp;
    }
     
 }
  void print( int *a , int n)
  {
      int i;
      for(i = 0 ; i < n ; i++)
      {
          cout<<a[i]<<" ";
      }
  }
int main() {
     int a[max], d,n,i;
     cin>>n;
     for(i = 0 ; i < n; i++)
     {
         cin>>a[i];
     }
     cin>>d;
     arr_rot(a,n,d);
     print(a,n);
	return 0;
}
//Time Complexcity- O(n)

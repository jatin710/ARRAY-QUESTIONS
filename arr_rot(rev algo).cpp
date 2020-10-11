//Array rotation by reverse algorithm
#include <iostream>
#define max  100
using namespace std;

  void left_rot( int *a,int b,int f)
  { 
      int temp =0;
       while(b < f)
       {
           temp = a[b];
           a[b] = a[f];
           a[f] = temp;
           b++;
           f--;
       }
       
  }
 void arr_rot( int *a , int n , int d)
 {    
     if(d == 0 )
       return;
      d = d%n;
      left_rot(a,0,d-1);
      left_rot(a,d,n-1);
      left_rot(a,0,n-1);
 }
  void print( int *a ,int n)
  {
      int i;
      for( i = 0 ; i < n ; i++)
      {
          cout<<a[i]<<" ";
      }
  }
int main() {
   int n, i, a[max] ,d;
    cin>>n>>d;
    for( i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
      arr_rot(a,n,d);
      print(a,n);
	return 0;
}

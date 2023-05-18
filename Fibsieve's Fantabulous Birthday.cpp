#include <iostream>
#include <math.h>

using namespace std;
int main()
{  long long int n,numberOfCase,j=0;
   cin>>numberOfCase;
   while(numberOfCase--)
   {   cin>>n;
       long long int squareRoot=ceil(sqrt(n));
       long long int valueOfSquareroot=squareRoot*squareRoot-n;
       long long int xDirectionPoint,yDirectionPoint;
       if(valueOfSquareroot<squareRoot)
       {
           yDirectionPoint=valueOfSquareroot+1;
           xDirectionPoint=squareRoot;
       }
       else
       {
           xDirectionPoint=2*squareRoot-valueOfSquareroot-1;
           yDirectionPoint=squareRoot;
       }
       if( squareRoot & 1)
	       swap(xDirectionPoint,yDirectionPoint);
           cout << "Case "<<++j<<":"<<" "<<xDirectionPoint<<" "<<yDirectionPoint<< endl;
   }
   return 0;

}

/**cheak weather anumber is prime or not*/
#include<iostream>
using namespace std;
int main()
{
    int i=2;
    int n;
    cin>>n;
    while (i<n)
    {
       if (n%i==0)
       {
        cout<<"n is not a prime number"<<endl;
       }
       else{
        cout<<"n is a prime number"<<endl;
       }
       i=i+1;
    }
    
 return 0;
}
# include <iostream>
using namespace std;

//parameterized way 
void summation(int i, int sum)
{
    if (i==0)
     cout<<sum<<endl;
    summation(i-1,sum+i);
}


//functional way
int s(int n)
{
    if(n==1)
      return 1;
    else
      return n + s(n-1);
}
int main()
{
    //summation(7,0);
    int ans = s(7);
    cout<<ans<<endl;
    return 0;
}
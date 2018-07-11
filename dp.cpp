#include<iostream>
#include<vector>
using namespace std;
int fibo(int n)
{

    vector<int> f(n,0) ;
    //int f[n];
    if(n<=1)
    {
        return n;
    }
    else{
        f[0]=0;
        f[1]=1;
        cout<<f[1];
        for(int i=2;i<=n;i++)
        {
            f[i]=f[i-2]+f[i-1];
        }
        return f[n];
    }
}
int main()
{
    int n;
    cout<<"Enter the rangehhhh:=";
    cin>>n;
    int result=fibo(n);
    cout<<"\n\tThe fibonacci series upto "<<n<<" ="<<result;
    return 0;
}


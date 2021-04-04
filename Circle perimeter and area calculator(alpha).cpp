#include<iostream>
#include<fstream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    double m[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>m[i];
    }
    for(int i=0;i<n;i++)
    {
        switch(a[i])
        {
            case 'a':cout<<m[i]*2*3.14<<endl; break;
            case 'b':cout<<m[i]*3.14<<endl; break;
            case 'c':cout<<m[i]*m[i]*3.14<<endl; break;
            case 'd':cout<<(m[i]/2)*(m[i]/2)*3.14<<endl; break;
        }
    }
    return 0;
	 
}

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a and b: ";
    int a,b;
    cin>>a>>b;
    cout << "a+b="<<a+b<<'\n'
         <<"a-b="<<a-b<<'\n'
         <<"a*b="<<a*b<<'\n'
         <<"a/b="<<a/b<<'\n';
         if (a>b) cout<<a;
         if (a<b) cout<<b;

    return 0;
}

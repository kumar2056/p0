#include <iostream>

using namespace std;

int main()
{
    int d,e,i;
    cin>>d;
    cin>>e;
    for(i=d+1;i<e;i++)
    {
    if(i%2==0)
    {
        cout<<i<<" ";
    }
    }

    return 0;
}

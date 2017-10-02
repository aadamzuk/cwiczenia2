#include <iostream>

using namespace std;

int main()
{
    int n,a=40,b=1;
    cout<<"Podaj liczbe wierszy"<<endl;
    cin>>n;
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<80;i=i+2)
    {
        if(i>=40-b*2)
        {
        if(i==a)
        {
            for(int k=0;k<b;k++)
            {
                cout<<"x ";
            }
            b++;
            a=a-2;
        }
        }
        else cout<<" ";

    }
    cout<<endl;
    }


    return 0;
}

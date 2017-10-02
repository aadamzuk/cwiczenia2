#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Podaj liczbe wierszy"<<endl;
    cin>>n;
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<81;i++)
    {
        if(i>=40-j&&i<=40+j)
            cout<<"x";
            else cout<<" ";

    }
    cout<<endl;
    }
    return 0;
}

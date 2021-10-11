#include<iostream>//header
using namespace std;//standard

int main()//execution begins from here
{
    int raw;//dclaring a variable name raw
    cout<<"enter the number of raws"<<endl;//printing a line
    cin>>raw;//taking input from user
    for(int i=1;i<=raw;i++)//outer loop to print the raws
    {
        for(int j=1;j<=raw-i;j++)//inner 1st loop to print the space before printing the numbers
        {
            cout<<" ";//printing spaces
        }
        for(int j=1;j<=i;j++)//2nd inner loop to print the all numbers
        {
            cout<<j<<" ";//print number with spaces
        }
        cout<<endl;//changing the line
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if((i+j)%2!=0)
            {
               cout<<"0";
            }
            else
            {
                cout<<"1";
            }
        }
        cout<<endl;
    }
    return 0;
}
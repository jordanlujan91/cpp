#include <iostream>

using namespace std;

int main()

{
    int n;
    cin>>n;

    int x;

    for(x=n/2;x<n;x++){
        if (x>=n/2.0 and x<n){
            cout<<x;
            if(x!=n-1){
                cout<<',';
            }
        }
    }

    return 0;
}//
// Created by Jordan Lujan on 2/8/18.
//


//
// Created by Jordan Lujan on 2/8/18.
//

#include <iostream>

int main()
{
    int p=1;
    int x=1;
    while(x<10){
        p*=x;
        x+=1;
    }

    x=10;

    for(int x=1;x<10;x+=1){
        p*=x;
    }

    return 0;
}

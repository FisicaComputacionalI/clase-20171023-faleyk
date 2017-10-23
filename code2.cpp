//
//  main.cpp
// code 2
//  Created by faleyk on 10/23/17.
//  Copyright © 2017 faleyk. All rights reserved.
//
#include<iostream>
using namespace std;

int main()
{
    int n,i, primo=0;
    cout<<"Dame un número:"<<endl;
    cin>>n;
    if(n==0)
        cout<<"Tu número no es primo"<<endl;
    else for (i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {primo=1;
            break;
        }
    }
    if (primo==0)
        cout<<"Tu número es primo."<<endl;
    else
        cout<<"Tu número no es primo"<<endl;
    
    return 0;
}



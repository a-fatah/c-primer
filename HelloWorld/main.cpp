//
//  main.cpp
//  HelloWorld
//
//  Created by Abdul Fatah on 19/06/2019.
//  Copyright © 2019 Abdul Fatah. All rights reserved.
//

#include <iostream>
#include <climits>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    int n_int = INT_MAX; // initialize n_int to max int value
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    
    // sizeof operator yields size of type or of variable
    cout<<"int is "<<sizeof(int)<<" bytes"<<endl;
    cout<<"short is "<<sizeof n_short<<" bytes"<<endl;
    cout<<"long is "<<sizeof n_long<<" bytes"<<endl;
    cout<<"long long is "<<sizeof n_llong<<" bytes"<<endl;
    // insert code here...
    cout << "Hello, World!\n";
    return 0;
}

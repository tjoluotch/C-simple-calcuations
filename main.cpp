//
//  main.cpp
//  median-average
//
//  Created by TJ Oluotch on 20/10/2017.
//  Copyright © 2017 TJ Oluotch. All rights reserved.
//

#include "stats.h"
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void read_vector(istream &in, vector<double> &v) {
    double x;
    while (in >> x) {
        v.push_back(x);
    }
}

int main() {
    cout << "Please enter a series of numbers\n";
    
    // read numbers from the standard input
    // and store them in a vector
    vector<double> values;
    read_vector(cin, values);
    
    // compute and output results
    unsigned n = values.size();
    cout << n << " numbers\n";
    if (n > 0) {
        //cout << "average = " << average(values) << '\n';
        //cout << "median = " << median(values) << '\n';
        cout << "scores excluding highest and lowest = " << score(values) << '\n';
    }
    return 0;
}

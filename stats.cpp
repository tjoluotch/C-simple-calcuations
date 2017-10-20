//
//  stats.cpp
//  median-average
//
//  Created by TJ Oluotch on 20/10/2017.
//  Copyright © 2017 TJ Oluotch. All rights reserved.
//

#include "stats.h"
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

// the median of the values in a vector
// requires: values.size() > 0
double median(vector<double> v){
    const unsigned n = v.size();
    if (n == 0) {
        throw domain_error("median of an empty vector");
    }
    // sort the whole vector
    sort(v.begin(), v.end());
    const unsigned middle = n/2;
    if (n%2 == 1) {
        return v[middle];
    } else
        return (v[middle-1] + v[middle])/2;
}

// the average of the values in a vector
// requires: v.size() > 0
double average(const vector<double> &v){
    const unsigned n = v.size();
    if (n == 0) {
        throw domain_error("average of an empty vector");
    }
    double sum = 0;
    for (unsigned i = 0; i < n; ++i) {
        sum += v[i];
    }
    return sum / n;
}

//scoring method takes a series of scores
// discards the highest and lowest and then averages the rest
// creating a new vector which is a copy of the main as will be sortinh iy
double score(vector<double> v){
    // sort the whole vector
    sort(v.begin(), v.end());
    unsigned num = v.size();
     double total = 0;
    for (unsigned m = 1; m < (num -1); ++m) {
        total += v[m];
    }
    unsigned excl = num - 2;
    double avg = total / excl;
    return avg;
}



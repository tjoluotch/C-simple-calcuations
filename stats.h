//
//  stats.h
//  median-average
//
//  Created by TJ Oluotch on 20/10/2017.
//  Copyright © 2017 TJ Oluotch. All rights reserved.
//

#ifndef GUARD_stats_h
#define GUARD_stats_h

#include <vector>
// the median of the values in a vector
// requires: v.size() > 0
double median(std::vector<double> v);

// the average of the values in a vector
// requires: v.size() > 0
double average(const std::vector<double> &v);

//the average of the values excluding the highest and lowest values
double score(std::vector<double> v);

#endif

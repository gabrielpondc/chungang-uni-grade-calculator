//
// Created by Gabriel on 2020/9/22.
//
#include <iostream>

#include <math.h>

using namespace std;

// Function for calculation

void cal_y=cos(float n)

{

float accuracy = 0.0001, x1, denominator, cosx, cosval;



// Converting degrees to radian

n = n * (3.142 / 180.0);



x1 = 1;



// maps the sum along the series

cosx = x1;



// holds the actual value of sin(n)

cosval = cos(n);

int i = 1;

do

{

denominator = 2 * i * (2 * i - 1);

x1 = -x1 * n * n / denominator;

cosx = cosx + x1;

i = i + 1;

} while (accuracy <= fabs(cosval - cosx));

cout << cosx;

}

// Main function

int main()

{

    float n = 30;

    cal_cos(n);

}

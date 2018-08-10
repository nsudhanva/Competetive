#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealCost, totalCost, tip, tax;
    int tipPercent;
    int taxPercent;

    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    tip = mealCost * tipPercent / 100;
    tax = mealCost * taxPercent / 100;

    totalCost = mealCost + tip + tax;

    cout << "The total meal cost is " << round(totalCost) << " dollars.";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}


#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int x;
    double y;
    string z;

    // Read and save an integer, double, and String to your variables.
    cin >> x;
    cin >> y;
    cin.ignore();
    getline(cin, z);

    // Print the sum of both integer variables on a new line.

    cout << i + x << endl;

    // Print the sum of the double variables on a new line.

    cout << fixed << setprecision(1) << y + d << endl;
    // Concatenate and print the String variables on a new line

    cout << s + z << endl;
    // The 's' variable above should be printed first.
    return 0;
}

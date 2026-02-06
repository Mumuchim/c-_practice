#include <iostream>
using namespace std;

double toSeconds(double x);
int toSeconds(int x);

int main() {
    double days;
    cin >> days;

    double seconds = toSeconds(days);
    cout << seconds;

    cout << endl;

    int days2;
    cin >> days2;

    int seconds2 = toSeconds(days2);
    cout << seconds2;
}

int toSeconds(int x) {
    return x*24*60*60;
}
double toSeconds(double x) {
    return x*24*60*60;
}
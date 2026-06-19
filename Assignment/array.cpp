#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "How many numbers? ";
    cin  >> n;

    int arr[100];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    cout << "Sum     = " << sum          << endl;
    cout << "Average = " << (double)sum / n << endl;

    return 0;
}

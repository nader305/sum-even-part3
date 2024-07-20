#include<iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter the start:\n";
    cin >> start;
    cout << "Enter the end:\n";
    cin >> end;
    if (start < end) {
        int sum = 0;
        for (int i = start; i <= end; i++) {
            if (i % 2 == 0)
                sum += i;
        }
        cout << "Sum of even number between " << start << " and " << end << " is " << sum << endl;
    }
    else {
        cout << "The beginning should be lower than the end\a\n";
    }
    return 0;
}
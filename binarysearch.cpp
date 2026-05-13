#include <iostream>
using namespace std;
int main() {
    int phoneNumber[5] = {10, 20, 30, 40, 50};
    int keyNumber = 30;
    int left = 0;
    int right = 4;
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (phoneNumber[mid] == keyNumber) {
            cout << "Number found";
            break;
        }
        else if (keyNumber > phoneNumber[mid]) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }
    return 0;
}



















#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n, count = 1;

    while (true) {
        int min_val = numeric_limits<int>::max();
        int max_val = numeric_limits<int>::min();

        cin >> n;

        if (cin.eof()) {
            break;
        }

        vector<int> numbers;

        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            numbers.push_back(num);

            min_val = min(num, min_val);
            max_val = max(num, max_val);
        }

        int range_val = max_val - min_val;

        cout << "Case " << count << ": " << min_val << " " << max_val << " " << range_val << endl;

        count++;
    }

    return 0;
}

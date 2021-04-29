#include <iostream>
using namespace std;
int main() {
    int n, h[100], t, count = 0, s = 1;
    while (true) {
        cin >> n;
        if (n == 0)break;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> h[i];
            sum = sum + h[i];

        }
        t = sum / n;
        for (int i = 0; i < n; i++) {
            while (h[i] > t) {

                h[i]--;
                count++;
                if (h[i] == t) break;
            }

        }
        cout << "Set #" << s++ << endl;
        cout << "The minimum number of moves is " << count << "." << endl;
        cout<<endl;
        count=0;
    }
}
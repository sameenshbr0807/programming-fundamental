#include <iostream>
using namespace std;

// Function to calculate pool state
void calculatePoolState(int V, int P1, int P2, float H) {

    float totalWater = (P1 + P2) * H;

    if (totalWater <= V) {

        int poolPercent = (totalWater * 100) / V;
        int p1Percent = (P1 * H * 100) / totalWater;
        int p2Percent = (P2 * H * 100) / totalWater;

        cout << "The pool is " << poolPercent << "% full. ";
        cout << "Pipe 1: " << p1Percent << "%. ";
        cout << "Pipe 2: " << p2Percent << "%.";
    }
    else {

        float overflow = totalWater - V;

        cout << "For " << H << " hours the pool overflows by ";
        cout << overflow << " liters.";
    }
}

int main() {
    int V, P1, P2;
    float H;

    cin >> V >> P1 >> P2 >> H;

    calculatePoolState(V, P1, P2, H);

    return 0;
}
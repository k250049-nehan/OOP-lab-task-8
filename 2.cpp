#include <iostream>
using namespace std;

class BallsFaced;

class Runs {
private:
    int runs;
public:
    Runs(int r) {
        runs = r;
    }
    friend float calculateStrikeRate(Runs, BallsFaced);
};

class BallsFaced {
private:
    int balls;
public:
    BallsFaced(int b) {
        balls = b;
    }
    friend float calculateStrikeRate(Runs, BallsFaced);
};

float calculateStrikeRate(Runs r, BallsFaced b) {
    return (float(r.runs) / b.balls) * 100;
}

int main() {
    Runs r(85);
    BallsFaced b(60);
    float strikeRate = calculateStrikeRate(r, b);
    cout << "Strike Rate: " << strikeRate;
    return 0;
}

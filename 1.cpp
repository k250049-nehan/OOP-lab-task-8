#include <iostream>
using namespace std;

class Time;

class Speed {
private:
    float speed;
public:
    Speed(float s) {
        speed = s;
    }
    friend float calculateDistance(Speed, Time);
};

class Time {
private:
    float time;
public:
    Time(float t) {
        time = t;
    }
    friend float calculateDistance(Speed, Time);
};

float calculateDistance(Speed s, Time t) {
    return s.speed * t.time;
}

int main() {
    Speed s(60);
    Time t(2);
    float distance = calculateDistance(s, t);
    cout << "Distance traveled: " << distance << " km";
    return 0;
}

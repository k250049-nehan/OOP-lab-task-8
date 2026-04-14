#include <iostream>
using namespace std;

class TrafficSystem {
private:
    int value;
public:
    TrafficSystem(int v = 0) {
        value = v;
    }

    TrafficSystem operator+(TrafficSystem t) {
        return TrafficSystem(value + t.value);
    }

    TrafficSystem operator-(TrafficSystem t) {
        return TrafficSystem(value - t.value);
    }

    TrafficSystem operator*(TrafficSystem t) {
        return TrafficSystem(value * t.value);
    }

    bool operator==(TrafficSystem t) {
        return value == t.value;
    }

    void display() {
        cout << value;
    }
};

int main() {
    TrafficSystem roadA(50), incoming(20);
    TrafficSystem total = roadA + incoming;
    cout << "Total Cars: ";
    total.display();
    cout << endl;

    TrafficSystem leaving(15);
    TrafficSystem remaining = total - leaving;
    cout << "Remaining Cars: ";
    remaining.display();
    cout << endl;

    TrafficSystem delay(5), factor(2);
    TrafficSystem newDelay = delay * factor;
    cout << "New Delay (minutes): ";
    newDelay.display();
    cout << endl;

    TrafficSystem roadB(100), roadC(100);
    if(roadB == roadC)
        cout << "Traffic Gridlock Detected";
    else
        cout << "Traffic Flow Normal";

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    double Time_1, Speed, Distance, Minute, Seconds, Time_2;
    cout << "Enter distance (meters): " << endl;
    cin >> Distance;
    cout << "Enter time (minute and seconds): " << endl;
    cin >> Time_1;
    Seconds = (Time_1 - int(Time_1)) * 100;
    Minute = int(Time_1) * 60;
    Time_2 = Minute + Seconds;
    Speed = (Distance / Time_2) * 3.6;
    cout << "Speed : " << Speed << " km/h" << endl;

    system("pause");
    return 0;
}
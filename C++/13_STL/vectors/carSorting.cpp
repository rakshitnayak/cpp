//there are number of cars parked at some distance ,sort the cars according to distance from the orign you.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

class Car
{
public:
    string car_name;
    int x, y;

    Car(string n, int x, int y)
    {
        car_name = n;
        this->x = x;
        this->y = y;
    }

    int dist()
    {
        return x * x + y * y; //we know distance can be calculated from origin by this formula
    }
};

bool compare(Car A, Car B)
{
    int da = A.dist();
    int db = B.dist();

    if (da == db)
    {
        return A.car_name.length() < B.car_name.length();
    }
    else
    {
        return da < db;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<Car> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        string name;
        cin >> name >> x >> y;
        Car temp(name, x, y);
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), compare);

    for (auto c : v)
    {
        cout << "Car: " << c.car_name << " , Dist: " << c.dist() << " ,Location: " << c.x << " , " << c.y << endl;
    }
}

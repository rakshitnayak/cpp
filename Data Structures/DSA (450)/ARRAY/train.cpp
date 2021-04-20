//tcs nqt problem :https://www.geeksforgeeks.org/tcs-nqt-2020-trains/

#include <iostream>
#include <iomanip>
using namespace std;

//online logic

// void settime(float arr[], int n, float time)
// {
//     float x;

//     float arr2[n];
//     arr2[0] = 0.0;

//     for (int i = 1; i < n; i++)
//     {
//         arr2[i] = arr[i] - arr[i - 1];
//     }

//     int itime, ix;
//     itime = (int)time;

//     if (time >= 0.0 && time < 24.0 && (time - itime) <= 60.00)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             x = time + arr2[i];
//             ix = (int)x;

//             if (x - ix >= 0.60)
//                 x = x + 0.40;
//             if (x > 24.00)
//                 x = x - 24.0;
//             cout << x << ' ';
//             time = x;
//         }
//     }
//     else
//     {
//         printf("Invalid Input");
//     }
// }

//my logic
void settime(float arr[], int n, float time)
{

    float x;

    int itime, idecimal;
    itime = (int)time;

    if (time >= 0.0 && time <= 24.0 && (time - itime) <= 0.60)
    {

        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] + time;
            float x = arr[i];
            idecimal = (int)x;
            if ((x - idecimal) > 0.60)
            {
                x = x + 0.40;
            }
            else if (x > 24.0)
            {
                x = x - 24.0;
            }

            cout << setprecision(3) << x << " ";
        }
    }
    else
    {
        cout << "Invalid input";
    }
}

int main()
{

    float arr[] = {0.00, 0.04, 0.09, 0.15, 0.19, 0.22};
    int n = sizeof(arr) / sizeof(arr[0]);

    float time;
    cin >> time;

    settime(arr, n, time);
    return 0;
}
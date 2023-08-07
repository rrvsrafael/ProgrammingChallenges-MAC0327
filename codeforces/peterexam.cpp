#include <iostream>
using namespace std;
const int MAXD = 35;

int d, sum, minhours[MAXD], maxhours[MAXD], minsum, hoursaday[MAXD], maxsum;

int main()
{
    cin >> d >> sum;
    for (int i = 1; i <= d; i++)
    {
        cin >> minhours[i] >> maxhours[i];
        minsum += minhours[i];
        maxsum += maxhours[i];
        hoursaday[i] = minhours[i];
    }

    if (minsum > sum || maxsum < sum)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 1; i <= d; i++)
    {
        if (sum - minsum <= maxhours[i] - minhours[i])
        {
            hoursaday[i] += sum - minsum;
            break;
        }
        else
        {
            minsum += maxhours[i] - minhours[i];
            hoursaday[i] = maxhours[i];
        }
    }

    cout << "YES" << endl;
    for (int i = 1; i <= d; i++)
    {
        cout << hoursaday[i] << " ";
    }

    return 0;
}
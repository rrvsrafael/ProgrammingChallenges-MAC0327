#include <bits/stdc++.h>
using namespace std;

void dp(int jobs, int maxdeadline, int deadlines[], int profits[])
{
    int maxprofit[maxdeadline + 1][jobs + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            maxprofit[i][j] = 0;
        }
    }

    for (int time = 0; time <= maxdeadline; time++)
    {
        for (int job_option = 0; job_option <= jobs; job_option++)
        {
            if (time == 0 || job_option == 0)
            {
                maxprofit[time][job_option] = 0;
            }
            else if (deadlines[job_option] <= time)
            {
                maxprofit[time][job_option] = max(maxprofit[time - 1][])
            }
        }
    }

    for (int time = 1; time <= n && chosen_job[time] != -1; time++)
    {
        cout << chosen_job[time] + 1 << " ";
    }
    cout << endl;
}

int N, deadlines[1000], profits[1000];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> deadlines[i] >> profits[i];
    }
    dp(N, deadlines, profits);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

double get_sys_load(void)
{
    double avg[3];

    if (getloadavg(avg, 3) < 0)
        return -1.0;
    return avg[0];
}

int main(void)
{
    double avg[3];

    printf("get_sys_load() = %.2f\n", get_sys_load());

    if (getloadavg(avg, 3) == 3)
        printf("load average: 1min=%.2f 5min=%.2f 15min=%.2f\n",
               avg[0], avg[1], avg[2]);
    return 0;
}
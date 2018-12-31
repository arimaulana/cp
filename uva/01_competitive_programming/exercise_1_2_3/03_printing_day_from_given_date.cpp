#include <stdio.h>
#include <iostream>

using namespace std;

int dayOfTheWeek(int year, int month, int day) {
    // array with leading number of days values
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    // if month is less than 3 reduce year by 1
    if (month < 3) {
        year -= 1;
    }

    return ((year + year / 4 - 4 / 100 + year / 400 + t[month - 1] + day) % 7);
}

int main() {
    int day = 28;
    int month = 12;
    int year = 2018;

    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("%s\n", days[dayOfTheWeek(year, month, day)].c_str());
    return 0;
}
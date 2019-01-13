#include <cstdio>
#include <map>

using namespace std;

double depre(double value, double depre_val) {
    return value * (1 - depre_val);
}

int solution(int month, double pay, double owe, int n) {
    double car_value = pay + owe;
    map <int, double> m;

    while (n--) {
        int depre_month;
        double depre_val;
        if (scanf("%d %lf", &depre_month, &depre_val) != 2) return 1;
        m.insert(pair<int, double>(depre_month, depre_val));
    }

    int curr_month = 0;
    double depre_val;
    while (curr_month <= month) {
        
        depre_val = m[curr_month] ? m[curr_month] : depre_val;

        car_value = depre(car_value, depre_val);
        owe = curr_month > 0 ? owe - pay : owe;
        printf("Month: %d\tDepre Value: %lf\tOwe: %lf, \tCar Value: %lf\tIs Owe Less: %s\n", curr_month, depre_val, owe, car_value, owe < car_value ?
        "true" : "false");
        
        curr_month++;
    }

    return 0;
}

int main() {
    int month, n;
    double pay, money;

    while (scanf("%d", &month) == 1, month > 0) {
        if (scanf("%lf %lf %d", &pay, &money, &n) != 3) return 1;

        if (solution(month, pay, money, n) != 0) return 1;
    }

    return 0;
}


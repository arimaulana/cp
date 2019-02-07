#include <cstdio>
#include <string>
#include <map>

using namespace std;

typedef pair<string, int> psi;
typedef map<string, int> msi;

int main() {
    int n, p;
    int LEN = 82;

    int t = 1;
    while (scanf("%d %d\n", &n, &p) == 2 && (n || p)) {
        if (t > 1) puts("");

        // debug if p <= 0
        if (p <= 0) return 1;
    
        string vendor;
        float comp = 0;
        float price = 0;
        
        msi m;
        char s[LEN];
        for (int i = 0; i < n; i++) {
            if (fgets(s, LEN, stdin) == NULL) {printf("error getting requirements"); return 1;}

            m.insert(psi(s, 1));
        }

        for (int i = 0; i < p; i++) {
            string tmp_vendor;
            if (fgets(s, LEN, stdin) == NULL) {printf("error getting vendor of proposal"); return 1;}
            tmp_vendor = s;

            float d = 0;
            int r = 0;
            float met = 0;
            float tmp_comp = 0;

            if (scanf("%f %d\n", &d, &r) != 2) {printf("error getting each vendor price and requirement"); return 1;}

            for (int j = 0; j < r; j++) {
                char tmp_s[LEN];

                if (fgets(tmp_s, LEN, stdin) == NULL) {printf("error getting requirement list"); return 1;}

                met = m[tmp_s] == 1 ? met + 1 : met;
            }

            // Solution Part
            //tmp_comp = met / n;
            tmp_comp = (float)r / n;

            // Debugging
            //printf("State\tvendor = %s\tcomp = %f\tprice = %f\n", vendor.c_str(), comp, price);
            //printf("Temp\tvendor = %s\tcomp = %f\tprice = %f\n", tmp_vendor.c_str(), tmp_comp, d);

            if (vendor == "" && tmp_comp == 0) {
                vendor = tmp_vendor;
                comp = tmp_comp;
                price = d;
            } else if (tmp_comp > comp) {
                vendor = tmp_vendor;
                comp = tmp_comp;
                price = d;
            } else if (tmp_comp == comp && d < price) {
                vendor = tmp_vendor;
                comp = tmp_comp;
                price = d;
            } else if (tmp_comp == comp && d == price) {
                // do nothing
                //puts("all same");
            } else if (tmp_comp < comp) {
                // do nothing
                //puts("temp comp less than comp");
            } else if (tmp_comp == comp && d > price) {
                // do nothing
                //puts("d > price and temp comp same");
            } else {
                puts("some condition have not handled yet.");
                return 1;
            }

        }

        printf("RFP #%d\n%s", t, vendor.c_str());
        t++;
    }

    return 0;
}


#include <cstdio>
#include <cstring>
#include <string>
#include <map>

using namespace std;
typedef pair<string, int> psi;
typedef map<string, int> msi;

int main() {
    int n, p, r;
    int LEN = 82;
    float d;

    int i = 1;
    while (scanf("%d %d\n", &n, &p) == 2, (n || p)) {
        float compliance = 0;
        float low_price = 0;
        string vendor;

        if (i > 1) puts("");
        //printf("case = %d\tn = %d\tp = %d\n", i, n, p);

        msi m;
        char v[LEN];
        string tmp_vendor;

        int N = n;
        while (N--) {
            if (fgets(v, LEN, stdin) == NULL) {puts("error N"); return 1;}
            v[strcspn(v, "\n")] = 0;

            //if (scanf("%[^\n]\n", v) != 1) {puts("error reading each requirement N"); return 1;}

            m.insert(psi(v, 1));
        }

        while (p--) {
            r = 0;
            float tmp_comp = 0;
            int total_met = 0;
            if (fgets(v, LEN, stdin) == NULL) {puts("error reading vendor"); return 1;}
            v[strcspn(v, "\n")] = 0;
            
            //if (scanf("%[^\n]\n", v) != 1) {puts("error reading vendor"); return 1;}
            tmp_vendor = v;

            //printf("n = %d\tp = %d\tvendor = %sBefore d = %f\tr = %d\n", n, p, tmp_vendor.c_str(), d, r);
            if (scanf("%f %d\n", &d, &r) != 2) {printf("error scanf, d = %f\t, r = %d\n", d, r); return 1;}
            //printf("After, d = %f\tr = %d\n", d, r);
            while (r--) {
                if (fgets(v, LEN, stdin) == NULL) {puts("error r"); return 1;}
                v[strcspn(v, "\n")] = 0;

                //if (scanf("%[^\n]\n", v) != 1) {puts("error r"); return 1;}

                total_met = m[v] ? total_met + 1 : total_met;
            }
            
            tmp_comp = total_met / (float)n;
            if (tmp_comp > compliance) {
                compliance = tmp_comp;
                vendor = tmp_vendor;
                low_price = d;
            } else if (tmp_comp == compliance) {
                if (d < low_price) {
                    vendor = tmp_vendor;
                    low_price = d;
                }
            }
        }

        printf("RFP #%d\n%s\n", i, vendor.c_str());
        i++;
    }

    return 0;
}


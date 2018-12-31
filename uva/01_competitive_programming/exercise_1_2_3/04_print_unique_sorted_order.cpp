#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;

void sortDistinctArray(vi &num) {

    // https://stackoverflow.com/questions/1041620/whats-the-most-efficient-way-to-erase-duplicates-and-sort-a-vector
    sort(num.begin(), num.end());

    num.erase(unique(num.begin(), num.end()), num.end());
}

int main() {
    vi num {1, 2, 2, 3, 5, 1, 2, 5, 8, 10, 3, 6};

    sortDistinctArray(num);

    for (int el : num) {
        printf("%d ", el);
    }
    printf("\n");

    return 0;
}
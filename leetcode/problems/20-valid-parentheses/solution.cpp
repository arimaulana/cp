#include <bits/stdc++.h>
using namespace std;

bool solve(string s) {
    stack<char> st;

    for (auto &c : s) {
        // determine is it open or closing bracket
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
            continue;
        }

        if (st.empty()) return false;

        // check is close bracket has a
        // corresponding open bracket in
        // the top of the stack
        char type = c == ')' ? '(' : c == '}' ? '{' : '[';

        if (st.top() != type) return false;

        st.pop();
    }

    return st.empty();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << solve(s) << '\n';

    return 0;
}


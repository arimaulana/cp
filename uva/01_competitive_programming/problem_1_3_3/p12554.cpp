#include <cstdio>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> song {
    "Happy",
    "birthday",
    "to",
    "you",
    "Happy",
    "birthday",
    "to",
    "you",
    "Happy",
    "birthday",
    "to",
    "Rujia",
    "Happy",
    "birthday",
    "to",
    "you"
};

int main() {
    int n;
    vector<string> singer;

    if (scanf("%d", &n) != 1) return 1;

    while (n--) {
        char name[101];
        if (scanf("%s", name) != 1) return 1;
        
        string s_name(name);

        singer.push_back(s_name);
    }

    bool all_sing = false;
    bool complete_song = false;

    int len_name = singer.size();
    int idx_name = 0;
    while (!all_sing || !complete_song) {
        all_sing = len_name == idx_name + 1 ? true : false;

        for (auto el : song) {
            all_sing = all_sing ? true : len_name == idx_name + 1 ? true : false;
            printf("%s: %s\n", singer[idx_name].c_str(), el.c_str());

            idx_name = (idx_name + 1) % len_name;
        }

        complete_song = true;
    }


    return 0;
}


#include <cstdio>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_WORD 51

// #define DEBUG
#ifdef DEBUG
#define PRINTF printf
#else
#define PRINTF
#endif


class TrieTreeNode {
    public:
        TrieTreeNode* parent;
        unordered_map<char, TrieTreeNode*> children;
        bool isLeaf = false;
};

class TrieTree {
    public:
        TrieTreeNode* root;

        TrieTree() {
            root = new TrieTreeNode;
        }

        // Insert method
        void insert(const char* str) {

            // start from root node
            TrieTreeNode* curr_node = root;

            while (*str) {

                // create a new node if path doesn't exist
                if (curr_node->children.find(*str) == curr_node->children.end()) {
                    // create node
                    curr_node->children[*str] = new TrieTreeNode;

                    // set parent
                    curr_node->children[*str]->parent = curr_node;
                }

                // go to next node
                curr_node = curr_node->children[*str];

                // move to next character
                str++;
            }

            // mark current node as leaf
            curr_node->isLeaf = true;
        }

        // This two function is for codejam alien rhyme
        int solution() {

            // start from root node
            TrieTreeNode* curr_node = root;

            int sum_word = 0;
            int sum_unpaired = countSolution(curr_node, sum_word);

            PRINTF("sumWord: %d\tsumUnpaired: %d\n", sum_word, sum_unpaired);
            return sum_word - sum_unpaired;
        }

        int countSolution(TrieTreeNode* curr_node, int& sum_word) {

            int result = 0;
            int f_node = 0;

            for (auto it : curr_node->children) {
                if (it.second != nullptr) {
                    result += countSolution(it.second, sum_word);
                    PRINTF("Calculate Node %c\n", it.first);
                }
            }

            // if leaf
            if (curr_node->isLeaf) {
                result++;
                sum_word++;
            }

            // if not root and result >= 2
            if (curr_node->parent != nullptr && result >= 2) {
                result -= 2;
            }
            f_node = result;

            PRINTF("f_node: %d\tresult: %d\n", f_node, result);
            return f_node;
        }
};

int main() {

    int T, N, tc = 1;

    scanf("%d", &T);
    while (T--) {

        TrieTree trie;

        scanf("%d", &N);
        while (N--) {

            char s[MAX_WORD];
            scanf("%s", s);
            string str = s;

            PRINTF("%s\n", str.c_str());
            reverse(str.begin(), str.end());
            trie.insert(str.c_str());
        }

        printf("Case #%d: %d\n", tc, trie.solution());
        tc++;
    }

    return 0;
}
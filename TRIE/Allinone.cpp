#include <iostream>
#include <string>
using namespace std;

class Trie {
  public:
    class Node {
      public:
        Node* Link[26];
        bool isEnd = false;
        Node() {
            for (int i = 0; i < 26; i++) {
                Link[i] = NULL;
            }
        }
    };

    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(string &s) {
        Node* node = root;
        for (auto it : s) {
            if (!node->Link[it - 'a']) {
                node->Link[it - 'a'] = new Node();
            }
            node = node->Link[it - 'a'];
        }
        node->isEnd = true;
    }

    bool search(string &s) {
        Node* node = root;
        for (auto it : s) {
            if (node->Link[it - 'a']) {
                node = node->Link[it - 'a'];
            } else return false;
        }
        return node->isEnd;
    }

    bool isPrefix(string &s) {
        Node* node = root;
        for (auto it : s) {
            if (node->Link[it - 'a']) {
                node = node->Link[it - 'a'];
            } else return false;
        }
        return true;
    }
};

int main() {
    Trie trie;
    string word1 = "hello";
    string word2 = "hell";
    string word3 = "help";
    string pr="he";
    trie.insert(word1);
    trie.insert(word2);

    cout << "Search 'hello': " << trie.search(word1) << endl;  // 1
    cout << "Search 'hell': " << trie.search(word2) << endl;   // 1
    cout << "Search 'help': " << trie.search(word3) << endl;   // 0
    cout << "Is Prefix 'hel': " << trie.isPrefix(pr) << endl; // 1

    return 0;
}

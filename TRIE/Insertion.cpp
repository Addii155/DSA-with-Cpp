#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *Link[26];
    bool flag = false;
    bool containKey(char ch)
    {
        return Link[ch - 'a'] != NULL;
    }
    void put(char ch, Node *node)
    {
        Link[ch - 'a'] = node;
    }
    Node* get(char ch)
    {
        return Link[ch-'a'];
    }
    void setEnd()
    {
        flag=true;
    }
    bool isEnd()
    {
        return flag;
    }
};

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

    void Insert(string s)
    {
        Node *node = root;
        for (int i = 0; i < s.size(); i++)
        {
            if (!node->containKey(s[i]))
            {
                node->put(s[i], new Node());
            }
            node = node->get(s[i]);
        }
        node->setEnd();
    }
    bool search(string s) // O(len)
    { 
        Node* node=root;
        for(int i=0;i<s.size();i++)
        {
            if(!node->containKey(s[i]))
            {
                return false;
            }
            node=node->get(s[i]);
        }
       return node->isEnd();
    }
    bool startWith(string s) // O(len)
    {
        Node* node = root;
        for(int i=0;i<s.size();i++)
        {
            if(!node->containKey(s[i]))
            {
                return false;
            }
            node=node->get(s[i]);
        }
        return true;
    }
};

int main()
{
    string s = "apple";
    Trie* myTrie = new Trie();
    myTrie->Insert(s);
    cout<<myTrie->search("appx");

}
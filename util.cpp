#include <string>
#include "node.h"
#include "util.h"
using namespace std;

string Util::to_string(Node *head)
{
    if (head == nullptr)
        return "[]";
    auto result = string("[");
    auto t = head;
    while (t != nullptr)
    {
        result = result + std::to_string(t->val) + ",";
        t = t->next;
    }

    if (result.back() == ',')
        result.pop_back();

    result.push_back(']');

    return result;
}

Node *Util::convert(vector<int> inputs)
{
    if (inputs.size() == 0)
        return nullptr;
    auto temp = new Node(inputs[0]);
    Node *t = temp;

    for (auto i = 1; i < inputs.size(); i++)
        t->next = new Node(inputs[i]), t = t->next;
    return temp;
}

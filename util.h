#ifndef UTIL_H
#define UTIL_H

#include "node.h"

#include <vector>
#include <string>

using namespace sol1836;
using namespace std;

namespace sol1836
{
    class Util
    {
    public:
        static string to_string(Node *head);
        static Node *convert(vector<int> inputs);
    };
}

#endif
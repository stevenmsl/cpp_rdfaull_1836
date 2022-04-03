#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1836;

/*
Input: head = [1,2,3,2]
Output: [1,3]
Explanation: 2 appears twice in the linked list, so all 2's should be deleted.
After deleting all 2's, we are left with [1,3].
*/

tuple<Node *, Node *> testFixture1()
{
  auto input = Util::convert({1, 2, 3, 2});
  auto output = Util::convert({1, 3});

  return make_tuple(input, output);
}

/*
Input: head = [2,1,1,2]
Output: []
Explanation: 2 and 1 both appear twice. All the elements should be deleted.
*/

tuple<Node *, Node *> testFixture2()
{
  auto input = Util::convert({2, 1, 1, 2});
  auto output = Util::convert({});

  return make_tuple(input, output);
}

/*
Input: head = [3,2,2,1,3,2,4]
Output: [1,4]
Explanation: 3 appears twice and 2 appears three times.
After deleting all 3's and 2's, we are left with [1,4].
*/

tuple<Node *, Node *> testFixture3()
{
  auto input = Util::convert({3, 2, 2, 1, 3, 2, 4});
  auto output = Util::convert({1, 4});

  return make_tuple(input, output);
}

void test1()
{
  auto f = testFixture1();

  cout << "Test 1 - expect to see " << Util::to_string(get<1>(f)) << endl;
  cout << "result: " << Util::to_string(Solution::remove(get<0>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - expect to see " << Util::to_string(get<1>(f)) << endl;
  cout << "result: " << Util::to_string(Solution::remove(get<0>(f))) << endl;
}

void test3()
{
  auto f = testFixture3();
  cout << "Test 3 - expect to see " << Util::to_string(get<1>(f)) << endl;
  cout << "result: " << Util::to_string(Solution::remove(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}
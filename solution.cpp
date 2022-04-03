#include "solution.h"

#include <unordered_map>
#include <functional>

using namespace sol1836;
using namespace std;

/*takeaways
  - use a map to record how many times a value has appeared
    on the list
  - traverse the list and remove the duplicates by consulting
    the map
*/

Node *Solution::remove(Node *head)
{
  /* we need to have a temp head as the
     head might be removed as well
  */
  auto temp = new Node(INT_MIN);
  temp->next = head;

  /* record the values and their occurences */
  auto freq = unordered_map<int, int>();

  for (auto node = head; node; node = node->next)
    freq[node->val]++;

  auto cur = temp;

  while (cur)
  {
    /* temp head will never get removed as it won't be in the map */
    while (cur->next &&
           freq.count(cur->next->val) &&
           freq[cur->next->val] > 1)
      /* remove the duplicates */
      cur->next = cur->next->next;
    cur = cur->next;
  }

  return temp->next;
}
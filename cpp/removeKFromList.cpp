// Singly-linked lists are already defined with this interface:
template<typename T>
struct ListNode 
{
   ListNode(const T &v) : value(v), next(nullptr) {}
   T value;
   ListNode *next;
};

ListNode<int>* removeKFromList(ListNode<int>* l, int k)
{
   if (l == nullptr)
      return l;

   ListNode<int>* temp;
   ListNode<int>* head = l;

   if (l->value == k)
   {
      head = l->next;
      delete l;
   }

   temp = head;
   l = head->next;

   if (l == nullptr)
      return head;

   while (l->next != nullptr)
   {
      if (l->value == k)
      {
         temp->next = l->next;
         delete l;
      }

      temp = l;
      l = l->next;
   }
   if (l->value == k)
   {
      temp->next = nullptr;
      if (temp == head)
         return nullptr;
      delete l;
   }

   return head;
}

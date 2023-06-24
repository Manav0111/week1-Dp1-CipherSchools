


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ListNode
{
public:
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* deleteDuplicatesUnsorted(ListNode* head)
{
	unordered_set<int> s;
	ListNode* temp = head;
	ListNode* prev = nullptr;
	while (temp != nullptr)
	{
		if (s.find(temp->val) != s.end())
		{
			prev->next = temp->next;
		}
		else
		{
			s.insert(temp->val);
			prev = temp;
		}
		temp = temp->next;
	}
	return head;
}
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


ListNode* deleteDuplicates(ListNode* head)
{
	ListNode* temp = head;
	while (temp != nullptr && temp->next != nullptr)
	{
		if (temp->val == temp->next->val)
		{
			temp->next = temp->next->next;
		}
		else
		{
			temp = temp->next;
		}
	}
	return head;
}
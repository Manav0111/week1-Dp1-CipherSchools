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


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* head = nullptr;
	ListNode* temp = nullptr;
	int carry = 0;
	while (l1 != nullptr || l2 != nullptr)
	{
		int sum = carry + (l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0);
		carry = sum / 10;
		sum = sum % 10;
		if (head == nullptr)
		{
			head = new ListNode(sum);
			temp = head;
		}
		else
		{
			temp->next = new ListNode(sum);
			temp = temp->next;
		}
		if (l1 != nullptr)
		{
			l1 = l1->next;
		}
		if (l2 != nullptr)
		{
			l2 = l2->next;
		}
	}
	if (carry > 0)
	{
		temp->next = new ListNode(carry);
	}
	return head;
} 
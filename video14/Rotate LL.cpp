
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


ListNode* rotateRight(ListNode* head, int k)
{
	if (head == nullptr || head->next == nullptr)
	{
		return head;
	}
	ListNode* temp = head;
	int count = 1;
	while (temp->next != nullptr)
	{
		temp = temp->next;
		count++;
	}
	temp->next = head;
	k = k % count;
	k = count - k;
	while (k--)
	{
		temp = temp->next;
	}
	head = temp->next;
	temp->next = nullptr;
	return head;
}
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



ListNode* reverseLinkedListInGroup(ListNode* head, int k)
{
	ListNode* curr = head;
	ListNode* next = nullptr;
	ListNode* prev = nullptr;
	int count = 0;
	while (curr != nullptr && count < k)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		count++;
	}
	if (next != nullptr)
	{
		head->next = reverseLinkedListInGroup(next, k);
	}
	return prev;
}
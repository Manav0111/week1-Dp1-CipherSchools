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




ListNode* mergetwoLL(ListNode *a, ListNode *b)
    {
        ListNode *result=NULL;
        if(a==NULL)
        return b;
        else if(b==NULL)
        {
            return a;

        }
        else 
        {
            if(a->val<=b->val)
            {
                result=a;
                result->next=mergetwoLL(a->next,b);
            }
            else
            {
                result=b;
                result->next=mergetwoLL(a,b->next);
            }
        }

        return result;
    }
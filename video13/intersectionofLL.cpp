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



class Solution {
public:
    ListNode *getIntersectionNode(ListNode *firstHead, ListNode *secondHead) {
    ListNode *a=firstHead;
    ListNode *b=secondHead;
    
    while(a!=b)
    {
        if(a==NULL)
            a=secondHead;
        else
            a=a->next;
        
        if(b==NULL)
            b=firstHead;
        else
            b=b->next;
            
    }
    
    if(a==NULL)
        return NULL;
    return a;
    }
};
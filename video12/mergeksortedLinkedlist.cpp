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


    ListNode* mergeKLists(vector<ListNode*>& list) {
        if(list.size()==0)
        {
            return NULL;
        }
        else if(list.size()==1)
        {
            return list[0];
        }
        else
        {
            int last=list.size()-1;
            while(last>0)
            {
                int i=0,j=last;
                while(i<j)
                {
                    list[i]=mergetwoLL(list[i],list[j]);
                    i++;
                    j--;
                      if(i>=j)
                {
                    last=j;
                }      
                }

              
            }

        }
    



        return list[0];



        

    }
};


#include<bits/stdc++.h>
using namespace std;

void generateParenthesis(int n, int open, int close, string s, vector<string> &ans){
    if(open == n && close == n){
	ans.push_back(s);
	return;
    }
    if(open < n){
	generateParenthesis(n, open + 1, close, s + "(", ans);
    }
    if(close < open){
	generateParenthesis(n, open, close + 1, s + ")", ans);
    }
}


vector<string> generateParenthesis(const int n){
	    vector<string> ans;
    string s = "";
    int open = 0, close = 0;
    function<void(int, int, string)> solve = [&](int open, int close, string s){
	if(open == n && close == n){
	    ans.push_back(s);
	    return;
	}
	if(open < n){
	    solve(open + 1, close, s + "(");
	}
	if(close < open){
	    solve(open, close + 1, s + ")");
	}
    };
    solve(open, close, s);
    return ans;
}
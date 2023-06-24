#include<bits/stdc++.h>
using namespace std;



vector<string> dialpad = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void letterCombinations(string digits, int i, string ans, vector<string> &res){
    if(i == digits.size()){
	res.push_back(ans);
	return;
    }
    int idx = digits[i] - '0';
    for(int j = 0; j < dialpad[idx].size(); j++){
	letterCombinations(digits, i + 1, ans + dialpad[idx][j], res);
    }
}
vector<string> letterCombinations(string digits) {
    vector<string> res;
    letterCombinations(digits, 0, "", res);
    return res;
}
/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */
#include <string>
#include <unordered_map>
// @lc code=start

class Automation{
private:
    std::string state = "start";
    std::unordered_map<std::string,std::vector<std::string>> table = {
        {"start",{"start","signed","in_num","end"}},
        {"signed",{"end","end","in_num","end"}},
        {"in_num",{"end","end","in_num","end"}},
        {"end",{"end","end","end","end"}}
    };    
    int  get_col(char c){
        if(std::isspace(c)) return 0;
        if(c=='+'|| c=='-') return 1;
        if(std::isdigit(c)) return 2;
        return 3;
    }

public:
    void get(char c){
        state = table[state][get_col(c)];
        if(state == "in_num"){
            ans = ans*10 + c- '0';
            ans = sig==1 ? std::min(ans,(long long)INT_MAX) : std::min(ans,-(long long)INT_MIN);
        }else if(state == "signed"){
            sig = c=='+' ? 1 : -1;
        }

    }

public:
    int sig = 1;
    long long ans = 0;

};


class Solution {
public:
    int myAtoi(string s) {
        Automation mation;
        for(auto c : s)
            mation.get(c);
        return mation.sig*mation.ans;
    }
};
// @lc code=end


#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        for(auto head = s.begin(); head != s.end(); head++){
            string subStr(1, *head);
            for(auto it = head + 1; (it != s.end()) && (subStr.find(*it) == subStr.npos); it++)
                subStr.push_back(*it);
            if(subStr.length() > result)
                result = subStr.length();
        }

        return result;
    }
};

int main(void){
    string s;
    Solution solution;
    cout << "Type the string you want to test." << endl;
    cin >> s;
    cout << "The tested value is: " << solution.lengthOfLongestSubstring(s) << endl;

    return 0;
}

//1. get substr.s
//2. check if a substr is repeating
//3. if not, check length
//4. if length is greater than existing one, update it.
//5. return the longest substr

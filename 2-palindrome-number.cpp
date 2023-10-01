class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        // cout << str << "hei" << endl;
        string rev = str;
        reverse(rev.begin(),rev.end());
        // cout << rev << " 12" << endl;
        if(str==rev) return 1;
        return 0;
    }
};
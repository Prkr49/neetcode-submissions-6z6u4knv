class Solution {
public:
    bool isPalindrome(string s) {
    int n=s.size();
    int left=0;
    int right=n-1;

    while(left<right){
     // Skip non-alphanumeric from left
            while (left < right && !isalnum(s[left]))
                left++; 
    // skip non -alphanumeric form right
            while   (left<right && !isalnum(s[right]))
            right--;

            if(tolower(s[left]) != tolower(s[right])) 
                return false ;
            
            left++;
            right--;
        }
        return true;
    }
};

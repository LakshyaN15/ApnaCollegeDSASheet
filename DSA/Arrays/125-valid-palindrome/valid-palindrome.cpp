/*Approach 1. Two Pointer
T.C: O(n): first loop iterates from 0 to n-1, and in second loop it is o(n/2)=O(n) as it starts from start and end and gets finished midway. Hence, O(|s|), where n=size of string or |s|.

S.C: The space complexity of the function is O(1) since the additional space used is constant and does not depend on the size of the input string.

*/

/***************** Approach 1 *****************/

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int i=0,j=0;
//         int size=s.size();
//         while(j<size){
//             if(s[j]>='A' && s[j]<='Z'){
//                 s[j]=s[j] - 'A' + 'a';
//             }
//             if((s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9'))
//             s[i++]=s[j++];
//         }
//         int start=0, end=size-1;
//         while(start<=end){
//             if(s[start]!=s[end]) return false;
//             start++,end--;
//         }
//     return true;
//     }
// };

/***************** Approach 2 *****************/
class Solution{
    public:
    bool isPalindrome(string s){
        int end=s.size()-1;
        int start=0;
        while(start<=end){
            if(!isalnum(s[start])) {start++; continue;}
            if(!isalnum(s[end])) {end--; continue;}
            if(tolower(s[start])!=tolower(s[end])) return false;
        else{
            start++;
            end--;
        }
        
        }
        return true;
    }
};


/***************** Approach 3 *****************/
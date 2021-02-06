
#include <bits/stdc++.h> 
using namespace std; 
  
int lenoflongestnonpalindrome(string s) 
{ 
    // initializing the variables 
    int max1 = 1, len = 0; 
  
    for (int i = 0; i < s.length() - 1; i++) { 
        // checking palindrome of size 2 
        // example: aa 
        if (s[i] == s[i + 1]) 
            len = 0; 
        // checking palindrome of size 3 
        // example: aba 
        else if (s[i + 1] == s[i - 1] && i > 0) 
            len = 1; 
        else // incrementing length of substring 
            len++; 
        max1 = max(max1, len + 1); // finding maximum 
    } 
  
    // if there exits single character then 
    // it is always palindrome 
    if (max1 == 1) 
        return 0; 
    else
        return max1; 
} 
  
// Driver Code 
int main() 
{ 
    string s = "synapse"; 
    cout << lenoflongestnonpalindrome(s) << "\n"; 
    return 0; 
} 

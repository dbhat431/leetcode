int lengthOfLongestSubstring(char* s) {
    int i = 0, j = 0, max_len = 0;
    int cnt[256] = {0};  // to store the frequency of characters in the current window

    while (s[j] != '\0') {
        // If the character is not repeated in the current window
        if (cnt[s[j]] == 0) {
            cnt[s[j]]++;
            j++;  // extend the window
            max_len = (max_len > (j - i)) ? max_len : (j - i);  // update max_len if needed
        } else {
            cnt[s[i]]--;  // shrink the window from the left
            i++;  // move the left boundary of the window
        }
    }
    return max_len;
}

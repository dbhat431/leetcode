int strStr(char *haystack, char *needle) {
    char *pos = strstr(haystack, needle);
    if (pos) {
        return pos - haystack;
    }
    return -1;


}
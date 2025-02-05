#include <string>

using namespace std;


int strStr(string haystack, string needle) {
        int addBy = needle.length();
        if (haystack.length() < needle.length()) {
            return -1;
        } else {
            for (int i = 0; i <= haystack.length() - addBy; i++) {
                if (haystack.substr(i, addBy) == needle) {
                    return i;
                }
            }
            return -1; // Needle not found
        }
}

int main(){}
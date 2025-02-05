#include <string>

using namespace std;

string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32; // Convert uppercase to lowercase
            }
        }
        return s;
}

int main() {}
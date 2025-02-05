#include <string>
#include <vector>

using namespace std;


bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<char> common(s.begin(), s.end());

        for (char c : t) {
            auto it = find(common.begin(), common.end(), c);
            if (it != common.end()) {
                common.erase(it);
            } else {
                return false;
            }
        }

        return true;
}

int main() {}
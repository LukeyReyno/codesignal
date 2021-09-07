#include <string>

using namespace std;

string amendTheSentence(string s) {
    for (unsigned i = 0; i < s.size(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] = s[i] - ('A' - 'a');
            if (i > 0)
                s.insert(i, " ");
        }
    }
    
    return s;
}

#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    int i = 0;
    while (s[i] != '\0') {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            counts[index]++;
        }
        i++;
    }
}
int main() {
    char s[100];
    int counts[26];

    cout << "请输入一个字符串: ";
    cin.getline(s, 100);  
    count(s, counts);
    cout << "字母出现的次数（非零）: " << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << (char)('a' + i) << ": " << counts[i] << endl;
        }
    }

    return 0;
}

/**
 * February 2013 Cook-Off
 *
 * Problem:     NOLOGIC - Lack of Logic
 * Author:      Anton Lunyov (Problem-Setter)
 * Complexity:  O(size + 26) per test
 * Timing:      0.00 out of 1.00
 *
 * Description:
 * We mark each used letter in the question
 * in the boolean array of size 26
 * and then output first non-used letter as the answer
 * or "~" if all characters were used
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	// this is needed to skip the new-line character after T
	cin.get();
	for (int t = 0; t < T; ++t) {
		string s; // the question
		// this routine read the whole line not including new-line character
		// and set the position in the stream to the first character of the next line
		getline(cin, s);
		// the array of used letters in the question
		vector<bool> used(26, false);

		int n = s.length();
		for (int i = 0; i < n; ++i) {
			// we should consider uppercase and lowercase letters separately
			if ('a' <= s[i] && s[i] <= 'z') {
				used[s[i] - 'a'] = true;
			}
			if ('A' <= s[i] && s[i] <= 'Z') {
				used[s[i] - 'A'] = true;
			}
		}

		bool impossible = true;
		// iterating over lowercase letters
		for (char c = 'a'; c <= 'z'; ++c) {
			if(!used[c - 'a']) {
				// if unused letter is encountered then output it and break
				cout << c;
				impossible = false;
				break;
			}
		}
		// output tilde sign if all letters were used
		if (impossible) {
			cout << "~";
		}
		cout << endl;
	}
	return 0;
}

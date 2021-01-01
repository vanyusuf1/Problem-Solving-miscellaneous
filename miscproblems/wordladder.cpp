class Solution {
public:
	int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
		int res = 1;
		unordered_set<string> string1 {beginWord};
		unordered_set<string> string2 {endWord};

		while (string1.size()) {
			res++;
			unordered_set<string> set;
			for (auto word : string1) wordList.erase(word);
			for (auto word : string1) {
				for (size_t i = 0; i < word.size(); ++i) {
					string next = word;
					for (char c = 'a'; c <= 'z'; ++c) {
						next[i] = c;
						if (wordList.find(next) == wordList.end()) continue;
						if (string2.find(next) != string2.end()) return res;
						set.insert(next);
					}
				}
			}
			string1 = set.size() < string2.size() ? set : string2;
			string2 = set.size() < string2.size() ? string2 : set;
		}

		return 0;
	}
};
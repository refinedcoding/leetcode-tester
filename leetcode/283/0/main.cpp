#include "./solution.h"

int main() {
	Solution sol = Solution();
	vector<string> res[2] = {{"K1","K2","L1","L2"}, {"A1","B1","C1","D1","E1","F1"}};
	string s[2] = {"K1:L2", "A1:F1"};
    for (int i = 0; i < 2; i++) {
		vector<string> my_ans = sol.cellsInRange(s[i]);
		compare_result(my_ans, res[i]);
    }
    return 0;
}
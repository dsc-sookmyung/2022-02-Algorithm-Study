#include <iostream>
#include <stack>
#include <string>

using namespace std;

//( : -1, ) : -2, [ : -3, ]: -4
int check(string str) {
	stack <int> s;
	int len = str.length();
	int temp = 0;
	int ans = 0;

	for (int i = 0; i < len; i++) {
		//¿­¸° °ýÈ£ÀÎ °æ¿ì
		if (str[i] == '(') s.push(-1);
		else if (str[i] == '[') s.push(-3);
		//´ÝÈù °ýÈ£ÀÎ °æ¿ì
		else if (s.empty())  //1. ´ÝÈù °ýÈ£°¡ ´õ ¸¹Àº °æ¿ì
			return 0;
		else {
			if (s.top() == -1 && str[i] == ')') {
				s.pop();
				s.push(2);
			}
			else if (s.top() == -3 && str[i] == ']') {
				s.pop();
				s.push(3);
			}
			//s.top()ÀÌ ¼ýÀÚÀÎ °æ¿ì ¶Ç´Â 3. °ýÈ£ÀÇ Â¦ÀÌ ¸ÂÁö ¾Ê´Â °æ¿ì
			else {
				temp = 0;
				while (s.top() != -1 && s.top() != -3) { //( {
					temp += s.top();
					s.pop();

					if (s.empty())  //1.´ÝÈù °ýÈ£°¡ ´õ ¸¹Àº °æ¿ì
						return 0;
				}
				if (s.top() == -1 && str[i] == ')') {
					temp *= 2;
					s.pop();
				}
				else if (s.top() == -3 && str[i] == ']') {
					temp *= 3;
					s.pop();
				}
				else
					return 0;   //3. °ýÈ£ÀÇ Â¦ÀÌ ¸ÂÁö ¾Ê´Â °æ¿ì
				s.push(temp);
			}
		}
	}

	while (!s.empty()) {
		if (s.top() == -1 || s.top() == -3) //2. ¿­¸°°ýÈ£°¡ ´õ ¸¹Àº °æ¿ì
			return 0;
		ans += s.top();
		s.pop();
	}
	return ans;
}

int main() {
	string str;

	cin >> str;
	cout << check(str);
}
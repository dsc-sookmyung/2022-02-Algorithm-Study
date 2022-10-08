# ⛅[2주차] 02-Sort
</hr>

## 🌍sort() 함수
C++ STL 함수의 sort() 함수는 quick sort 알고리즘을 바탕으로 만들어졌다. 최악의 경우에 대해서도 어느 정도 개선된 quick sort 알고리즘이라고 할 수 있다. 따라서 대부분의 경우, *O(n * log n)* 의 시간복잡도를 갖는다.
![enter image description here](https://d2.naver.com/content/images/2020/01/img.png)

## 🌎sort() 함수 사용법
C++의 algorithm 헤더에 sort() 함수가 포함되어 있다. sort() 함수는 오름차순이 기본이다.
1. *sort(배열의 시작점 주소, 배열의 마지막 주소 + 1)* 이면 오름차순 정렬
2. *sort(배열의 시작점 주소, 배열의 마지막 주소 + 1, greater<>())* 이면 내림차순 정렬
3. *sort(배열의 시작점 주소, 배열의 마지막 주소 + 1, compare)* 이면 사용자 정의 함수로 정렬


	#include <iostream>
	#include <algorithm>

	using namespace std;

	int main() {
		int a[10] = {9, 3, 5, 4, 1, 10, 8, 5, 7, 2};
    		sort(a, a + 10);
    		for (int i = 0; i < 10; i++) {
    			cout << a[i] << ' ';
    		}
	}

</hr>

## 🌐백준 문제
필수 문제는 **굵은** 글씨

|번호|이름  |
|--|--|
|**2751**  |[수 정렬하기 2](https://www.acmicpc.net/problem/2751)  |
|**10825**  |[국영수](https://www.acmicpc.net/problem/10825)  |
|**11582**  |[치킨 TOP N](https://www.acmicpc.net/problem/11582)  |
|8870  |[좌표압축](https://www.acmicpc.net/problem/8870)  |
|1517  |[버블소트](https://www.acmicpc.net/problem/1517)  |
|16496  |[큰 수의 만들기](https://www.acmicpc.net/problem/16496)  |

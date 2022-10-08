

# ⛅[1주차] 01-BruteForce-and-Backtracking

</hr>

  

## 🌍Big-O 표기법

알고리즘의 성능을 수학적으로 표기하는 방법. 시간과 공간 복잡도를 표기할 수 있다.
![enter image description here](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https://blog.kakaocdn.net/dn/bAsoe5/btrNAyOWbMh/4K0M6kM1nLX9JrsBumbDFk/img.png)
O (1) > O (logn) > O (n) > O (nlogn) > O (n^2) > O (n^3) > O (2^n)

위와 같은 성능순서를 가지고 있다. 알고리즘을 구현할 때 시간복잡도를 고려해야한다.

  

## 🌎BruteForce(완전 탐색)

가능한 경우의 수를 모두 조사하는 방법이다.(ex.for 문으로 전수조사) 반복문이 쌓일 수록 지수의 성능을 가지게 된다. 모든 경우를 조사하기 때문에 정답을 반드시 찾을 수 있지만 효율성이 떨어진다.

  

## 🌏백트래킹

현재 상태에서 가능한 모든 후보군을 따라 들어가며 탐색하는 알고리즘. 이름 그대로 이 경우가 아니다 싶으면 다시 돌아가 다른 경우를 찾는 것. 완전 탐색보다 경우의 수가 줄어들 수 있지만 최악의 경우 같은 성능이 될 수 있다.

백트래킹은 DFS를 하여 스택을 사용. 백트래킹의 단계가 깊지 않다면 재귀함수를 사용하는게 효율적이다.

  

## 🌌재귀함수

함수가 내부에서 자기 자신을 호출하여 들어가는 것이다. 조건문을 통해 조건에 부합하면 결과값을 입력받고 계속 그 함수를 빠져나간다.

  

</hr>

  

## 🌐백준 문제
필수 문제는 **굵은** 글씨

|번호|이름  |
|--|--|
|2309  |[일곱난쟁이](https://www.acmicpc.net/problem/2309)  |
|1065  |[한수](https://www.acmicpc.net/problem/1065)  |
|7568  |[덩치](https://www.acmicpc.net/problem/7568)  |
|3258  |[컴포트](https://www.acmicpc.net/problem/3258)  |
|18511  |[큰 수 구성하기](https://www.acmicpc.net/problem/18511)  |
|1248  |[맞춰봐](https://www.acmicpc.net/problem/1248)  |


> Written with [StackEdit](https://stackedit.io/).
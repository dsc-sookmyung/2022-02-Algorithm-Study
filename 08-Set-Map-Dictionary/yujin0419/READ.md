# ⛅[8주차] 08-Set-Map-Dictionary
</hr>

## 🌍 map
* 인덱스로 int가 아닌 다른 자료형을 사용할 수 있는 배열이라고 생각하면 쉬움
* 각 노드가 unique한 key와 value의 쌍으로 이루어진 트리
* 검색, 삽입, 삭제 등의 속도를 빠르게 하기 위해 균형 이진 트리 중 하나인 레드 블랙 트리로 구현되어 있음
* key를 기즌으로 정렬되어 있기 때문에 검색 속도가 빠름
* 연관 있는 두 값을 함께 묶어서 관리하되, 검색을 빠르게 하고 싶은 경우에 주로 사용

## 🌎 map 사용법 - c++
* include <map>을 해야 사용 가능
* map은 중복 불가한 key와 values 쌍으로 이루어진 노드의 트리이므로 같은 key 값을 같은 노드에 추가하면 원래 노드의 values 값에 덮어씌워짐
* map은 요소에 접근할 때, 반복자(iterator)를 이용하는 방식과 인덱스(key)를 이용하는 방식을 사용
* insert와 erase 함수의 경우 파라미터 값 자체가 아닌 iterator를 넘겨주는 방식을 사용할 수도 있음

## 🌍 set
* key만 있는 map 혹은 정렬된 집합 (key 값들이 중복을 허락하지 않으므로 정렬된 집합이라고 표현)
* map과의 차이점: 구조는 매우 유사하지만 가장 큰 차이점은 set은 key만 있고 value가 없는 것
* 특정 값에 대해 검색을 빠르게 하고 싶은 경우에 사용

## 🌎 set 사용법 - c++
* include <set>을 해야 사용 가능

## reference
* https://sarah950716.tistory.com/6
* https://chanhuiseok.github.io/posts/algo-46/
</hr>

## 🌐백준 문제
필수 문제는 **굵은** 글씨

|번호|이름  |
|--|--|
|**1620**  |[포켓몬 마스터 이다솜](https://www.acmicpc.net/problem/1620)  |
|**19583**  |[싸이버개강총회](https://www.acmicpc.net/problem/119583)  |
|**1764**  |[듣보잡](https://www.acmicpc.net/problem/1764)  |
|**4358**  |[생태학](https://www.acmicpc.net/problem/4358)  |
|14425  |[문자열 집합](https://www.acmicpc.net/problem/14425)  |
|16165  |[걸그룹 마스터 준석이](https://www.acmicpc.net/problem/16165)  |

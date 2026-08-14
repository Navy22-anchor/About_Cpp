### summary 1-4

* 무언가의 전문가가 된다는 것은 본인이 낸 결과물에 책임감을 느끼는 것이다.
* s/w 엔지니어는 코드의 효율성 정확성 단순성에 집중을 해야한다.
* 이것을 돕는 기술이 추상화와 분할 정복이다.
* 코드의 구조와 조직화가 좋은 코드를 생산한다.
```cpp
int length = 4 // 여기서 length는 명명된 객체를 의미한다.
int width = 10 
int area = length * width // 여기서 length 는 명명된 객체의 값을 의미한다.
```
* 가독성이 높은 코드를 작성하자.
    1. 고치기 쉬움
    2. 이해하기 쉬움
* 매직 넘버를 쓰지 말자.
```cpp
constexpr double pi = 3.141592;
pi = 7; // 불가능
```
* constexpr로 정의하는 기호 상수는 반드시 컴파일 시점에 값을 알 수 있어야한다.
* const로 정의하는 상수는 컴파일 시점에 값을 알 수 없어도 된다. 
초기화 이후에는 값을 변경할 수 없다.
```cpp

constexpr int max = 7;

void use(int n)
{
    constexpr int c1 = max + 7;
    constexpr int c2 = max + n; // 컴파일 되는 시점에 상수로 지정된 값을 알 수 없다.
}

```
* 대소 연산자를 연속적으로 쓰지 말자.

```cpp
int a {0};
// 가독성 순위 모두 같은 목적 코드임
++a
a += 1
a = a+1
```
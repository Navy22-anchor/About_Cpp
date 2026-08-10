### #include .h 에 대해

```cpp
// math.h  ── 머리만. 여러 번 복사돼도 안전.
int add(int a, int b);

// math.cpp ── 몸통까지. 프로그램 전체에서 한 번만.
#include "math.h"        // ← 약속을 지켰는지 검사받는 장치
int add(int a, int b) { return a + b; }

// main.cpp ── 머리만 알면 쓸 수 있다.
#include "math.h"        // math.cpp 는 include 하지 않는다
add(3, 5);
```

main.cpp  ──컴파일──▶ main.o  ┐<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;├──링크──▶ 실행파일<br>
math.cpp  ──컴파일──▶ math.o  ┘<br>

C++은 모르는 코드는 실행하지 않는다.
# Function

## Component
- argument(=parameter)
- operation
- return

- declaration > invoke(=call)
```cpp
// 이 경우 return의 결과로 식(expression)이 반환된다.
int add(int a, int b){return a+b;}
```

## Signature
- **C는 함수를 구별하는 유일한 식별자가 함수 이름 뿐이다.**

** 참고, java의 경우 다음 요소들이 다르면 서로 다른 함수로 처리한다.

아래 네 가지 함수는 **signature**가 다르기 때문에 다른 함수이다.  
함수의 이름은 같다. 하지만 서로 다른 **return type**과 **argument**를 가지기 때문에 서로 다른 함수이다.

```java
int add(int a, int b){return a + b;}

int add(float a, float b){return a + b;}

float add(int a, int b){return a + b;}

float add(float a, float b){return a + b;}
```

## How functions managed.

- 먼저 이 주제를 이해하기 위해서는 stack frame이라는 개념을 이해할 필요가 있다.
- 먼저 그림을 보자.

![stack frame](https://i.stack.imgur.com/DAMVU.png)

- stack frame에 함수가 차곡차곡 쌓인다.
- 가장 최근에 호출된 함수가 stack의 최상단에 위치해 있게 된다.
- 컴파일 시점에서 각 함수가 어느 정도의 메모리를 차지하게 될지에 대해서 미리 계산을 해 놓는다.
- caller의 context에서 함수가 호출된 후, 함수의 operation이 종료되어 caller context의 돌아가게 되면,
    - 함수가 호출된 시점의 코드상의 위치로 돌아가야 한다.
    - return 값은 return값을 전용으로 관리하는 특수 레지스터에 임시로 들어가게 된다.
    - 함수가 끝난 시점의 복귀주소를 알아야 돌아가게 되므로, stack frame에는 복귀주소도 알고 있어야 한다.    

- 더 자세한 그림은 아래 그림을 참조한다.

![Details of stack frame](http://www.gamesetwatch.com/StackFrameAnatomy.png)

- 위 그림은 한 함수가 stack frame에 올라갔을 때(ram) 어떠한 메모리 값들이 들어가는지에 대해 설명한 그림이다.


## Terms

- **function**
    1. 특정 계산을 수행하며 리턴값이 있다.
    2. 반드시 수식 내에서만 사용.
    3. 함수 단독으로 문장구성 불가.
- **procedure**
    1. 특정 작업을 수행하며 리턴값이 없다.
    2. 수식 내에서 사용할 수 없음.
    3. void 함수가 이에 해당.
- **Prototype**
    - main 함수 이전에 함수의 원형을 선언해놓는다.

*참고

```cpp
// 원형 선언시에 다음 세 문장은 정확히 같은 역할을 한다.

int age(int);
int age(int a);
int age(int age); // 좋지 않은 네이밍.
 .
 .
 .
int age(int age){
    return age;
}
```

## Features
- c 함수의 특징
    1. call by value가 기본.
    2. 선언의 끝에는 **;** 를 **붙이지 않는다.** (normally semicolon is appended when expression is declared)

- 헤더파일
    - 표준 함수의 원형을 미리 작성해 놓은 것을 헤더파일(Header File)이라고 한다.
    - ```#include``` 문을 통해서 헤더파일을 소스 안으로 읽어 들이는 역할을 한다.
    - 함수를 사용하기 전에 원형만 선언한다면 함수의 본체는 어디에 있더라도 상관이 없다.
    - 하나의 실행 파일을 만들기 위해서 소스를 여러개로 나누어 개발하는 방식을 **모듈분할 컴파일** 방식이라고 한다.

## Calling Convention
- 다음의 코드를 보자.

```cpp

  void main(){
    int i = 3;
    printf("%d %d\n", i, ++i); // 4, 4
  }

```

- 위 연산의 결과가 3, 4가 나올꺼라고 예상을 했지만, 실은 4,4가 나온다.
- 그 이유는 C 컴파일러가 함수식을 평가할 때, 뒤쪽 인수부터 평가하며 들어온다. (그 이유는 가변인수를 다루기가 편해서.)
- 아쉽게도, C 표준에 함수 호출시, 인수를 전달하는 순서는 정해져 있지 않다. 이 말은, 컴파일러마다 다르게 해석할 수 있을 여지가 있다는 말이다.
- 이러한 함수의 호출과 관련된 규역을 Calling Convetion 이라고 한다.

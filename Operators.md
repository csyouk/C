# Operators

## 연산자 우선순위

- 단항(후치 > 전치) >  이항(산술 >  관계(대소 > 상등) > 논리) > 삼항 > 할당 > 순차

## 부정 연산자 ( ! )
```cpp

	int a = 3;
	if (!1)  printf("!1 : True \n");
	if (!0)  printf("!0 : True \n");
	if (!(a == 3))  printf("!(a==3) : True \n");
	if (!(a == 0))  printf("!(a==0) : True \n");
	if (!(a+3))  printf("!(a+3) : True \n");
	// 위 경우 중 출력 되는 경우는 2번째 4번째 이다. 

	if(a = 3) printf("a = 3 True\n");
	// 역시 출력된다.

```


## 연산자 동작의 우선순위 연습
```cpp
	
	int add(int a, int b){return a + b;}

	int a;
	printf("EX15 : %d\n", add(3, 4, 5));   // 7
	printf("EX15 : %d\n", add(3, (4, 5))); // 8

	a = 3, 4;
	printf("EX15 : %d\n", add(a, 10));     // 13
	a = (50, 100);
	printf("EX15 : %d\n", add(a, 200));    // 300

```

```cpp

	int a, b, c;
	a = (b = 3, c = b + 4, c + 1);
	printf("a b c : %d %d %d \n", a, b, c); // 8 3 7
	a = b = 3, c = b + 4, c + 1;
	printf("a b c: %d %d %d\n", a, b, c);   // 3 3 7

```

## Short circuit
- 논리곱(AND)은 거짓일 확류리 높은 조건식을 앞쪽에 배치한다.
- 논리합(OR )은 참일 확률이 높은 조건을 앞으로 배치한다. 

```cpp

	a && b && c  --> 거짓일 확률이 높은 조건식을 앞쪽에 배치.

	a || b || c  --> 참일 확률이 높은 조건식을 앞에 배치. 

```


```cpp

	if(f() && g()) // 실행결과 g는 실행되지 않는다.

```

```cpp

	//example
	int a = 4, b = 0;
	if (a == 5 && b = 3) b++;  // l-value  에러
	printf("ex19 : %d\n", b);   

```

```cpp

	int a = 4, b = 0;
	if (a == 5 && b = 3) b++;
	printf("ex19 : %d\n", b);  // 0

```

```cpp

	int a = 4, b = 0;
	if ((a < 5) || (b = 3)) b++;
	printf("ex21 : %d\n", b);   // 1

```


## Ternary operator

- A ? B : C
- 위의 삼항연산자가 if(A) B else C와의 차이점이 있다면, if는 문장을 만들지만, ?:은 식을 만든다.

# Array

- 배열의 identifier는 배열의 첫요소의 주소이다.
- 즉 배열의 identifier는 상수값이기 때문에, 피연산자로서 역할을 하지 못한다는 뜻이다.

```cpp
void main(void){
	char a[] = "SCSA";
	char *p = a;

	printf("%x\n", &a);     // 가능
	printf("%x\n", &a++);   // 불가   --> l-value 에러이다. 주소값이기 때문에, 연산이 불가하다.
	printf("%x\n", (&a)++); // 불가   --> l-value 에러이다. 주소값이기 때문에, 연산이 불가하다.
	printf("%c\n", *a);     // 가능
	printf("%c\n", *a++);   // 불가  --> l-value 에러이다. 주소값이기 때문에, 연산이 불가하다.
	printf("%c\n", (*a)++); // 가능
	printf("%x\n", p);		// 가능
	printf("%x\n", ++p);	// 가능
	printf("%s\n", *++p);	// 컴파일은 되지만, 오류이다. 이유는 %s는 주소값을 받는데, *++p는 상수값을 반환하기 때문이다.
  printf("%c\n", *++p);	// 가능. C 출력
	printf("%c", ++*p);		// 가능
	printf("%s", a++);      // 불가  --> l-value 에러이다. 주소값이기 때문에, 연산이 불가하다.
}
```

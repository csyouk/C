# Array

- 배열의 identifier는 배열의 첫요소의 주소이다.
- 즉 배열의 identifier는 상수값이기 때문에, 피연산자로서 역할을 하지 못한다는 뜻이다.

```cpp
void main(void){
	char a[] = "SCSA";
	char *p = a;

	printf("%x\n", &a);     // 가능
	printf("%x\n", &a++);   // 불가
	printf("%x\n", (&a)++); // 불가
	printf("%c\n", *a);     // 가능
	printf("%c\n", *a++);   // 불가
	printf("%c\n", (*a)++); // 가능
	printf("%x\n", p);		// 가능
	printf("%x\n", ++p);	// 가능
	printf("%s\n", *++p);	// 가능
	printf("%c", ++*p);		// 가능
	printf("%s", a++);      // 불가
}
```

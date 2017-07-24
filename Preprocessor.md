# Preprocessor

## How preprocessor works.

## \#include

- Inserts a particular header from another file. 

## \#define

- Substitutes a preprocessor macro

## Macro function

## Extra

- **\#undef**   Undefines a preprocessor macro.
- **\#ifdef**	Returns true if this macro is defined.
- **\#ifndef**	Returns true if this macro is not defined.
- **\#if**	Tests if a compile time condition is true.
- **\#else**	The alternative for #if.
- **\#elif**	#else and #if in one statement.
- **\#endif**	Ends preprocessor conditional.
- **\#error**	Prints error message on stderr.
- **\#pragma**	Issues special commands to the compiler, using a standardized method.


## Predefined macros

- \_\_DATE\_\_	The current date as a character literal in "MMM DD YYYY" format.
- \_\_TIME\_\_	The current time as a character literal in "HH:MM:SS" format.
- \_\_FILE\_\_	This contains the current filename as a string literal.
- \_\_LINE\_\_	This contains the current line number as a decimal constant.
- \_\_STDC\_\_	Defined as 1 when the compiler complies with the ANSI standard.

## Preprocessor operator

- **\\**  : Macro continuation operator.

```cpp 
#define  print_msg(a, b)  \
   printf("%s and %s \n", a, b)
```

### String interpolation 
- 매크로로 선언된 문장에서 \# 연산자가 쓰이면, \# 연산자는 매크로 매개변수(parameter)로 채워진다. 
parameter는 문자열 상수로 전환된다.  

``` cpp 
#include <stdio.h>

#define  message(arg1, arg2)  \
   printf(#arg1 " and " #arg2 " // argument passed! \n")

int main(void) {
   message("csyouk", "tommey");
   return 0;
}
```

### Token-interpolation
- \#\# : 토큰 복사 연산자(token-pasting operator)
매크로 정의부에 쓰인 \#\# 연산자는 2개의 인자를 붙여서 하나의 토큰 처럼 쓰이게 한다.

```cpp 
#include <stdio.h>

#define tokenpaster(n) printf ("token" #n " = %d", token##n)

int main(void) {
   int token34 = 40;
   tokenpaster(34);
   return 0;
}
```


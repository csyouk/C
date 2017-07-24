//#define UL_CONVERT_CONSTANT 32
//#define IC_CONVERT_CONSTANT 48
//#define F_ROUND_THRESHOLD 0.5
//
//float circle_area(float radius)
//{
//	float pi = 3.14f; // 조심! 만약 3.14 라고 한다면 이 값은 double 이 된다. 
//	return pi * radius * radius;
//}
//
//unsigned int convert_yen_to_won(unsigned int yen)
//{
//	float exchange_rate = 11.0f;
//	return yen * exchange_rate;
//}
//
//int round(float value)
//{
//	//int result = value;
//	//int quot = ((value - result) * 10) / 5;	
//	//return result + quot;
//
//	return value + F_ROUND_THRESHOLD;
//
//}
//
//
//int categorize(unsigned int register_number)
//{
//	return register_number % 4 + 1;
//}
//
//
//
//char upper_char(char lower)
//{
//	return lower - UL_CONVERT_CONSTANT;
//}
//
//char lower_char(char upper)
//{
//	return upper + UL_CONVERT_CONSTANT;
//}
//
//char int_to_char(int number)
//{
//	return number + IC_CONVERT_CONSTANT;
//}
//
//int char_to_int(char alphabet)
//{
//	return alphabet - IC_CONVERT_CONSTANT;
//}
//
//
//void name_disp(void){
//	printf("name defined");
//}
//
//int my_age(int age){
//	return age;
//}
#include <stdio.h>
#include <string.h>

#define ADDRESS 0

#if ADDRESS
void inject_student_data();
void print_student_data();

struct Student
{
	char name[4];
	int height;
	int weight;
	unsigned long long phone_number;
	int id;
};

void inject_student_data(struct Student *student, char* name, int height, int weight, unsigned long long pn, int id){
	// ����ü �������� member�� ������ ����, -> operator�� ����Ѵ�.
	strcpy(student->name, name);
	student->height = height;
	student->weight = weight;
	student->phone_number = pn;
	student->id = id;
}

void print_student_data_as_struct_argument(struct Student student){
	printf("====================================================\n");
	printf("Student name is : %s \n", student.name);
	printf("Student height is : %d \n", student.height);
	printf("Student weight is : %d \n", student.weight);
	printf("Student phone number is : %llu \n", student.phone_number);
	printf("Student id is : %d \n", student.id);
	printf("====================================================\n");
}

void print_student_data_as_pointer_argument(struct Student *student){
	printf("====================================================\n");
	printf("Student name is : %s \n", student->name);
	printf("Student height is : %d \n", student->height);
	printf("Student weight is : %d \n", student->weight);
	printf("Student phone number is : %llu \n", student->phone_number);
	printf("Student id is : %d \n", student->id);
	printf("====================================================\n");
}

void main(void){
	struct Student cs;
	struct Student sw;

	// variable 'cs'�� �ʱ�ȭ�� ���� ���� ���¿��� ���Ǿ���.
	// ���� �̷��� ����ϴ� ���� Ʋ�ȴ�. 
	// student1 = inject_student_data(cs, "YCS", 171, 72, 821012312311, 1);
	
	// ����� ���� ���ؼ��� struct pointer�� �Ѱܾ� �Ѵ�. 
	inject_student_data(&cs, "HSW", 182, 85, 8201000000000ull, 1);

	print_student_data_as_struct_argument( cs );
	print_student_data_as_pointer_argument( &cs );
}


#endif
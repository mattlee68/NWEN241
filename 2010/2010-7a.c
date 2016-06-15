#include <stdio.h>
#include <math.h>

typedef struct Student{
    int id;
    int age;
    char gender;
}Student;

int pack(Student *);
Student unpack(int);

int main(void){
    Student astudent = {1234567, 20, 'F'};
    Student *pstu = &astudent;
    int packedstu = pack(pstu);
    Student unpacked = unpack(packedstu);
    printf("%c %d %d", unpacked.gender, unpacked.age, unpacked.id);
}

int pack(Student *s){
    int student = 0;
    student |= (((s->gender) == 'M') ? 1 : 0);
    student |= (s->age) << 1;
    student |= (s->id) << 8;
    return student;
}

Student unpack(int s){
    Student stu;
    int m1 = 1;
    int m2 = pow(2,7) - 1;
    int m3 = pow(2,24) - 1;
    stu.gender = (((m1&s) == 1 )? 'M' : 'F');
    stu.age = ((s & (m2<<1)) >> 1);
    stu.id = ((s & (m3<<8)) >> 8);
    return stu;
}

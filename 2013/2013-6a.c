#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct student{
    int id;
    int age;
    char gender;
}Student;

int pack(Student *);
Student unpack(int);

int main(void){
    Student s;
    s.id = 3003134;
    s.age = 14;
    s.gender = 'M';
    int packed_student = pack(&s);
    Student unpacked = unpack(packed_student);
    printf("%c ", unpacked.gender);
    printf("%d ", unpacked.age);
    printf("%d ", unpacked.id);

}

int pack(Student *s){
    int stu = 0;
    stu |= ((s->gender == 'M') ? 1 : 0);
    stu |= (s->age) << 1;
    stu |= (s->id) << 8;
    return stu;
}

Student unpack(int s){
    Student st;
    int m1 = 1;
    int m2 = pow(2,7) - 1;
    int m3 = pow(2,24) - 1;

    st.gender = ((s&m1) ? 'M' : 'F');
    st.age = ((s &(m2 << 1)) >> 1);
    st.id = ((s &(m3 << 8)) >> 8);

    return st;
}

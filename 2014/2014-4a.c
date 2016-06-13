#include <stdlib.h>
#include <stdio.h>

typedef struct student{
    int id;
    int age;
    char gender;
}Student;

int pack(Student *);

int main(void){
    Student s;
    s.id = 3003134;
    s.age = 14;
    s.gender = 'M';
    printf("%d", pack(&s));
}

int pack(Student *s){
    int stu = 0;
    stu |= ((s->gender == 'M') ? 1 : 0);
    stu |= (s->age) << 1;
    stu |= (s->id) << 8;
    return stu;
}

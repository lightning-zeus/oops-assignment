#include <bits/stdc++.h>
using namespace std;
class GradeCard{
char *dept;
char *name;
char *roll;
int semester;
int subjects[3];

public:
float cgpa;
  GradeCard()
    {
        name = dept = roll = NULL;
        semester = 0;
        for (long long i = 0; i < 3; i++)
            subjects[i] = 0;
        cgpa = 0;
    }
GradeCard(char *name,char *dept, char *roll,int sem,int sub1,int sub2,int sub3){
    this->dept = dept;
    this->name = name;
    this->roll = roll;
    this->semester = sem;
    subjects[0] = sub1;
    subjects[1] = sub2;
    subjects[2] = sub3;
     int total = 0;
        for(int i=0;i<3;i++)
         total += this->subjects[i];
    float percentage  = ((float)total * 100) / 300;
    cgpa = percentage / (9.5);
    
}
};
GradeCard highest_cgpa(GradeCard *grades){
    float h_gpa=0;
    GradeCard h_cgpa;
for(int i=0;i<6;i++){
   if(grades[i].cgpa>h_gpa)
        h_cgpa = grades[i];
        }
        return (h_cgpa);
}
int main() {
 int n=6;
 GradeCard grades[n];
    grades[0] = {(char *)"Sk Asif", (char *)"Information Technology", (char *)"123456", 3, 70, 80, 90};
    grades[1] = {(char *)"Harry Potter", (char *)"Information Technology", (char *)"123457", 3, 50, 99, 69};
    grades[2] = {(char *)"Obi wan Kenobi", (char *)"Information Technology", (char *)"123458", 3, 99, 99, 99};
    grades[3] = {(char *)"Anakin Skywalker", (char *)"Information Technology", (char *)"123459", 3, 60, 70, 99};
    grades[4] = {(char *)"Qui Gonn Jinn", (char *)"Information Technology", (char *)"123460", 3, 50, 65, 99};
    grades[5] = {(char *)"Ahsoka Tano", (char *)"Information Technology", (char *)"123461", 3, 99, 99, 99};
    

   //TODO output the highest gpa 

    
    return 0;
}
#include <stdio.h>
#include <string.h>

int l;

struct Student {
 int   age;
    char     name[16];
    char     surname [16];
};

void PrintSTArray(struct Student s1[]) {
 for (int i = 0; i < 5; i++) {
  printf("{   ");
  printf("\t%s", s1[i].name);
  printf("\t%s", s1[i].surname);
  printf("\t%d", s1[i].age);
  printf("}\n");
 }
 puts("\n");
}

void yosh(struct Student s1[]){
   struct Student temp;


   int age  = s1[0].age;
   for (int i = 0; i < l; i++){
      for(int j = i; j < l; j++){
         if (s1[i].age > s1[j].age){
            temp = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
      }
   }
   PrintSTArray(s1);
}

void name(struct Student s1[5]){
   struct Student temp;

   int age  = s1[0].age;
   for (int i = 0; i < l; i++){
      for(int j = i; j < l; j++){
         if (s1[i].name[0] > s1[j].name[0]){
            temp = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
      }
   }
   PrintSTArray(s1);
}

int main() {
 struct Student s1[5] = {
  {
   .age = 12,
   .name = "ali",
   .surname = "umarov"
  }, 
  {
   .age = 15,
   .name = "vali",
   .surname = "umarov"
  }, 
  {
   .age = 11,
   .name = "g'ali",
   .surname = "umarov"
  }, 
  {
   .age = 19,
   .name = "usmon",
   .surname = "umarov"
  }, 
  {
   .age = 13,
   .name = "otabek",
   .surname = "umarov"
  }
 };
l =sizeof(s1) / sizeof(s1[0]);
 puts("kiritilgani asli\n");
 PrintSTArray(s1);
 puts("kiritilgani yosh boyicha sartarofka qilingani\n");
 yosh(s1);
 puts("kiritilgani yosh boyicha sartarofka qilingani\n");
 name(s1);
}

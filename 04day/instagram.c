#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

struct Token {
 int id;
 char username[33];
} *token;

struct User {
 int  id;
 char fullname[64];
 char email[64];
 char username[33];
 char password[61];
};

struct Post {
 int  id;
 char title[64];
 char content[512];
 char imageUrl[512];
 int  UserId;
};

struct User Users[100];
unsigned int lengthUsers = 0;



int otpCode = 0;

void ClearSceen() {
 system("clear");
}

int otp() {
 return rand() % 1000000 + 100000;
}
void suggestionPassword(char sugPas[]){
   int len = rand() % 5 + 6;
    for (int i = 0; i < len; i++){
        if (i % 3 == 0){
            sugPas[i] = rand() % 26 + 97;
        }
        else if (i % 3 == 1){
            sugPas[i] = rand() % 26 + 65; 
        }
        else {
            sugPas[i] = rand() % 10 + 48; 
        }
    }
    sugPas[len] = '\0';

}

int SignUp(struct User *user) {
 char fullname[64];
 char email[64];
 char username[33];
 char password[61];
 char sugPassword[16];

 printf("Enter your fullname: ");
 scanf(" %[^\n]", fullname);
 strcpy(user->fullname, fullname);
 
 printf("Enter your email: ");
 scanf("%s", email);
 strcpy(user->email, email);

 printf("Enter your username: ");
 scanf("%s", username);
 strcpy(user->username, username);

 printf("Parol 6ta belgidan kop kotta kichik harflar va sonlardan tashkil topgan bolsin: ");
 while(true){

    int istak;
    puts("parolning minimal uzunligi 6 bolishi kerak");
    suggestionPassword(sugPassword);
    printf("sizga quydagi parolni tafsiya eta olaman <<%s>>\n", sugPassword);
    puts("Siz ushbu paroldan foydalanishni hohlaysizmi 1 => ha  2 => yoq:");
    scanf("%d", &istak);
    if (istak == 1){
        strcpy(user->password, sugPassword);
        puts("parol muaffaqiyatli o'rnatildi !!!");
        break;
     } else{
         printf("Enter your password: ");

        scanf("%s", password);
        int len = strlen(password), kottaHarf = 0, kichikHarf = 0, sonlar = 0;

        if (len >= 6){ 
            for (int i = 0; i < len; i++){
               if( password[i] >= 48 &&  password[i] <= 57){
                sonlar++;
                }
                if( password[i] >= 65 &&  password[i] <= 90){
                    kottaHarf++;
                }
                if( password[i] >= 97 &&  password[i] <= 122){
                    kichikHarf++;
                }
            }
            if (kottaHarf > 0 && kichikHarf > 0 && sonlar > 0){
                strcpy(user->password, password);
                puts ("tabriklaymiz siz eng qiyin kodni ornatdingiz " );
                break;
            }else if(kottaHarf > 0 && kichikHarf > 0  || kichikHarf > 0 && sonlar > 0 || kottaHarf > 0 && sonlar > 0){
            
                int istak;

                puts("ortacha qiyinchlikdagi parol ornatilebdi barbir ornatilsinmi ozgartirasizmi 1 => ozgartirish  2=> ornatish");
                scanf("%d", &istak);

                if (istak == 2){
                strcpy(user->password, password);
                puts("parol muaffaqiyatli o'rnatildi !!!");
                break;
                } else {
                puts(" kodingizda kotta kichkina harflar va sonlardan tashkil topganiga etiborliroq boling!!!");
                }
            }else{
                int istak;
    
                puts("onson parol ornatilebdi barbir ornatilsinmi ozgartirasizmi 1 => ozgartirish  2=> ornatish");
                scanf("%d", &istak);
                if (istak == 2){
                strcpy(user->password, password);
                puts("parol muaffaqiyatli o'rnatildi !!!");
                break;
                } else {
                puts(" kodingizda kotta kichkina harflar va sonlardan tashkil topganiga etiborliroq boling!!!");
                }
            }

        }else{
            puts("\nsiz kiritgan parolni belgilar soni 6 dan kichik iltmos parolni qaytadan kiriting yoki tafsiya etilgan parolni qabul qiling\n");
        }
    }
     
}



 ClearSceen();
 otpCode = otp();
 printf("you otp code from instagram: %d\ndon't share this code with anyone!\n", otpCode);

 int enteredOtp;
 printf("We sent you otp code: Enter Here:");
 scanf("%d", &enteredOtp);
 
 ClearSceen();
 if (otpCode != enteredOtp) {
  printf("audentification is failed! otp is error!\n");
  return 1;
 }

 return 0;
}

void CreateUser(struct User user) {
 user.id = lengthUsers + 1;
 Users[lengthUsers] = user;
 lengthUsers++;

 struct Token tokenData;

 tokenData.id = user.id;
 strcpy(tokenData.username, user.username);

 token = &tokenData;
}

void GetUsers() {
 if (lengthUsers == 0) {
  printf("Users db is empty\n");
  return;
 }

 for (int i = 0; i<lengthUsers; i++) {
  printf("{\n");
  printf("  id: %d\n", Users[i].id);
  printf("  fullname: %s\n", Users[i].fullname);
  printf("  email: %s\n", Users[i].email);
  printf("  username: %s\n", Users[i].username);
  printf("  password: ********\n");
  printf("}\n");
 }
}

void api() {

 while (true) {
  int endpoint;
  struct User user;
  struct User *ptrUser;

  ptrUser = &user;

  printf("1: [POST] foo.go/api/v1/signup\n");
  printf("2: [GET]  foo.go/api/v1/users\n");
  printf("3: [GET]  foo.go/api/v1/sign-out\n");

  scanf("%d", &endpoint);

  switch (endpoint) {
   case 1: { 
    if (token == NULL) {
     if (SignUp(ptrUser) == 0) {
      CreateUser(user);
     }
    } else {
     printf("you are already registired\n");
    }

   } break;
  case 2: 
   if (token != NULL) {
    GetUsers();
   } else {
    ClearSceen();
    printf("unauthrized user! please sign-in or sign-up\n");
   }
   break;
  case 3: 
   if (token != NULL) {
    token = NULL;
    printf("logged out\n");
   } else {
    ClearSceen();
    printf("unauthrized user! please sign-in or sign-up\n");
   }
  }
 }
}

int main() {

 srand(time(NULL));

 api();
}

// VAZIFA 2
/*
 2. 
  1. random hard password recomender []-0(TGHJKLJHGvr45^&8uy)
  2. set password difficulty status
*/

//noi cac em di import nhung thu vien, khai bao cac struct

typedef struct{
    char id[15];
    char name[50];
    char email[50];
    char phone[15];
    char status[10];
}User;

User users[100];
int userCount = 0;

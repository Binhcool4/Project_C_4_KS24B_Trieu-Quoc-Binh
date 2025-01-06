#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//di khai bao nhung nguyen mau ham
void mainMenu();
void loginAdmin();
void adminMenu();
void addUser();
void displayAllUsers();
void searchUser();
void searchUserById();
int isUnique(char id[], char email[], char phone[]);
int isUserInfoValid(char id[], char name[], char phone[]);
int isUserInfoNotEmpty(char id[], char name[], char email[], char phone[]);
void toggleUserStatus();
void sortUsersByName();
void loginUser();
void showUserGuideline(int language);
void aboutUs(int language);

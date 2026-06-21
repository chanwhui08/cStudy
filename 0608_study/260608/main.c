#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BOOK_COUNT 30
#define MAX_LEN 50

char myToUpper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    }
    return ch;
}

char myToLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

void removeEnter(char str[]) {
    str[strcspn(str, "\n")] = '\0';
}

void normalize(char src[], char dest[]) {
    int j = 0;

    for (int i = 0; src[i] != '\0'; i++) {
        if (src[i] != ' ') {
            dest[j] = myToLower(src[i]);
            j++;
        }
    }

    dest[j] = '\0';
}

void searchByAlphabet(char books[][MAX_LEN]) {
    char input[10];
    char alphabet;
    int count = 0;

    printf("알파벳 입력: ");
    fgets(input, sizeof(input), stdin);

    alphabet = myToUpper(input[0]);

    printf("[%c 구역]\n", alphabet);

    for (int i = 0; i < BOOK_COUNT; i++) {
        if (myToUpper(books[i][0]) == alphabet) {
            printf("%s\n", books[i]);
            count++;
        }
    }

    printf("총 검색 횟수: %d\n", count);
}

void searchByTitle(char books[][MAX_LEN]) {
    char input[MAX_LEN];
    char normalizedInput[MAX_LEN];
    char normalizedBook[MAX_LEN];
    int found = 0;

    printf("책 제목 입력: ");
    fgets(input, sizeof(input), stdin);
    removeEnter(input);

    normalize(input, normalizedInput);

    for (int i = 0; i < BOOK_COUNT; i++) {
        normalize(books[i], normalizedBook);

        if (strcmp(normalizedInput, normalizedBook) == 0) {
            printf("FIND: %s\n", books[i]);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("NOT FOUND\n");
    }
}

int main(void) {
    char books[BOOK_COUNT][MAX_LEN] = {
        "Harry Potter",
        "The Lord Of The Rings",
        "C Programming",
        "Data Structure",
        "MANGO",
        "MY LIFE",
        "APPLE",
        "ANIMAL FARM",
        "BINARY SEARCH",
        "CODE COMPLETE",
        "DATABASE SYSTEM",
        "ELECTRONICS BASIC",
        "FOREST STORY",
        "GAME ENGINE",
        "HELLO C",
        "INTRODUCTION TO ALGORITHM",
        "JAVA BASIC",
        "KEYBOARD MASTER",
        "LINUX COMMAND",
        "MATRIX",
        "NETWORK SECURITY",
        "OPERATING SYSTEM",
        "PYTHON WORLD",
        "QUEUE THEORY",
        "ROBOT ADVENTURE",
        "STACK OVERFLOW",
        "TREE STRUCTURE",
        "UNIX POWER",
        "VECTOR SPACE",
        "WEB SERVER"
    };

    int menu;
    char buffer[10];

    while (1) {
        printf("\n===== 도서관 검색 시스템 =====\n");
        printf("1. 알파벳으로 찾기\n");
        printf("2. 책 제목 검색\n");
        printf("3. 종료\n");
        printf("메뉴 선택: ");

        fgets(buffer, sizeof(buffer), stdin);
        menu = atoi(buffer);

        if (menu == 1) {
            searchByAlphabet(books);
        }
        else if (menu == 2) {
            searchByTitle(books);
        }
        else if (menu == 3) {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else {
            printf("잘못된 메뉴입니다.\n");
        }
    }

    return 0;
}
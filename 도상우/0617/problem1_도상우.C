#include <stdio.h>
#include <string.h>

#define PRODUCT_COUNT 5

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    int id;
    char name[50];
    char category[30];
    int price;
    int stock;
    Date registeredDate;
} Product;

void printProduct(Product product) {
    printf("상품 번호: %d\n", product.id);
    printf("상품명: %s\n", product.name);
    printf("분류: %s\n", product.category);
    printf("가격: %d원\n", product.price);
    printf("재고: %d개\n", product.stock);
    printf("등록일: %04d-%02d-%02d\n",
           product.registeredDate.year,
           product.registeredDate.month,
           product.registeredDate.day);
    printf("----------------------\n");
}

void printAllProducts(Product products[], int size) {
    for (int i = 0; i < size; i++) {
        printProduct(products[i]);
    }
}

void searchByName(Product products[], int size, const char keyword[]) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strstr(products[i].name, keyword) != NULL) {
            printProduct(products[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("검색 결과가 없습니다.\n");
    }
}

void printInStockProducts(Product products[], int size) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (products[i].stock > 0) {
            printProduct(products[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("재고가 있는 상품이 없습니다.\n");
    }
}

void sortByPriceDesc(Product products[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (products[j].price < products[j + 1].price) {
                Product temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }
}

int buyProduct(Product products[], int size, int id, int quantity) {
    for (int i = 0; i < size; i++) {
        if (products[i].id == id) {
            if (products[i].stock < quantity) {
                return 0;
            }

            products[i].stock -= quantity;
            return 1;
        }
    }

    return -1;
}

int main() {
    Product products[PRODUCT_COUNT] = {
        {101, "Laptop", "Electronics", 1200000, 3, {2025, 3, 10}},
        {102, "Keyboard", "Electronics", 80000, 10, {2025, 4, 2}},
        {103, "Notebook", "Stationery", 3000, 50, {2025, 1, 15}},
        {104, "Chair", "Furniture", 70000, 0, {2024, 12, 20}},
        {105, "Monitor", "Electronics", 300000, 5, {2025, 2, 8}}
    };

    char keyword[50];
    int id;
    int quantity;
    int result;

    printf("===== 전체 상품 목록 =====\n");
    printAllProducts(products, PRODUCT_COUNT);

    printf("\n검색할 상품명 키워드 입력: ");
    scanf("%s", keyword);

    printf("\n===== 검색 결과 =====\n");
    searchByName(products, PRODUCT_COUNT, keyword);

    printf("\n===== 재고 있는 상품 목록 =====\n");
    printInStockProducts(products, PRODUCT_COUNT);

    sortByPriceDesc(products, PRODUCT_COUNT);

    printf("\n===== 가격 내림차순 정렬 결과 =====\n");
    printAllProducts(products, PRODUCT_COUNT);

    printf("\n구매할 상품 번호 입력: ");
    scanf("%d", &id);

    printf("구매 수량 입력: ");
    scanf("%d", &quantity);

    result = buyProduct(products, PRODUCT_COUNT, id, quantity);

    if (result == 1) {
        printf("구매가 완료되었습니다.\n");
    } else if (result == 0) {
        printf("재고가 부족합니다.\n");
    } else {
        printf("해당 상품 번호가 없습니다.\n");
    }

    printf("\n===== 최종 상품 목록 =====\n");
    printAllProducts(products, PRODUCT_COUNT);

    return 0;
}
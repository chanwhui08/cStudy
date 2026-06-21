#include <iostream>
#include <string>
using namespace std;

const int PRODUCT_COUNT = 5;

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date() : year(0), month(0), day(0) {}

    Date(int year, int month, int day)
        : year(year), month(month), day(day) {}

    void print() const {
        cout << year << "-";

        if (month < 10) {
            cout << "0";
        }
        cout << month << "-";

        if (day < 10) {
            cout << "0";
        }
        cout << day;
    }
};

class Product {
private:
    int id;
    string name;
    string category;
    int price;
    int stock;
    Date registeredDate;

public:
    Product()
        : id(0), name(""), category(""), price(0), stock(0), registeredDate() {}

    Product(int id, string name, string category, int price, int stock, Date date)
        : id(id), name(name), category(category), price(price), stock(stock), registeredDate(date) {}

    int getId() const {
        return id;
    }

    int getPrice() const {
        return price;
    }

    int getStock() const {
        return stock;
    }

    bool containsName(const string& keyword) const {
        return name.find(keyword) != string::npos;
    }

    bool hasStock() const {
        return stock > 0;
    }

    bool buy(int quantity) {
        if (stock < quantity) {
            return false;
        }

        stock -= quantity;
        return true;
    }

    void printInfo() const {
        cout << "상품 번호: " << id << endl;
        cout << "상품명: " << name << endl;
        cout << "분류: " << category << endl;
        cout << "가격: " << price << "원" << endl;
        cout << "재고: " << stock << "개" << endl;
        cout << "등록일: ";
        registeredDate.print();
        cout << endl;
        cout << "----------------------" << endl;
    }
};

class Store {
private:
    Product products[PRODUCT_COUNT];
    int size;

public:
    Store() : size(PRODUCT_COUNT) {
        products[0] = Product(101, "Laptop", "Electronics", 1200000, 3, Date(2025, 3, 10));
        products[1] = Product(102, "Keyboard", "Electronics", 80000, 10, Date(2025, 4, 2));
        products[2] = Product(103, "Notebook", "Stationery", 3000, 50, Date(2025, 1, 15));
        products[3] = Product(104, "Chair", "Furniture", 70000, 0, Date(2024, 12, 20));
        products[4] = Product(105, "Monitor", "Electronics", 300000, 5, Date(2025, 2, 8));
    }

    void printAllProducts() const {
        for (int i = 0; i < size; i++) {
            products[i].printInfo();
        }
    }

    void searchByName(const string& keyword) const {
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (products[i].containsName(keyword)) {
                products[i].printInfo();
                found = true;
            }
        }

        if (!found) {
            cout << "검색 결과가 없습니다." << endl;
        }
    }

    void printInStockProducts() const {
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (products[i].hasStock()) {
                products[i].printInfo();
                found = true;
            }
        }

        if (!found) {
            cout << "재고가 있는 상품이 없습니다." << endl;
        }
    }

    void sortByPriceDesc() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if (products[j].getPrice() < products[j + 1].getPrice()) {
                    Product temp = products[j];
                    products[j] = products[j + 1];
                    products[j + 1] = temp;
                }
            }
        }
    }

    int buyProduct(int id, int quantity) {
        for (int i = 0; i < size; i++) {
            if (products[i].getId() == id) {
                if (products[i].buy(quantity)) {
                    return 1;
                }

                return 0;
            }
        }

        return -1;
    }
};

int main() {
    Store store;

    string keyword;
    int id;
    int quantity;
    int result;

    cout << "===== 전체 상품 목록 =====" << endl;
    store.printAllProducts();

    cout << "\n검색할 상품명 키워드 입력: ";
    cin >> keyword;

    cout << "\n===== 검색 결과 =====" << endl;
    store.searchByName(keyword);

    cout << "\n===== 재고 있는 상품 목록 =====" << endl;
    store.printInStockProducts();

    store.sortByPriceDesc();

    cout << "\n===== 가격 내림차순 정렬 결과 =====" << endl;
    store.printAllProducts();

    cout << "\n구매할 상품 번호 입력: ";
    cin >> id;

    cout << "구매 수량 입력: ";
    cin >> quantity;

    result = store.buyProduct(id, quantity);

    if (result == 1) {
        cout << "구매가 완료되었습니다." << endl;
    } else if (result == 0) {
        cout << "재고가 부족합니다." << endl;
    } else {
        cout << "해당 상품 번호가 없습니다." << endl;
    }

    cout << "\n===== 최종 상품 목록 =====" << endl;
    store.printAllProducts();

    return 0;
}
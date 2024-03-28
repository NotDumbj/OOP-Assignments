#include<iostream>
using namespace std;

struct item {
//    item() {}
//    item(int i, string n) : price(i), name(n) {}
    int price;
    string name;
};

int main()
{
    item nigga[5];
//    item item1(8, "nigga");
    nigga[3].name = "Niga";
    nigga[0].name = "Apple";
    nigga[0].price = 5;
    nigga[1].name = "Orange";
    nigga[1].price = 10;
    nigga[2].name = "Banana";
    nigga[2].price = 15;
    nigga[3].price = 20;
    nigga[4].price = 25;
    for (int i = 0; i < 5; i++) {
        cout << "Item #" << i + 1 << endl;
        cout << nigga[i].name << " " << nigga[i].price << endl;
    }
    int totalcurrency;
    int i;
    cin >> i;
    totalcurrency = totalcurrency - nigga[i-1].price;

    cout << nigga[0].name;



    return 0;
}
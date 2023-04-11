// Price_Wallpaper.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"House.h"
using namespace std;
void showWallpaper();
Room* whichRooms(int size, Wallpaper* paper);
int main()
{
    setlocale(LC_ALL, "ru");
    Wallpaper* wallpaper;
    wallpaper = new Wallpaper[3];
    wallpaper[0] = { 0.53, 10, 500, "flower" };
    wallpaper[1] = { 1.6, 10, 1000, "line" };
    wallpaper[2] = { 1.6, 10, 1000, "noPattern" };

    
    int howRooms;
    cout << "Введите количество комнат: ";
    cin >> howRooms;
    Room* rooms;
    rooms = whichRooms( howRooms, wallpaper);
   
    House house(howRooms,rooms);

    cout << "Стоимость обоев для квартиры: " << house.getPrice() << " ру.";
   
}

void showWallpaper() {
    cout << "[1] Бумажные обои с цветочками" << endl;
    cout << "[2] Флизелиновык обои с полосочками" << endl;
    cout << "[3] Флизелиновык обои без рисунка" << endl;
}
Room* whichRooms( int size, Wallpaper * paper) {
    Room* rooms = new Room[size];
    float wheigth = 0;
    float heigth = 0;
    float h = 0;
    int c;
    bool p;

    for (int i = 0; i < size; i++) {

        cout << "Комната № "<<i+1<< endl;
        cout << "Введите ширину: ";
        cin >> wheigth;
        cout << "Введите длинну: ";
        cin >> heigth;
        cout << "Введите высоту: ";
        cin >> h;
        cout << "Клеим потолок 1 не клеим 0 : ";
        cin >> p;
        system("cls");
        cout << "Выберите обои: "<<endl;
        showWallpaper();
        cin >> c;
        if (c == 1) { rooms[i] = { wheigth,h,heigth,"room",paper[i],p}; }
        if (c == 2) { rooms[i] = { wheigth,h,heigth,"room",paper[i],p }; }
        if (c == 3) { rooms[i] = { wheigth,h,heigth,"room",paper[i],p }; }
        system("cls");
    }

    return rooms;
}
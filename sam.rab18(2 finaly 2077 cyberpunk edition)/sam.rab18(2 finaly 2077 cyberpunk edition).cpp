#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;
int menu_choise;
int colorCross=91;
int colorNull=92;
int ternPick = 1;

int sizeBoard=1;
int gameTitle=1;
const string PLAYER1 = "X";
string startPlayer = PLAYER1;
const string PLAYER2 = "O";
const string BOT = PLAYER2;
const string LOSE = "0";
const string DRAW = "-1";



string board3[9] = { "1", "2","3","4","5","6","7","8","9" };
string board4[16] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16" };
string board5[25] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25" };

void DrawBoard3()
{
    system("cls");
    cout << " " << board3[0] << " | " << board3[1] << " | " << board3[2] << " \n"
        << "-----------\n"
        << " " << board3[3] << " | " << board3[4] << " | " << board3[5] << " \n"
        << "-----------\n"
        << " " << board3[6] << " | " << board3[7] << " | " << board3[8] << " \n";
}
void DrawBoard4()
{
    system("cls");
    cout
        << "  " << board4[0] << " | " << board4[1] << "  | " << board4[2] << "  |  " << board4[3] << " \n"
        << "-------------------\n"
        << "  " << board4[4] << " | " << board4[5] << "  | " << board4[6] << "  |  " << board4[7] << " \n"
        << "-------------------\n"
        << "  " << board4[8] << " | " << board4[9] << " | " << board4[10] << " | " << board4[11] << " \n"
        << "-------------------\n"
        << " " << board4[12] << " | " << board4[13] << " | " << board4[14] << " | " << board4[15] << " \n";
}
void DrawBoard5()
{
    system("cls");
    cout
        << " " << board5[0] << "  |  " << board5[1] << " |  " << board5[2] << " |  " << board5[3] << " |  " << board5[4] << " \n"
        << "------------------------\n"
        << " " << board5[5] << "  | " << board5[6] << "  |  " << board5[7] << " |  " << board5[8] << " |  " << board5[9] << " \n"
        << "------------------------\n"
        << " " << board5[10] << " | " << board5[11] << " | " << board5[12] << " | " << board5[13] << " | " << board5[14] << " \n"
        << "------------------------\n"
        << " " << board5[15] << " | " << board5[16] << " | " << board5[17] << " | " << board5[18] << " | " << board5[19] << " \n"
        << "------------------------\n"
        << " " << board5[20] << " | " << board5[21] << " | " << board5[22] << " | " << board5[23] << " | " << board5[24] << " \n";
}

string CheckWinner3()
{

    if (board3[0] == board3[1] && board3[1] == board3[2]) return startPlayer;
    else if (board3[3] == board3[4] && board3[4] == board3[5]) return startPlayer;
    else if (board3[6] == board3[7] && board3[7] == board3[8]) return startPlayer;

    else if (board3[0] == board3[3] && board3[3] == board3[6]) return startPlayer;
    else if (board3[1] == board3[4] && board3[4] == board3[7]) return startPlayer;
    else if (board3[2] == board3[5] && board3[5] == board3[8]) return startPlayer;

    else if (board3[0] == board3[4] && board3[4] == board3[8]) return startPlayer;
    else if (board3[2] == board3[4] && board3[4] == board3[6]) return startPlayer;
    //else if (board3[0] != board3[1] && board3[1] != board3[2] && board3[2] != board3[3] && board3[3] != board3[4] && board3[4] != board3[5] && board3[5] != board3[6] && board3[6] != board3[7] && board3[7] != board3[8]) return LOSE;
    else if (board3[0] != "1" && board3[1] != "2" && board3[2] != "3" && board3[3] != "4" && board3[4] != "5" && board3[5] != "6" && board3[6] != "7" && board3[7] != "8" && board3[8] != "9") return DRAW;
    else return LOSE;
}
string CheckWinner4()
{

    if (board4[0] == board4[1] && board4[1] == board4[2]) return startPlayer;
    else if (board4[1] == board4[2] && board4[2] == board4[3]) return startPlayer;
    else if (board4[4] == board4[5] && board4[5] == board4[6]) return startPlayer;
    else if (board4[5] == board4[6] && board4[6] == board4[7]) return startPlayer;
    else if (board4[8] == board4[9] && board4[9] == board4[10]) return startPlayer;
    else if (board4[9] == board4[10] && board4[10] == board4[11]) return startPlayer;
    else if (board4[12] == board4[13] && board4[13] == board4[14]) return startPlayer;
    else if (board4[13] == board4[14] && board4[14] == board4[15]) return startPlayer;

    else if (board4[0] == board4[4] && board4[4] == board4[8]) return startPlayer;
    else if (board4[4] == board4[8] && board4[8] == board4[12]) return startPlayer;
    else if (board4[1] == board4[5] && board4[5] == board4[9]) return startPlayer;
    else if (board4[5] == board4[9] && board4[9] == board4[13]) return startPlayer;
    else if (board4[2] == board4[6] && board4[6] == board4[10]) return startPlayer;
    else if (board4[6] == board4[10] && board4[10] == board4[14]) return startPlayer;
    else if (board4[3] == board4[7] && board4[7] == board4[11]) return startPlayer;
    else if (board4[7] == board4[11] && board4[11] == board4[15]) return startPlayer;

    else if (board4[0] == board4[5] && board4[5] == board4[10]) return startPlayer;
    else if (board4[5] == board4[10] && board4[10] == board4[15]) return startPlayer;
    else if (board4[3] == board4[6] && board4[6] == board4[9]) return startPlayer;
    else if (board4[6] == board4[9] && board4[9] == board4[12]) return startPlayer;
    else if (board4[1] == board4[6] && board4[6] == board4[11]) return startPlayer;
    else if (board4[4] == board4[9] && board4[9] == board4[14]) return startPlayer;
    else if (board4[0] != "1" && board4[1] != "2" && board4[2] != "3" && board4[3] != "4" && board4[4] != "5" && board4[5] != "6" && board4[6] != "7" && board4[7] != "8" && board4[8] != "9" && board4[9] != "10" && board4[10] != "11" && board4[11] != "12" && board4[12] != "13" && board4[13] != "14" && board4[14] != "15" && board4[15] != "16") return DRAW;
    else return LOSE;
}
string CheckWinner5()
{

    if (board5[0] == board5[1] && board5[1] == board5[2]) return startPlayer;
    else if (board5[1] == board5[2] && board5[2] == board5[3]) return startPlayer;
    else if (board5[2] == board5[3] && board5[3] == board5[4]) return startPlayer;
    else if (board5[5] == board5[6] && board5[6] == board5[7]) return startPlayer;
    else if (board5[6] == board5[7] && board5[7] == board5[8]) return startPlayer;
    else if (board5[7] == board5[8] && board5[8] == board5[9]) return startPlayer;
    else if (board5[10] == board5[11] && board5[11] == board5[12]) return startPlayer;
    else if (board5[11] == board5[12] && board5[12] == board5[13]) return startPlayer;
    else if (board5[12] == board5[13] && board5[13] == board5[14]) return startPlayer;
    else if (board5[15] == board5[16] && board5[16] == board5[17]) return startPlayer;
    else if (board5[16] == board5[17] && board5[17] == board5[18]) return startPlayer;
    else if (board5[17] == board5[18] && board5[18] == board5[19]) return startPlayer;
    else if (board5[20] == board5[21] && board5[21] == board5[22]) return startPlayer;
    else if (board5[21] == board5[22] && board5[22] == board5[23]) return startPlayer;
    else if (board5[22] == board5[23] && board5[23] == board5[24]) return startPlayer;


    else if (board5[0] == board5[5] && board5[5] == board5[10]) return startPlayer;
    else if (board5[5] == board5[10] && board5[10] == board5[15]) return startPlayer;
    else if (board5[10] == board5[15] && board5[15] == board5[20]) return startPlayer;
    else if (board5[1] == board5[6] && board5[6] == board5[11]) return startPlayer;
    else if (board5[6] == board5[11] && board5[11] == board5[16]) return startPlayer;
    else if (board5[11] == board5[16] && board5[16] == board5[21]) return startPlayer;
    else if (board5[2] == board5[7] && board5[7] == board5[12]) return startPlayer;
    else if (board5[7] == board5[12] && board5[12] == board5[17]) return startPlayer;
    else if (board5[12] == board5[17] && board5[17] == board5[22]) return startPlayer;
    else if (board5[3] == board5[8] && board5[8] == board5[13]) return startPlayer;
    else if (board5[8] == board5[13] && board5[13] == board5[18]) return startPlayer;
    else if (board5[13] == board5[18] && board5[18] == board5[23]) return startPlayer;
    else if (board5[4] == board5[9] && board5[9] == board5[14]) return startPlayer;
    else if (board5[9] == board5[14] && board5[14] == board5[19]) return startPlayer;
    else if (board5[14] == board5[19] && board5[19] == board5[24]) return startPlayer;

    else if (board5[0] == board5[6] && board5[6] == board5[12]) return startPlayer;
    else if (board5[1] == board5[7] && board5[7] == board5[13]) return startPlayer;
    else if (board5[2] == board5[8] && board5[8] == board5[14]) return startPlayer;
    else if (board5[5] == board5[11] && board5[1] == board5[17]) return startPlayer;
    else if (board5[6] == board5[12] && board5[12] == board5[18]) return startPlayer;
    else if (board5[7] == board5[13] && board5[13] == board5[19]) return startPlayer;
    else if (board5[10] == board5[16] && board5[16] == board5[22]) return startPlayer;
    else if (board5[11] == board5[17] && board5[17] == board5[23]) return startPlayer;
    else if (board5[12] == board5[18] && board5[18] == board5[24]) return startPlayer;
    else if (board5[2] == board5[6] && board5[6] == board5[10]) return startPlayer;
    else if (board5[3] == board5[7] && board5[7] == board5[11]) return startPlayer;
    else if (board5[4] == board5[8] && board5[8] == board5[12]) return startPlayer;
    else if (board5[7] == board5[11] && board5[11] == board5[15]) return startPlayer;
    else if (board5[8] == board5[12] && board5[12] == board5[16]) return startPlayer;
    else if (board5[9] == board5[13] && board5[13] == board5[17]) return startPlayer;
    else if (board5[10] == board5[16] && board5[16] == board5[22]) return startPlayer;
    else if (board5[11] == board5[17] && board5[17] == board5[23]) return startPlayer;
    else if (board5[12] == board5[18] && board5[18] == board5[24]) return startPlayer;
    else if (board5[12] == board5[16] && board5[16] == board5[20]) return startPlayer;
    else if (board5[13] == board5[17] && board5[17] == board5[21]) return startPlayer;
    else if (board5[14] == board5[18] && board5[18] == board5[22]) return startPlayer;
    else if (board5[0] != "1" && board5[1] != "2" && board5[2] != "3" && board5[3] != "4" && board5[4] != "5" && board5[5] != "6" && board5[6] != "7" && board5[7] != "8" && board5[8] != "9" && board5[9] != "10" && board5[10] != "11" && board5[11] != "12" && board5[12] != "13" && board5[13] != "14" && board5[14] != "15" && board5[15] != "16" && board5[16] != "17" && board5[17] != "18" && board5[18] != "19" && board5[19] != "20" && board5[20] != "21" && board5[21] != "22" && board5[22] != "23" && board5[23] != "24" && board5[24] != "25") return DRAW;
    else return LOSE;
}

void choosePoint3()
{

    int point;
    while (true)
    {
        cout << "Игрок " << startPlayer << " выбери позицию\n";
        cin >> point;
        point--;
        if (point < 0 || point > 8 || board3[point] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m" || board3[point] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m")
        {
            system("cls");
            DrawBoard3();
            cout << "неправильно\n";
            continue;
        }
        break;
    }
    if (startPlayer != PLAYER1)
    {
        board3[point] = "\x1b[" + to_string(colorNull) + "mO\x1b[0m";
    }
    else
    {
        board3[point] = "\x1b[" + to_string(colorCross) + "mX\x1b[0m";
    }


}

void playBot3()
{
    int randS;
    int point;
    while (true)
    {
        if (startPlayer == PLAYER1)
        {
            cout << "Игрок " << startPlayer << " выбери позицию\n";
            cin >> point;
            point--;
            if (point < 0 || point > 8 || board3[point] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m" || board3[point] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m")
            {
                system("cls");
                DrawBoard3();
                cout << "неправильно\n";
                continue;
            }
            break;
        }
        else if (startPlayer == BOT)
        {
            randS = rand() % 9;
            randS--;
            //for (int i = 0; i < 9; i++)
            //{
            if (randS < 0 || randS > 8 || board3[randS] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m" || board3[randS] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m")
            {
                system("cls");
                DrawBoard3();
                continue;
            }
            else
                board3[randS] = "\x1b[" + to_string(colorNull) + "mO\x1b[0m";
            break;
            //}
        }
    }
    if (startPlayer == PLAYER1)
    {
        board3[point] = "\x1b[" + to_string(colorCross) + "mX\x1b[0m";
    }

}

void choosePoint4()
{
    int point;
    while (true)
    {
        cout << "Игрок " << startPlayer << " выбери позицию\n";
        cin >> point;
        point--;
        if (point < 0 || point > 16 || board4[point] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m" || board4[point] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m")
        {
            system("cls");
            DrawBoard4();
            cout << "неправильно\n";
            continue;
        }
        break;
    }
    if (startPlayer != PLAYER1)
    {
        board4[point] = "\x1b[" + to_string(colorNull) + "mO\x1b[0m";
    }
    else
    {
        board4[point] = "\x1b[" + to_string(colorCross) + "mX\x1b[0m";
    }


}

void playBot4()
{
    int randS;
    int point;
    while (true)
    {
        if (startPlayer == PLAYER1)
        {
            cout << "Игрок " << startPlayer << " выбери позицию\n";
            cin >> point;
            point--;
            if (point < 0 || point > 15 || board4[point] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m" || board4[point] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m")
            {
                system("cls");
                DrawBoard4();
                cout << "неправильно\n";
                continue;
            }
            break;
        }
        else if (startPlayer == BOT)
        {
            randS = rand() % 16;
            randS--;
            //for (int i = 0; i < 9; i++)
            //{
            if (randS < 0 || randS > 15 || board4[randS] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m" || board4[randS] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m")
            {
                system("cls");
                DrawBoard4();
                continue;
            }
            else
                board4[randS] = "\x1b[" + to_string(colorNull) + "mO\x1b[0m";
            break;
            //}
        }
    }
    if (startPlayer == PLAYER1)
    {
        board4[point] = "\x1b[" + to_string(colorCross) + "mX\x1b[0m";
    }

}

void choosePoint5()
{
    int point;
    while (true)
    {
        cout << "Игрок " << startPlayer << " выбери позицию\n";
        cin >> point;
        point--;
        if (point < 0 || point > 24 || board5[point] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m" || board5[point] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m")
        {
            system("cls");
            DrawBoard5();
            cout << "неправильно\n";
            continue;
        }
        break;
    }
    if (startPlayer != PLAYER1)
    {
        board5[point] = "\x1b[" + to_string(colorNull) + "mO\x1b[0m";
    }
    else
    {
        board5[point] = "\x1b[" + to_string(colorCross) + "mX\x1b[0m";
    }


}

void playBot5()
{
    int randS;
    int point;
    while (true)
    {
        if (startPlayer == PLAYER1)
        {
            cout << "Игрок " << startPlayer << " выбери позицию\n";
            cin >> point;
            point--;
            if (point < 0 || point > 24 || board5[point] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m" || board5[point] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m")
            {
                system("cls");
                DrawBoard4();
                cout << "неправильно\n";
                continue;
            }
            break;
        }
        else if (startPlayer == BOT)
        {
            randS = rand() % 25;
            randS--;
            //for (int i = 0; i < 9; i++)
            //{
            if (randS < 0 || randS > 24 || board5[randS] == "\x1b[" + to_string(colorCross) + "mX\x1b[0m" || board5[randS] == "\x1b[" + to_string(colorNull) + "mO\x1b[0m")
            {
                system("cls");
                DrawBoard4();
                continue;
            }
            else
                board5[randS] = "\x1b[" + to_string(colorNull) + "mO\x1b[0m";
            break;
            //}
        }
    }
    if (startPlayer == PLAYER1)
    {
        board5[point] = "\x1b[" + to_string(colorCross) + "mX\x1b[0m";
    }

}


void showMenuOptions()
{
    setlocale(0, "");
    system("cls");
    cout << "[!] Настройки\n\n[1] Цвет кристика и нолика\n[2] Кто первый ходит\n[3] Размер поля\n[4] Вернуться в главное меню\n\n [#] Выберите пункт из меню: ";

}



void showRules()
{
    system("cls");
    cout << "Игроки по очереди ставят на свободные клетки поля 3х3, 4x4, 5x5 знаки (один всегда крестики, другой всегда нолики). \nПервый, выстроивший в ряд 3 своих фигур по вертикали, горизонтали или диагонали, выигрывает." << endl;;

}

string switchTern(int ternPick)
{
    switch (ternPick) {
    case 1: return "X";
    case 2: return "O";
    default: cout << "Введено неверное значение - игру начнет крестик"; cin.clear(); cin.ignore(); return "X";
    }
}

void showGame3()
{
    string result = LOSE;
    while (result == LOSE)
    {
        system("cls");
        DrawBoard3();
        choosePoint3();
        result = CheckWinner3();
        if (startPlayer != PLAYER2)
        {
            startPlayer = PLAYER2;
        }
        else startPlayer = PLAYER1;
    }
    DrawBoard3();

    if (result == DRAW)
    {
        cout << "\nНичья\n";
        system("pause");
        exit(0);
    }
    else {
        if (startPlayer != PLAYER2)
        {
            startPlayer = PLAYER2;
        }
        else startPlayer = PLAYER1;
        cout << "Игрок, который играет за: " << startPlayer << " - победил\n";
        system("pause");
        exit(0);
    }

}

void showGameBot3()
{
    string result = LOSE;
    while (result == LOSE)
    {
        system("cls");
        DrawBoard3();
        playBot3();
        result = CheckWinner3();
        if (startPlayer != BOT)
        {
            startPlayer = BOT;
        }
        else startPlayer = PLAYER1;
    }
    DrawBoard3();

    if (result == DRAW)
    {
        cout << "\nНичья\n";
        system("pause");
        exit(0);
    }
    else {
        if (startPlayer != BOT)
        {
            startPlayer = BOT;
        }
        else startPlayer = PLAYER1;
        cout << "Игрок, который играет за: " << startPlayer << " - победил\n";
        system("pause");
        exit(0);
    }

}


void showGame4()
{
    string result = LOSE;
    while (result == LOSE)
    {
        system("cls");
        DrawBoard4();
        choosePoint4();
        result = CheckWinner4();
        if (startPlayer != PLAYER2)
        {
            startPlayer = PLAYER2;
        }
        else startPlayer = PLAYER1;
    }
    DrawBoard4();

    if (result == DRAW)
    {
        cout << "\nНичья\n";
        system("pause");
        exit(0);
    }
    else {
        if (startPlayer != PLAYER2)
        {
            startPlayer = PLAYER2;
        }
        else startPlayer = PLAYER1;
        cout << "Игрок, который играет за: " << startPlayer << " - победил\n";
        system("pause");
        exit(0);
    }

}

void showGameBot4()
{
    string result = LOSE;
    while (result == LOSE)
    {
        system("cls");
        DrawBoard4();
        playBot4();
        result = CheckWinner4();
        if (startPlayer != BOT)
        {
            startPlayer = BOT;
        }
        else startPlayer = PLAYER1;
    }
    DrawBoard4();

    if (result == DRAW)
    {
        cout << "\nНичья\n";
        system("pause");
        exit(0);
    }
    else {
        if (startPlayer != BOT)
        {
            startPlayer = BOT;
        }
        else startPlayer = PLAYER1;
        cout << "Игрок, который играет за: " << startPlayer << " - победил\n";
        system("pause");
        exit(0);
    }

}


void showGame5()
{
    string result = LOSE;
    while (result == LOSE)
    {
        system("cls");
        DrawBoard5();
        choosePoint5();
        result = CheckWinner5();
        if (startPlayer != PLAYER2)
        {
            startPlayer = PLAYER2;
        }
        else startPlayer = PLAYER1;
    }
    DrawBoard5();

    if (result == DRAW)
    {
        cout << "\nНичья\n";
        system("pause");
        exit(0);
    }
    else {
        if (startPlayer != PLAYER2)
        {
            startPlayer = PLAYER2;
        }
        else startPlayer = PLAYER1;
        cout << "Игрок, который играет за: " << startPlayer << " - победил\n";
        system("pause");
        exit(0);
    }

}

void showGameBot5()
{
    string result = LOSE;
    while (result == LOSE)
    {
        system("cls");
        DrawBoard5();
        playBot5();
        result = CheckWinner5();
        if (startPlayer != BOT)
        {
            startPlayer = BOT;
        }
        else startPlayer = PLAYER1;
    }
    DrawBoard5();

    if (result == DRAW)
    {
        cout << "\nНичья\n";
        system("pause");
        exit(0);
    }
    else {
        if (startPlayer != BOT)
        {
            startPlayer = BOT;
        }
        else startPlayer = PLAYER1;
        cout << "Игрок, который играет за: " << startPlayer << " - победил\n";
        system("pause");
        exit(0);
    }

}

void BackToMenu()
{
    system("pause");
    cin.get();
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    setlocale(0, "");
    string win = LOSE;
    int pickMenu;
    int pickMenuOpt;
    while (true) {
        system("cls");
        cout << "[!] Меню\n\n[1] Начать игру\n[2] Настройки\n[3] Правила\n[4] Выйти\n\n [$] Выберите пункт из меню: ";
        cin >> pickMenu;
        if (pickMenu == 1)
        {
            while (true)
            {
                system("cls");
                cout << "[!] Выберите тип игры\n\n[1] Два игрока\n[2] Против бота\n\n[3] Вернуться в меню\n";
                cin >> gameTitle;
                if (gameTitle == 1)
                {

                    switch (sizeBoard)
                    {
                    case 1:
                    {
                        if (startPlayer == "X")
                        {
                            showGame3();
                        }
                        else if (startPlayer == "O")
                        {
                            startPlayer = PLAYER2;
                            showGame3();
                        }

                    }
                    break;
                    case 2:
                    {
                        if (startPlayer == "X")
                        {
                            showGame4();
                        }
                        else if (startPlayer == "O")
                        {
                            startPlayer = PLAYER2;
                            showGame4();
                        }
                    }
                    break;
                    case 3:
                    {
                        if (startPlayer == "X")
                        {
                            showGame5();
                        }
                        else if (startPlayer == "O")
                        {
                            startPlayer = PLAYER2;
                           showGame5();
                        }
                    }
                    break;
                    }
                    break;
                }
                else if (gameTitle == 2)
                {
                    switch (sizeBoard)
                    {
                    case 1:
                    {
                        if (startPlayer == "X")
                        {
                            showGameBot3();
                        }
                        else if (startPlayer == "O")
                        {
                            startPlayer = BOT;
                            showGameBot3();
                        }
                    }
                    break;
                    case 2:
                    {
                        if (startPlayer == "X")
                        {
                            showGameBot4();
                        }
                        else if (startPlayer == "O")
                        {
                            startPlayer = BOT;
                            showGameBot4();
                        }
                    }
                    break;
                    case 3:
                    {
                        if (startPlayer == "X")
                        {
                            showGameBot5();
                        }
                        else if (startPlayer == "O")
                        {
                            startPlayer = BOT;
                            showGameBot5();
                        }
                    }
                    break;
                    }
                    break;
                }
                else if (gameTitle == 3)
                {
                    system("cls");
                    /*BackToMenu();*/
                    break;
                }
            }

        }
        else if (pickMenu == 2)
        {
            while (true)
            {
                system("cls");
                showMenuOptions();
                cin >> pickMenuOpt;
                if (pickMenuOpt == 1)
                {
                    system("cls");
                    cout << " Цвета: 90 - \x1b[90mСерый\x1b[0m;\n 91 - \x1b[91mКрасный\x1b[0m;\n 92 - \x1b[92mЗеленый\x1b[0m;\n 93 - \x1b[93mПесочный\x1b[0m;\n 94 - \x1b[94mСиний\x1b[0m;\n 95 - \x1b[95mФиолетовый\x1b[0m;\n 96 - \x1b[96mГолубой\x1b[0m;\n 97 - \x1b[97mБелый\x1b[0m;\n 98 - \x1b[98mСветло-серый\x1b[0m; \nУкажите цвет крестика: ";
                    cin >> colorCross;
                    cout << "\nВведите цвет нолика: ";
                    cin >> colorNull;
                    cout << endl;
                    BackToMenu();

                }
                else if (pickMenuOpt == 2)
                {
                    system("cls");
                    cout << "[!] Выберите кто первый ходит\n[1] Крестик\n[2] Нолик\n";
                    cin >> ternPick;
                    startPlayer = switchTern(ternPick);
                    BackToMenu();

                }
                else if (pickMenuOpt == 3)
                {
                    system("cls");
                    cout << "[!] Выберите размер поля\n\n[1] 3x3\n[2] 4x4\n[3] 5x5\n";
                    cin >> sizeBoard;
                    BackToMenu();

                }
                else if (pickMenuOpt == 4)
                {
                    system("cls");
                    break;
                }
                else
                {
                    system("cls");
                    cout << "somthing wrong" << endl;
                    cin.clear();
                    cin.ignore();
                    BackToMenu();

                }
                break;
            }

        }
        else if (pickMenu == 3)
        {
            showRules();
            BackToMenu();

        }
        
        else if (pickMenu == 4)
        {
            cout << "bb";
            exit(0);
        }
        else
        {
            system("cls");
            cout << "somthing wrong" << endl;
            cin.clear();
            cin.ignore();
            BackToMenu();

        }
    }
}

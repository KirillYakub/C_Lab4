#include <iostream>

using namespace std;

void easy()
{
    cout << "Найти месторасположение первого символа * в строке" << endl << endl;
    cout << "Введите строку: ";

    char symbol[15];

    cin.ignore(cin.rdbuf()->in_avail());
    cin.getline(symbol, sizeof(symbol));

    cout << endl;

    for (int i = 0; i < strlen(symbol); i++)
    {
        if (symbol[i] == '*')
        {
            cout << "Первый символ '*' данной строки имеет индекс " << i + 1 << endl << endl;
            break;
        }
    }

    cout << endl;
}

void medium()
{
    cout << "Заменить все последовательности символов -+ на 0" << endl << endl;
    cout << "Введите строку: ";

    char symbol[15];

    cin.ignore(cin.rdbuf()->in_avail());
    cin.getline(symbol, sizeof(symbol));

    int size = strlen(symbol);

    cout << endl << "Строка после замены: ";

    for (int i = 0; i < size; i++)
    {
        if (symbol[i] == '-' && symbol[i + 1] == '+')
        {
            symbol[i] = '0';

            for (int j = i + 1; j < size; j++)
            {
                char temp = symbol[j];
                symbol[j] = symbol[j + 1];
                symbol[j + 1] == temp;
            }

            size--;
        }

        cout << symbol[i];
    }

    cout << endl << endl << endl;
}

void hard()
{
    cout << "Разбить строку на слова. Разделителем считать пробелы" << endl << endl;
    cout << "Введите строку: ";

    char symbol[30];
    int count1 = 0;

    cin.ignore(cin.rdbuf()->in_avail());
    cin.getline(symbol, sizeof(symbol));

    cout << endl;

    for (int i = 0; i < strlen(symbol); i++)
    {
        cout << symbol[i];

        if (symbol[i] == ' ' || i == strlen(symbol) - 1)
        {
            count1++;
            cout << " - " << count1 << " слово" << endl;
        }
    }

    cout << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int a;
    int count = 0;

    do
    {
        cout << "Введите номер задания (easy - 1), (medium - 2), (hard - 3): ";

        cin >> a;

        cout << endl;

        if (a == 1)
        {
            easy();
            count++;
        }

        if (a == 2)
        {
            medium();
            count++;
        }

        if (a == 3)
        {
            hard();
            count++;
        }

    } while (count == 0);

    int b;

    do
    {

        count = 0;

        cout << "Продолжить ввод? Да - 1, Нет - 2: ";

        cin >> b;

        cout << endl;

        if (b == 1)
        {
            count++;
            main();
        }

        if (b == 2)
        {
            cout << "Вы решили не продолжать";
            count++;
            break;
        }

    } while (count == 0);
}



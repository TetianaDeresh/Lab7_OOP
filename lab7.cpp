#include <Windows.h>
#include <iostream>
#include <deque>

using namespace std;
int main() {
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 deque<char> deqChar;
 deque<int> deqInt;
 int answer = -1;
 do
 {
  cout << "1. Добавити елемент на початок у символьну колекцію. " << endl;
  cout << "2. Добавити елемент на початок у цілочисельну колекцію. " << endl;
  cout << "3. Добавити елемент у кінець в символьну колекцію. " << endl;
  cout << "4. Добавити елемент у кінець в цілочисельну колекцію." << endl;
  cout << "5. Перевернути символьну колекцію. " << endl;
  cout << "6. Перевернути цілочисельну колекцію. " << endl;
  cout << "7. Вивести символьну колекцію. " << endl;
  cout << "8. Вивести цілочисельну колекцію. " << endl;
  cout << "0. Вихід. " << endl;
  cout << "Введіть дію: "; cin >> answer;
  switch (answer)
  {
  case 1:
  {
   char temp;
   cout << "Введіть значення елемента: "; cin >> temp;
   deqChar.push_front(temp);
  } break;
  case 2:
  {
   int temp;
   cout << "Введіть значення елемента: "; cin >> temp;
   deqInt.push_front(temp);
  } break;
  case 3:
  {
   char temp;
   cout << "Введіть значення елемента: "; cin >> temp;
   deqChar.push_back(temp);
  } break;
  case 4:
  {
   int temp;
   cout << "Введіть значення елемента: "; cin >> temp;
   deqInt.push_back(temp);
  } break;
  case 5: reverse(deqChar.begin(), deqChar.end()); break;
  case 6: reverse(deqInt.begin(), deqInt.end()); break;
  case 7: for (char ch : deqChar) cout << ch << " "; cout << endl; break;
  case 8: for (char i : deqChar) cout << i << " "; cout << endl; break;
  default:
   break;
  }
 }  while (answer);
 return 0;
}
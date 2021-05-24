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
  cout << "1. �������� ������� �� ������� � ��������� ��������. " << endl;
  cout << "2. �������� ������� �� ������� � ������������ ��������. " << endl;
  cout << "3. �������� ������� � ����� � ��������� ��������. " << endl;
  cout << "4. �������� ������� � ����� � ������������ ��������." << endl;
  cout << "5. ����������� ��������� ��������. " << endl;
  cout << "6. ����������� ������������ ��������. " << endl;
  cout << "7. ������� ��������� ��������. " << endl;
  cout << "8. ������� ������������ ��������. " << endl;
  cout << "0. �����. " << endl;
  cout << "������ ��: "; cin >> answer;
  switch (answer)
  {
  case 1:
  {
   char temp;
   cout << "������ �������� ��������: "; cin >> temp;
   deqChar.push_front(temp);
  } break;
  case 2:
  {
   int temp;
   cout << "������ �������� ��������: "; cin >> temp;
   deqInt.push_front(temp);
  } break;
  case 3:
  {
   char temp;
   cout << "������ �������� ��������: "; cin >> temp;
   deqChar.push_back(temp);
  } break;
  case 4:
  {
   int temp;
   cout << "������ �������� ��������: "; cin >> temp;
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
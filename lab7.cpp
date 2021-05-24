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
  cout << "1. Äîáàâèòè åëåìåíò íà ïî÷àòîê ó ñèìâîëüíó êîëåêö³þ. " << endl;
  cout << "2. Äîáàâèòè åëåìåíò íà ïî÷àòîê ó ö³ëî÷èñåëüíó êîëåêö³þ. " << endl;
  cout << "3. Äîáàâèòè åëåìåíò ó ê³íåöü â ñèìâîëüíó êîëåêö³þ. " << endl;
  cout << "4. Äîáàâèòè åëåìåíò ó ê³íåöü â ö³ëî÷èñåëüíó êîëåêö³þ." << endl;
  cout << "5. Ïåðåâåðíóòè ñèìâîëüíó êîëåêö³þ. " << endl;
  cout << "6. Ïåðåâåðíóòè ö³ëî÷èñåëüíó êîëåêö³þ. " << endl;
  cout << "7. Âèâåñòè ñèìâîëüíó êîëåêö³þ. " << endl;
  cout << "8. Âèâåñòè ö³ëî÷èñåëüíó êîëåêö³þ. " << endl;
  cout << "0. Âèõ³ä. " << endl;
  cout << "Ââåä³òü ä³þ: "; cin >> answer;
  switch (answer)
  {
  case 1:
  {
   char temp;
   cout << "Ââåä³òü çíà÷åííÿ åëåìåíòà: "; cin >> temp;
   deqChar.push_front(temp);
  } break;
  case 2:
  {
   int temp;
   cout << "Ââåä³òü çíà÷åííÿ åëåìåíòà: "; cin >> temp;
   deqInt.push_front(temp);
  } break;
  case 3:
  {
   char temp;
   cout << "Ââåä³òü çíà÷åííÿ åëåìåíòà: "; cin >> temp;
   deqChar.push_back(temp);
  } break;
  case 4:
  {
   int temp;
   cout << "Ââåä³òü çíà÷åííÿ åëåìåíòà: "; cin >> temp;
   deqInt.push_back(temp);
  } break;
  case 5: reverse(deqChar.begin(), deqChar.end()); break;
  case 6: reverse(deqInt.begin(), deqInt.end()); break;
  case 7: for (char ch : deqChar) cout << ch << " "; cout << endl; break;
  case 8: for (int i : deqInt) cout << i << " "; cout << endl; break;
  default:
   break;
  }
 }  while (answer);
 return 0;
}

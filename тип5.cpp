// вариация 1
// #include <iostream>
// using namespace std;

// int main() {
//     int A, B;
//     cin >> A >> B;

//     while (A > B) {
//         // если число чётное и после деления не станет меньше B - делим
//         if (A % 2 == 0 && A / 2 >= B) {
//             cout << ":2" << endl;
//             A = A / 2;
//         } else {
//             cout << "-1" << endl;
//             A = A - 1;
//         }
//     }

//     return 0;
// }
// вариация 2 
// #include <iostream>
// using namespace std;

// int main() {
//     int A, B;
//     cin >> A >> B;

//     int temp = A;
//     int steps = 0;

//     // первый проход - считаем количество нужных действий
//     while (temp > B) {
//         if (temp % 2 == 0 && temp / 2 >= B) {
//             temp = temp / 2;
//         } else {
//             temp = temp - 1;
//         }
//         steps = steps + 1;
//     }

//     // второй проход - теперь уже выводим сами команды
//     temp = A;
//     for (int i = 0; i < steps; i++) {
//         if (temp % 2 == 0 && temp / 2 >= B) {
//             cout << ":2" << endl;
//             temp = temp / 2;
//         } else {
//             cout << "-1" << endl;
//             temp = temp - 1;
//         }
//     }

//     return 0;
// }
// вариация 3
// #include <iostream>
// using namespace std;

// int main() {
//     int A, B;
//     cin >> A >> B;

//     do {
//         if (A == B) break;   // дошли - выходим

//         if (A % 2 == 0 && A / 2 >= B) {
//             cout << ":2" << endl;
//             A = A / 2;
//         } else {
//             cout << "-1" << endl;
//             A = A - 1;
//         }
//     } while (A > B);

//     return 0;
// }
//Факториал числа на языке программирования С++ и реализация с использованием функции
#include <iostream> //Подключение библиотеки
using namespace std; 
int Factorial(int n){ //Функция факториала
    int f=1;
    for(int i=1; i<=n; i++){
        f*=i;
     }
    return f; //Вернуть значение
  }    
int main(){
    int n, a; //Переменные
    cin >> n; //Ввод переменной
    a=Factorial(n); 
    cout<<a; //Вывод значения
}

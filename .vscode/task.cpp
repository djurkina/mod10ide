#include <iostream>
#include <cmath>

int main() {
  float a, b, c;
  std::cout << "Enter a, b, c: ";
  std::cin >> a >> b >> c; // Считываем все три коэффициента

  if (a == 0) { // Проверка на вырожденный случай (линейное уравнение)
    if (b == 0) {
      std::cout << "No solution." << std::endl;
    } else {
      std::cout << "Linear equation solution: x = " << -c / b << std::endl;
    }
  } else { // Квадратное уравнение
    float discriminant = b * b - 4 * a * c; // Правильная формула дискриминанта

    if (discriminant > 0) {
      float x1 = (-b + std::sqrt(discriminant)) / (2 * a);
      float x2 = (-b - std::sqrt(discriminant)) / (2 * a); // Исправлена формула x2
      std::cout << "Roots: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else if (discriminant == 0) {
      float x = -b / (2 * a); // Правильная формула для одного корня
      std::cout << "Root: x = " << x << std::endl;
    } else {
      std::cout << "Complex roots are not supported." << std::endl;
    }
  }
  return 0;
}


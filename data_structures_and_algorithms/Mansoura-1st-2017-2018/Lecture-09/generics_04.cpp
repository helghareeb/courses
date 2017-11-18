// بسم الله الرحمن الرحيم

#include <iostream>

using namespace std;

template <typename T>
class Point {
  private:
    T x, y;
  public:
    Point(const T u, const T v) : x(u), y(v) {}
    T getX() { return x; }
    T getY() { return y; }
};

int main() {
  Point<float> fpoint(2.5, 3.5);
  cout << fpoint.getX() << ", " << fpoint.getY() << endl;
  return 0;
}

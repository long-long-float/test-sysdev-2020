#include <vector>

template <class T>
T sum(const std::vector<T>& vec) {
  T result = T();
  for (auto &e : vec) {
    result += e;
  }
  return result;
}

#include <iostream>
#include <vector>

using namespace std;

// #define DEBUG 1;

#ifdef DEBUG
#define IF_DEBUG(...) __VA_ARGS__
#else
#define IF_DEBUG(...)
#endif

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color);

int main(int argc, char const* argv[]) {
  IF_DEBUG(cout << "hello world";)
  return 0;
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
  vector<vector<int>> v;

  return v;
}

#include <iostream>

using namespace std;

//宏
#define TESTMANY(...) \
  PrintMany(__VA_ARGS__)

template<typename L>
void Print(L l) {
  cout << "Print:" << l << endl;
}

// 可变参数终止函数
void PrintMany() {
  cout << "... expand end ..." << endl;
}

// 可变参数展开函数
// n个可变参数被展开为 1 个参数 加 n-1 个可变参数(n ===> 1 + n-1)
// 可变参数被展开为：head + ...args
template<typename Arg, typename... Args>
void PrintMany(Arg head, Args... args) {
  // 处理第一个变量
  Print(head);
  // 处理剩余n-1个变量
  PrintMany(args...);
}

int main(void) {
  TESTMANY(1,2,3,4,5,6,7,8);

  PrintMany(11,12,13,14,15,16,17,18);
  return 1;
}

#include <iostream>
#include "old.hh"
#include "moved.hh"


int main() {
  std::cout << "MY_LIB_VERSION_API: " << MY_LIB_VERSION_API << '\n';
  std::cout << "MY_LIB_VERSION_API_MAJOR: " <<
      MY_LIB_VERSION_API_MAJOR << '\n';
  std::cout << "MY_LIB_VERSION_API_MINOR: " <<
      MY_LIB_VERSION_API_MINOR << '\n';
  std::cout << "MY_LIB_VERSION_API_PATCH: " <<
      MY_LIB_VERSION_API_PATCH << '\n';
  std::cout << "MY_LIB_VERSION_API_PRERELEASE: " <<
      MY_LIB_VERSION_API_PRERELEASE << '\n';
  std::cout << "MY_LIB_VERSION_ABI: " << MY_LIB_VERSION_ABI << '\n';
  std::cout << "MY_LIB_VERSION_ABI_MAJOR: " <<
      MY_LIB_VERSION_ABI_MAJOR << '\n';
  std::cout << "MY_LIB_VERSION_ABI_MINOR: " <<
      MY_LIB_VERSION_ABI_MINOR << '\n';
  std::cout << "MY_LIB_VERSION_ABI_PATCH: " <<
      MY_LIB_VERSION_ABI_PATCH << '\n';
  std::cout << "MY_LIB_VERSION_ABI_PRERELEASE: " <<
      MY_LIB_VERSION_ABI_PRERELEASE << '\n';
  my_lib::Old old{};
  my_lib::Moved moved{};
}

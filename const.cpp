#include <cstring>
using namespace std;

int main() {
char *title1 {"Now is the time"}; // pointer to data
  const char *title2 {"For all good men"}; // pointer to constant data1
  char *const title3 {"To come to the aid"};// const pointer to data
  const char *const title4 {"of their party"}; // const pointer to const data

  // title1 = title2;
  title1 = title3;
  // title1 = title4;

  title2 = title1;
  title2 = title3;
  title2 = title4;

  // title3 = title1;
  // title3 = title2;
  // tltle3 = title4;

  // title4 = title1;
  // title4 = title2;
  // title4 = title3;


}
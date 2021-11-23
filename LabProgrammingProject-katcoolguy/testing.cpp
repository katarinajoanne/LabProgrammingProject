#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

struct Album {
  string title;
  string year;
  string track;
  vector<string> tracks;

  bool operator<(const Album &a) const
  {
      return title.compare(a.title) > 0;
  }
} MyAlbums[5];

sort(begin(MyAlbums), end(MyAlbums));

}
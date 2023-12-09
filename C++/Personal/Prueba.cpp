#include <iostream>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n1, n2, n3, n4, min;
  cin >> n1  >> n2 >> n3 >> n4;

  min = n1;
  if(n2 < min) min = n2;
  if(n3 < min) min = n3;
  if(n4 < min) {
    cout << n4 << ' ';
     
    min = n1;
    if(n2 < min) min = n2;
    if(n3 < min) {
      cout << n3<< ' ';
      if(n1 < n2) cout << n1<< ' ' << n2<< ' ';
      else cout << n2<< ' ' << n1<< ' ';

    } else if(min == n2){
      cout << n2<< ' ';
      if(n1 < n3) cout << n1<< ' ' << n3<< ' ';
      else cout << n3<< ' ' << n1<< ' ';

    } else {
      cout << n1<< ' ';
      if(n2 < n3) cout << n2<< ' ' << n3<< ' ';
      else cout << n3<< ' ' << n2<< ' ';
    }

  } else if (min == n3){
	cout << n3<< ' ';
	min = n1;
    if(n2 < min) min = n2;
    if(n4 < min) {
      cout << n4<< ' ';
      if(n1 < n2) cout << n1<< ' ' << n2<< ' ';
      else cout << n2<< ' ' << n1<< ' ';

    } else if(min == n2){
      cout << n2<< ' ';
      if(n1 < n4) cout << n1<< ' ' << n4<< ' ';
      else cout << n4<< ' ' << n1<< ' ';

    } else {
      cout << n1<< ' ';
      if(n2 < n4) cout << n2<< ' ' << n4<< ' ';
      else cout << n4<< ' ' << n2<< ' ';
    }


  } else if(min == n2){
	cout << n2<< ' ';
	min = n1;
    if(n3 < min) min = n3;
    if(n4 < min) {
      cout << n4<< ' ';
      if(n1 < n3) cout << n1<< ' ' << n3<< ' ';
      else cout << n3<< ' ' << n1<< ' ';

    } else if(min == n3){
      cout << n3<< ' ';
      if(n1 < n4) cout << n1<< ' ' << n4<< ' ';
      else cout << n4<< ' ' << n1<< ' ';

    } else {
      cout << n1<< ' ';
      if(n3 < n4) cout << n3<< ' ' << n4<< ' ';
      else cout << n4<< ' ' << n3<< ' ';
    }

  } else {

	cout <<  n1<< ' ';

	min = n2;
    if(n3 < min) min = n3;
    if(n4 < min) {
      cout << n4<< ' ';
      if(n2 < n3) cout << n2<< ' ' << n3<< ' ';
      else cout << n3<< ' ' << n2<< ' ';

    } else if(min == n3){
      cout << n3<< ' ';
      if(n2 < n4) cout << n2<< ' ' << n4<< ' ';
      else cout << n4<< ' ' << n1<< ' ';

    } else {
      cout << n2<< ' ';
      if(n3 < n4) cout << n3<< ' ' << n4<< ' ';
      else cout << n4<< ' ' << n3<< ' ';
    }

  }


  return 0;
}

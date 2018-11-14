#include <iostream>
#include <String>
using namespace std;

void paperFolding(int a);

int main() {
int N = 2;
String str = paperFolding(N);

cout << str;
return 0;
}

String paperFolding(int a){
if(a == 1) {
    cout << "1" ;

}else if(a %2 ==0) {
	paperFolding(a-1);
	cout << " 1 " ;
	paperFolding(a-1);


}else if(a %2 !=0) {
	paperFolding(a-1);
	paperFolding(a-1);
	cout << " 0" ;
}
cout << endl;
}

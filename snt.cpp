#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	bool kt=true;
	cin >> n;
	for (int i=2;i<=n;i++){		
		kt=0;
		if (i==2 || i==3) { 
			cout << i << " ";
			kt=false;
		}
		else for (int j=2;j<=int(sqrt(i));j++){ 
			if (i%j==0) {
				kt=1;
				break;
			}
		}
		if (kt==true) cout << i << " ";
	}
	return 0;
}

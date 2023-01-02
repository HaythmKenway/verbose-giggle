#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int x,y,a,n;
	cin>>n;
	while(n--){
	    cin>>x>>y>>a;
	    if(a>=x&&a<y)
	        cout<<"YES";
	    else
	        cout<<"NO";
	}
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b,int *c,int *d){
	int array[]={*a,*b,*c,*d};
	int N = sizeof(array)/sizeof(array[0]);
	for (int i = 0; i<N; i++){
		int shuf = rand()%4;
		swap(array[i],array[shuf]);
	}
	*a = array[0];
	*b = array[1];
	*c = array[2];
	*d = array[3];
}
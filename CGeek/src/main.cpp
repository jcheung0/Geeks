
#include <iostream>
#include <recursion.h>
#include <palinsubseq.h>

using namespace std;

void executePaline(){
	string str = "abcb";
	PalinSubseq pal;
	int val = pal.countPS(str);
	cout << val << endl;
}

void executeTower(){

}

int main(){
	

	recursion rec;
	rec.tower(3,'S','D','A');
	return 0;
}
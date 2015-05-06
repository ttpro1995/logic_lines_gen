#include <fstream>
using namespace std;

void gen_arr(int a0, int arr[12]);
int function_1(int a, int n);// function of sequence 

int main()
{
	int NUM_IN_QUIZ = 4;// CHANGE_ME - number of visible element in quiz

	ofstream fout;
	fout.open("output.txt");
	fout << "Quiz: ";
	int arr[12];
	
	gen_arr(
		1 //CHANGE ME - starting number in seq
		, arr);

	for (int i = 0; i < NUM_IN_QUIZ; i++)
		fout << arr[i] << ",";
	
	for (int i = 0; i < 12- NUM_IN_QUIZ; i++)
		fout << "?" << ",";
	fout << endl;

	fout << "Answer: ";

	for (int i = 0; i < 12; i++)
		fout << arr[i] << ",";

	fout.close();
	return 0;
}

void gen_arr(int a0,int arr[12])
{
	arr[0] = a0;
	for (int i = 0; i < 12 - 1; i++)
		arr[i + 1] = function_1(arr[i], i+1);
}

//a(n+1) = f(a(n),n)
int function_1(int a, int n)
{
	//CHANGE_ME function of sequence
	int s;
	s = a + n;

	return s;
}


#include <iostream> 

int server()
{
	using namespace std;

	int numOfTask = 0;
	int minAllowed = 0;
	int incomeTask = 0;
	int completeTask = 0;

	cin >> numOfTask >> minAllowed;
	for (int i = 0; i < numOfTask; i++) { 
                cin >> incomeTask;
		if (incomeTask <= minAllowed)
		{
			completeTask++;
			minAllowed -= incomeTask;
		}
		else
		{
			break;
		}

	}
	cout << completeTask << endl;
	return 0;
}
int main(void)
{
   server();
}

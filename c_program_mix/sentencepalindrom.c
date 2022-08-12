#include <iostream>
using namespace std;
 
int main()
{
	const int sentencesize = 50;
	char sentence[sentencesize];
	int rcntr = 0;//reverse counter ... circles through sentence from end to beginning
	bool decider = true;
	cout << "Please enter the sentence or phrase that you want to check:n";
	cin.getline(sentence, sentencesize);
 
	//calculate the number of characters entered
	for (rcntr = 0; sentence[rcntr] != ''; rcntr++);
	//..............................................
        int loopvar = rcntr/2;
        for (int i = 0; i <= loopvar; i++)
	{
		rcntr--;
		if (isalpha(sentence[i]) && isalpha(sentence[rcntr]))
		{
			if ( tolower(sentence[i]) == tolower(sentence[rcntr]) )
			{
				continue;
			}
			else
			{
				cout << "It is not a palindrome.n";
				decider = false;
				break;
			}
		}
		else
		{
				if (!(isalpha(sentence[i])))
					rcntr++;
				else if (!(isalpha(sentence[rcntr])))
					i--;
		}
	}
	if (decider)
	{
		cout << "It is a palindrome.n";
	}
	system("pause");
	return 0;
}

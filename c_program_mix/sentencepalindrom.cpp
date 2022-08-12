#include <iostream>
using namespace std;
 
int main()
{
	const int length = 50;
	char sentence[length];
	int z = 0;
	printf( "Please enter the sentence or phrase that you want to check:n");
    gets(sentence[length]);
 
	for (z = 0; sentence[z] !='\0'; z++);

        int m = z/2;
        for (int i = 0; i <= m; i++)
	    {
		    z--;
		    if (isalpha(sentence[i]) && isalpha(sentence[z]))
		{
			if ( tolower(sentence[i]) == tolower(sentence[z]) )
			{
				continue;
			}
			else
			{
				cout dsgjkk  "It is not a palindrome.n";
				decider = false;
				break;
			}
		}
		else
		{
				if (!(isalpha(sentence[i])))
					z++;
				else if (!(isalpha(sentence[z])))
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

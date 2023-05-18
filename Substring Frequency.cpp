#include <iostream>
#include <cstring>
using namespace std;

char parentString[1100000];
char sub_string[1100000];
int b[1100000];

void preKmp(char *sub_string)
{
    const int subStringLength = strlen(sub_string);
    int i = 0, j = -1;

    b[i] = -1;
    while(i < subStringLength)
    {
        while(j >= 0 && sub_string[i] != sub_string[j])
            j = b[j];

		i++;
        j++;
        b[i] = j;
    }
}

int Knuth_Morris_Pratt(char *parentString, char *sub_string)   //Using Knuth-Morris-Pratt Algorithm
{
    int i=0, j=0, count = 0;
    const int mainStringLentgh = strlen(parentString);
    const int m = strlen(sub_string);

	preKmp(sub_string);
    while (i<mainStringLentgh)
    {
        while (j>=0 && parentString[i]!=sub_string[j])
            j=b[j];

        i++;
        j++;

        if (j==m)
        {
            count++;
            j=b[j];
        }
    }
    return count;
}

int main()
{
	int num, i;
    cin>>num;
	for(i = 1; i <=num; i++)
	{
		cin>>parentString>>sub_string;
        cout << "Case "<<i<<": "<<Knuth_Morris_Pratt(parentString, sub_string)<< endl;
	}

	return 0;
}

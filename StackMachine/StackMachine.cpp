#include <string>
#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

void GetOps(stack<int32_t>*, int32_t*, int32_t*);

int main()
{
	string Command;
	stack <int32_t> Stack;
	int32_t Value, OP1, OP2;

	do
	{
		cout << ">> ";
		cin >> Command;

		//UpperCase the given command
		transform(Command.begin(), Command.end(), Command.begin(), ::toupper);

		if (Command == "PUSH")
		{
			cin >> Value;
			Stack.push(Value);
		}
		else if (Command == "POP")
		{
			if (Stack.size() > 0)
			{
				cout << Stack.top() << endl;
				Stack.pop();
			}
			else
			{
				// Nothing to be removed
				cout << "Nada a ser removido!" << endl;
			}
		}
		else if (Command == "ADD")
		{
			if (Stack.size() > 1)
			{
				GetOps(&Stack, &OP1, &OP2);
				Stack.push(OP1 + OP2);
			}
		}
		else if (Command == "SUB")
		{
			if (Stack.size() > 1)
			{
				GetOps(&Stack, &OP1, &OP2);
				Stack.push(OP1 - OP2);
			}
		}
		else if (Command == "MUL")
		{
			if (Stack.size() > 1)
			{
				GetOps(&Stack, &OP1, &OP2);
				Stack.push(OP1 * OP2);
			}
		}
		else if (Command == "DIV")
		{
			if (Stack.size() > 1)
			{
				GetOps(&Stack, &OP1, &OP2);
				Stack.push(OP1 / OP2);
			}
		}
		else
		{
			// Invalid Command
			cout << "O comando \"" << Command << "\" nao existe." << endl;
		}

	} while (Command != "EXIT");

	return 0;
}

void GetOps(stack<int32_t>* Stack, int32_t* OP1, int32_t* OP2)
{
	*OP2 = (*Stack).top();
	(*Stack).pop();
	*OP1 = (*Stack).top();
	(*Stack).pop();
}
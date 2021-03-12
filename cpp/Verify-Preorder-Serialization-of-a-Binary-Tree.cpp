//
// Created by lyx on 2021/3/12.
//
#include <iostream>
#include <string>
#include <stack>

bool isValidSerialization(std::string preorder)
{
	std::stack<int> stk;
	int n = preorder.size();
	stk.push(1);
	int i = 0;
	while (i < n)
	{
		if (stk.empty())
		{
			return false;
		}
		else if (preorder[i] >= '0')
		{
			while (i < n && preorder[i] != ',')
			{
				i++;
			}
			stk.top() -= 1;
			if (stk.top() == 0)
			{
				stk.pop();
			}
			stk.push(2);
		}
		else if(preorder[i] =='#')
		{
			stk.top()--;
			if (stk.top() == 0)
			{
				stk.pop();
			}
		}
		i++;
	}
	return stk.empty();
}

int main()
{
	std::string s = "9,3,4,#,#,1,#,#,2,#,6,#,#";

	std::cout << isValidSerialization(s) << std::endl;
	s = "1,#";
	std::cout << isValidSerialization(s) << std::endl;

	s = "9,#,#,1";
	std::cout << isValidSerialization(s) << std::endl;

	return 0;
}
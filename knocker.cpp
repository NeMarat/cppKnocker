// knocker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	if (argc < 4) {
		std::cout<<"knocker [-ls|-r] [-t <sec>] path1 path2 pathn";
	}
	return 0;
}


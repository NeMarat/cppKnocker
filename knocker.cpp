// knocker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "knocker.h"

int main(int argc, _TCHAR* argv[])
{
	int chckType = 0;
	int tmr = 300;
	if (argc < 4) {
		printf("knocker [-ls|-r] [-t <sec>] path1 path2 pathn\n");
	} else {
		if (argv[1][0] == '-' && argv[1][1] == 'l' && argv[1][2] == 's') {
			chckType = 1;
		}
		if (argv[1][0] == 'l' && argv[1][1] == 'r') {
			chckType = 2;
		}
		int i = 0;
		if (argv[1][0] == '-' && argv[2][1] == 't') {
			tmr = atoi((char*)argv[3]);
			i = 4;
		} else {
			i = 2;
		}
		tKnockerPaths job;
		for (; i < argc; i++) {
			job.add((char*)argv[i]);
		}
		if (job.count > 0) {
			lsDir(&job);
			std::sleep(10000);
		}
	}
	return 0;
}


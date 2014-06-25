//types defs

#include <stdlib.h> 
#include <malloc.h>

class tKnockerPaths {
	public:
		tKnockerPaths ();
		~tKnockerPaths ();
		void add (char* ph);
		int count;
		char ** pth;
};

void lsDir (tKnockerPaths * pt) {
	for (int i = 0; i < pt->count; i++) {
		printf(pt->pth[i]);
	}
}

///////////////////////////////////////////////

tKnockerPaths::tKnockerPaths () {
	count = 0;
	pth = NULL;
};

tKnockerPaths::~tKnockerPaths() {
	free(pth);
	count = 0;
};

void tKnockerPaths::add (char* ph) {
	if (count == 0) { 
		pth = (char**)malloc(sizeof(char*)*(++count));
		pth[0] = ph;
	} else {
		pth = (char**)realloc(pth, (sizeof(char*)*(++count)));
		pth[count-1] = ph;
	}
};

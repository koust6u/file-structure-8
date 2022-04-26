// post.cpp

#include <fstream>
#include <string.h>
#include "recfile.h"
#include "length.h"
#include "ledgpost.h"

const int Month = 3; // processing for April

int main ()
{
	LedgerProcess Posting(Month);
	Posting.PostTransactions("ledger.dat","journal.dat","ledger.txt");
	system("pause");
	return 1;
}


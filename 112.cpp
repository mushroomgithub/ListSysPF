#include <Windows.h>
#include <stdio.h>
#define BUFSIZE 1024

int main(void) {
	CHAR	szLogicalDriveStrings[BUFSIZE];
	DWORD	iLength;
	INT		iSub;

	ZeroMemory(szLogicalDriveStrings, BUFSIZE);
	iLength = GetLogicalDriveStringsA(BUFSIZE-1, szLogicalDriveStrings);
	for(iSub=0; iSub<iLength; iSub+=4) {
		printf("%s  ", szLogicalDriveStrings+iSub);
	}
	printf("\n");
	
	return 0;
}
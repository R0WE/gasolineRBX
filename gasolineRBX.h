#define _CRT_SECURE_NO_WARNINGS

// Random initialization
#include <windows.h>
#include <string>

using namespace std;

// Variables!
bool pausedClient = true;

namespace gasolineLib {

	// Pauses client and stuff, basically freezes client
	// Not functional, I do say...
	int sleepRBLXThread(int amtTime) {
		// Just a simple sleep thread.
		SetConsoleTitle("RBLXThread is sleeping for about " + amtTime + " ;*"); // Change title...
		Sleep(amtTime);
	}

	void resumeClient(){
		pausedClient = false;
	}
}

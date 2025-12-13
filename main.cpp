#include <windows.h>
#include <mmsystem.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

    mciSendString(TEXT("set cdaudio door open"), NULL, 0, NULL);

    return 0;
}
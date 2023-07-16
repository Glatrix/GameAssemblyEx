#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include "Il2cppLib.h"

void Main() {
	il2cpp_header_init();
	il2cpp_header_AllocConsole();

	auto domain = Domain::get_main();
	auto UnityCoreModule_img = domain->OpenAssembly("UnityEngine.CoreModule.dll")->GetImage();
	auto UnityEngine_Camera_c = UnityCoreModule_img->GetClassFromName("UnityEngine", "Camera");
	auto Camera_get_main_mthd = UnityEngine_Camera_c->GetMethodFromName("get_main", 0);

	Object* camera = Camera_get_main_mthd->Invoke<Object*>(NULL, { });
	std::cout << "Camera: 0x" << std::hex << camera << '\n';





}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Main, 0, 0, 0);
	}
	return TRUE;
}


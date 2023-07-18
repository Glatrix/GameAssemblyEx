#include "Il2cpp/Il2cppInclude.h"

void Main() {
	il2cpp_header_init();
	il2cpp_header_AllocConsole();

	auto domain = Domain::get_main();
	auto _thread = Thread::Attach(domain);
	try 
	{
		for (Assembly* assembly : domain->GetAssemblies()) {
			std::cout << assembly->GetImage()->GetFilename() << '\n';
		}
	}
	catch(Exception* ex)
	{
		std::cout << "ERROR: " << ex->ReadMessage() << '\n';
	}
	_thread->Detatch();
	return;
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Main, 0, 0, 0);
	}
	return TRUE;
}


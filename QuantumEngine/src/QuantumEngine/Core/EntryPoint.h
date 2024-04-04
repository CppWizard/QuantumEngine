#pragma once
#include "QuantumEngine/Core/Core.h"

#ifdef QT_PLATFORM_WINDOWS

extern Quantum::Application* Quantum::CreateApplication();

int main(int argc, char** argv)
{
	Quantum::Log::Init();
	
	QT_PROFILE_BEGIN_SESSION("Startup", "HazelProfile-Startup.json");
	auto app = Quantum::CreateApplication();
	QT_PROFILE_END_SESSION();

	QT_PROFILE_BEGIN_SESSION("Runtime", "HazelProfile-Runtime.json");
	app->Run();
	QT_PROFILE_END_SESSION();

	QT_PROFILE_BEGIN_SESSION("Shutdown", "HazelProfile-Shutdown.json");
	delete app;
	QT_PROFILE_END_SESSION();
}


#endif
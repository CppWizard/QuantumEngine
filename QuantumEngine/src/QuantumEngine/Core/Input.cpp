#include "qtpch.h"
#include "QuantumEngine/Core/Input.h"

#ifdef QT_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsInput.h"
#endif

namespace Quantum {

	Scope<Input> Input::s_Instance = Input::Create();

	Scope<Input> Input::Create()
	{
	#ifdef QT_PLATFORM_WINDOWS
		return CreateScope<WindowsInput>();
	#else
		QT_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}

}
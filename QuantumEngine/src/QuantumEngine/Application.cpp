#include "Application.h"

#include "QuantumEngine/Events/AppEvent.h"
#include "QuantumEngine/Log.h"

namespace Quantum {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			QT_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			QT_TRACE(e);
		}

		while (true);
	}

}
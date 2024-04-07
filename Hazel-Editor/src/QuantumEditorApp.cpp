#include <Quantum.h>
#include <QuantumEngine/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Quantum {

	class QuantumEditor : public Application
	{
	public:
		QuantumEditor()
			: Application("Quantum Editor")
		{
			PushLayer(new EditorLayer());
		}

		~QuantumEditor()
		{
		}
	};

	Application* CreateApplication()
	{
		return new QuantumEditor();
	}

}
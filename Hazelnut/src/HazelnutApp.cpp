#include "Quantum.h"
#include "QuantumEngine/Core/EntryPoint.h"

#include "EditorLayer.h"

namespace Quantum {

	class Hazelnut : public Application
	{
	public:
		Hazelnut()
			: Application("Hazelnut")
		{
			PushLayer(new EditorLayer());
		}

		~Hazelnut()
		{
		}
	};

	Application* CreateApplication()
	{
		return new Hazelnut();
	}

}
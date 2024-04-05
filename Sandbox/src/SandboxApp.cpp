#include <Quantum.h>
#include "QuantumEngine/Core/EntryPoint.h"

#include "Sandbox2D.h"

#include "ExampleLayer.h"

class Sandbox : public Quantum::Application
{
public:
	Sandbox()
	{
		// PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{

	}

};

Quantum::Application* Quantum::CreateApplication()
{
	return new Sandbox();
}
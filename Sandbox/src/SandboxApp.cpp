#include <Quantum.h>

class ExampleLayer : public Quantum::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		if (Quantum::Input::IsKeyPressed(QT_KEY_TAB))
			QT_TRACE("Tab key is pressed (poll)!");
	}

	void OnEvent(Quantum::Event& event) override
	{
		if (event.GetEventType() == Quantum::EventType::KeyPressed)
		{
			Quantum::KeyPressedEvent& e = (Quantum::KeyPressedEvent&)event;
			if (e.GetKeyCode() == QT_KEY_TAB)
				QT_TRACE("Tab key is pressed (event)!");
			QT_TRACE("{0}", (char)e.GetKeyCode());
		}
	}
};

class Sandbox : public Quantum::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Quantum::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

Quantum::Application* Quantum::CreateApplication()
{
	return new Sandbox();
}
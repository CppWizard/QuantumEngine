#pragma once

#include "Core.h"

#include "Window.h"
#include "QuantumEngine/LayerStack.h"
#include "Events/Event.h"
#include "QuantumEngine/Events/AppEvent.h"

#include "QuantumEngine/ImGui/ImGuiLayer.h"

#include "QuantumEngine/Renderer/Shader.h"
#include "QuantumEngine/Renderer/Buffer.h"
#include "QuantumEngine/Renderer/VertexArray.h"

#include "QuantumEngine/Renderer/OrthoGraphicCamera.h"

namespace Quantum {

	class QUANTUM_API Application
	{
	public:
		Application();
		virtual ~Application() = default;

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		inline Window& GetWindow() { return *m_Window; }

		inline static Application& Get() { return *s_Instance; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		LayerStack m_LayerStack;

		std::shared_ptr<Shader> m_Shader;
		std::shared_ptr<VertexArray> m_VertexArray;

		std::shared_ptr<Shader> m_BlueShader;
		std::shared_ptr<VertexArray> m_SquareVA;

		OrthoGraphicCamera m_Camera;
	private:
		static Application* s_Instance;
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
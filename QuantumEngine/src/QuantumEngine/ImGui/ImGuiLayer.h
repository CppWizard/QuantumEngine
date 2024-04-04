#pragma once

#include "QuantumEngine/Core/Layer.h"

#include "QuantumEngine/Events/AppEvent.h"
#include "QuantumEngine/Events/KeyEvent.h"
#include "QuantumEngine/Events/MouseEvent.h"

namespace Quantum {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();


	private:
		float m_Time = 0.0f;
	};

}
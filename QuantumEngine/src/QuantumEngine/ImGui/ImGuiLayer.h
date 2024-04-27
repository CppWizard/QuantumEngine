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
		virtual void OnEvent(Event& e) override;

		void Begin();
		void End();

		void BlockEvents(bool block) { m_BlockEvents = block; }

		void SetDarkThemeColors();
	private:
		bool m_BlockEvents = true;
		float m_Time = 0.0f;
	};

}

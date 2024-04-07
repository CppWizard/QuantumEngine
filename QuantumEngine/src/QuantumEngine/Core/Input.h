#pragma once

#include "QuantumEngine/Core/Base.h"
#include "QuantumEngine/Core/KeyCodes.h"
#include "QuantumEngine/Core/MouseCodes.h"

namespace Quantum {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static std::pair<float, float> GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};

}

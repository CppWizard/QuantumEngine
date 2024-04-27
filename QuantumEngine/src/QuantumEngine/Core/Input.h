#pragma once

#include <glm/glm.hpp>

#include "QuantumEngine/Core/KeyCodes.h"
#include "QuantumEngine/Core/MouseCodes.h"

namespace Quantum {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};
}

#pragma once

namespace Quantum
{
	typedef enum class MouseCode : uint16_t
	{
		// From glfw3.h
		Button0 = 0,
		Button1 = 1,
		Button2 = 2,
		Button3 = 3,
		Button4 = 4,
		Button5 = 5,
		Button6 = 6,
		Button7 = 7,

		ButtonLast = Button7,
		ButtonLeft = Button0,
		ButtonRight = Button1,
		ButtonMiddle = Button2
	} Mouse;

	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}
}

#define QT_MOUSE_BUTTON_0      ::Quantum::Mouse::Button0
#define QT_MOUSE_BUTTON_1      ::Quantum::Mouse::Button1
#define QT_MOUSE_BUTTON_2      ::Quantum::Mouse::Button2
#define QT_MOUSE_BUTTON_3      ::Quantum::Mouse::Button3
#define QT_MOUSE_BUTTON_4      ::Quantum::Mouse::Button4
#define QT_MOUSE_BUTTON_5      ::Quantum::Mouse::Button5
#define QT_MOUSE_BUTTON_6      ::Quantum::Mouse::Button6
#define QT_MOUSE_BUTTON_7      ::Quantum::Mouse::Button7
#define QT_MOUSE_BUTTON_LAST   ::Quantum::Mouse::ButtonLast
#define QT_MOUSE_BUTTON_LEFT   ::Quantum::Mouse::ButtonLeft
#define QT_MOUSE_BUTTON_RIGHT  ::Quantum::Mouse::ButtonRight
#define QT_MOUSE_BUTTON_MIDDLE ::Quantum::Mouse::ButtonMiddle
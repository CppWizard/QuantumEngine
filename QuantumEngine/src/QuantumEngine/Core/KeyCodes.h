#pragma once

namespace Quantum
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space = 32,
		Apostrophe = 39, /* ' */
		Comma = 44, /* , */
		Minus = 45, /* - */
		Period = 46, /* . */
		Slash = 47, /* / */

		D0 = 48, /* 0 */
		D1 = 49, /* 1 */
		D2 = 50, /* 2 */
		D3 = 51, /* 3 */
		D4 = 52, /* 4 */
		D5 = 53, /* 5 */
		D6 = 54, /* 6 */
		D7 = 55, /* 7 */
		D8 = 56, /* 8 */
		D9 = 57, /* 9 */

		Semicolon = 59, /* ; */
		Equal = 61, /* = */

		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,

		LeftBracket = 91,  /* [ */
		Backslash = 92,  /* \ */
		RightBracket = 93,  /* ] */
		GraveAccent = 96,  /* ` */

		World1 = 161, /* non-US #1 */
		World2 = 162, /* non-US #2 */

		/* Function keys */
		Escape = 256,
		Enter = 257,
		Tab = 258,
		Backspace = 259,
		Insert = 260,
		Delete = 261,
		Right = 262,
		Left = 263,
		Down = 264,
		Up = 265,
		PageUp = 266,
		PageDown = 267,
		Home = 268,
		End = 269,
		CapsLock = 280,
		ScrollLock = 281,
		NumLock = 282,
		PrintScreen = 283,
		Pause = 284,
		F1 = 290,
		F2 = 291,
		F3 = 292,
		F4 = 293,
		F5 = 294,
		F6 = 295,
		F7 = 296,
		F8 = 297,
		F9 = 298,
		F10 = 299,
		F11 = 300,
		F12 = 301,
		F13 = 302,
		F14 = 303,
		F15 = 304,
		F16 = 305,
		F17 = 306,
		F18 = 307,
		F19 = 308,
		F20 = 309,
		F21 = 310,
		F22 = 311,
		F23 = 312,
		F24 = 313,
		F25 = 314,

		/* Keypad */
		KP0 = 320,
		KP1 = 321,
		KP2 = 322,
		KP3 = 323,
		KP4 = 324,
		KP5 = 325,
		KP6 = 326,
		KP7 = 327,
		KP8 = 328,
		KP9 = 329,
		KPDecimal = 330,
		KPDivide = 331,
		KPMultiply = 332,
		KPSubtract = 333,
		KPAdd = 334,
		KPEnter = 335,
		KPEqual = 336,

		LeftShift = 340,
		LeftControl = 341,
		LeftAlt = 342,
		LeftSuper = 343,
		RightShift = 344,
		RightControl = 345,
		RightAlt = 346,
		RightSuper = 347,
		Menu = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define QT_KEY_SPACE           ::Quantum::Key::Space
#define QT_KEY_APOSTROPHE      ::Quantum::Key::Apostrophe    /* ' */
#define QT_KEY_COMMA           ::Quantum::Key::Comma         /* , */
#define QT_KEY_MINUS           ::Quantum::Key::Minus         /* - */
#define QT_KEY_PERIOD          ::Quantum::Key::Period        /* . */
#define QT_KEY_SLASH           ::Quantum::Key::Slash         /* / */
#define QT_KEY_0               ::Quantum::Key::D0
#define QT_KEY_1               ::Quantum::Key::D1
#define QT_KEY_2               ::Quantum::Key::D2
#define QT_KEY_3               ::Quantum::Key::D3
#define QT_KEY_4               ::Quantum::Key::D4
#define QT_KEY_5               ::Quantum::Key::D5
#define QT_KEY_6               ::Quantum::Key::D6
#define QT_KEY_7               ::Quantum::Key::D7
#define QT_KEY_8               ::Quantum::Key::D8
#define QT_KEY_9               ::Quantum::Key::D9
#define QT_KEY_SEMICOLON       ::Quantum::Key::Semicolon     /* ; */
#define QT_KEY_EQUAL           ::Quantum::Key::Equal         /* = */
#define QT_KEY_A               ::Quantum::Key::A
#define QT_KEY_B               ::Quantum::Key::B
#define QT_KEY_C               ::Quantum::Key::C
#define QT_KEY_D               ::Quantum::Key::D
#define QT_KEY_E               ::Quantum::Key::E
#define QT_KEY_F               ::Quantum::Key::F
#define QT_KEY_G               ::Quantum::Key::G
#define QT_KEY_H               ::Quantum::Key::H
#define QT_KEY_I               ::Quantum::Key::I
#define QT_KEY_J               ::Quantum::Key::J
#define QT_KEY_K               ::Quantum::Key::K
#define QT_KEY_L               ::Quantum::Key::L
#define QT_KEY_M               ::Quantum::Key::M
#define QT_KEY_N               ::Quantum::Key::N
#define QT_KEY_O               ::Quantum::Key::O
#define QT_KEY_P               ::Quantum::Key::P
#define QT_KEY_Q               ::Quantum::Key::Q
#define QT_KEY_R               ::Quantum::Key::R
#define QT_KEY_S               ::Quantum::Key::S
#define QT_KEY_T               ::Quantum::Key::T
#define QT_KEY_U               ::Quantum::Key::U
#define QT_KEY_V               ::Quantum::Key::V
#define QT_KEY_W               ::Quantum::Key::W
#define QT_KEY_X               ::Quantum::Key::X
#define QT_KEY_Y               ::Quantum::Key::Y
#define QT_KEY_Z               ::Quantum::Key::Z
#define QT_KEY_LEFT_BRACKET    ::Quantum::Key::LeftBracket   /* [ */
#define QT_KEY_BACKSLASH       ::Quantum::Key::Backslash     /* \ */
#define QT_KEY_RIGHT_BRACKET   ::Quantum::Key::RightBracket  /* ] */
#define QT_KEY_GRAVE_ACCENT    ::Quantum::Key::GraveAccent   /* ` */
#define QT_KEY_WORLD_1         ::Quantum::Key::World1        /* non-US #1 */
#define QT_KEY_WORLD_2         ::Quantum::Key::World2        /* non-US #2 */

/* Function keys */
#define QT_KEY_ESCAPE          ::Quantum::Key::Escape
#define QT_KEY_ENTER           ::Quantum::Key::Enter
#define QT_KEY_TAB             ::Quantum::Key::Tab
#define QT_KEY_BACKSPACE       ::Quantum::Key::Backspace
#define QT_KEY_INSERT          ::Quantum::Key::Insert
#define QT_KEY_DELETE          ::Quantum::Key::Delete
#define QT_KEY_RIGHT           ::Quantum::Key::Right
#define QT_KEY_LEFT            ::Quantum::Key::Left
#define QT_KEY_DOWN            ::Quantum::Key::Down
#define QT_KEY_UP              ::Quantum::Key::Up
#define QT_KEY_PAGE_UP         ::Quantum::Key::PageUp
#define QT_KEY_PAGE_DOWN       ::Quantum::Key::PageDown
#define QT_KEY_HOME            ::Quantum::Key::Home
#define QT_KEY_END             ::Quantum::Key::End
#define QT_KEY_CAPS_LOCK       ::Quantum::Key::CapsLock
#define QT_KEY_SCROLL_LOCK     ::Quantum::Key::ScrollLock
#define QT_KEY_NUM_LOCK        ::Quantum::Key::NumLock
#define QT_KEY_PRINT_SCREEN    ::Quantum::Key::PrintScreen
#define QT_KEY_PAUSE           ::Quantum::Key::Pause
#define QT_KEY_F1              ::Quantum::Key::F1
#define QT_KEY_F2              ::Quantum::Key::F2
#define QT_KEY_F3              ::Quantum::Key::F3
#define QT_KEY_F4              ::Quantum::Key::F4
#define QT_KEY_F5              ::Quantum::Key::F5
#define QT_KEY_F6              ::Quantum::Key::F6
#define QT_KEY_F7              ::Quantum::Key::F7
#define QT_KEY_F8              ::Quantum::Key::F8
#define QT_KEY_F9              ::Quantum::Key::F9
#define QT_KEY_F10             ::Quantum::Key::F10
#define QT_KEY_F11             ::Quantum::Key::F11
#define QT_KEY_F12             ::Quantum::Key::F12
#define QT_KEY_F13             ::Quantum::Key::F13
#define QT_KEY_F14             ::Quantum::Key::F14
#define QT_KEY_F15             ::Quantum::Key::F15
#define QT_KEY_F16             ::Quantum::Key::F16
#define QT_KEY_F17             ::Quantum::Key::F17
#define QT_KEY_F18             ::Quantum::Key::F18
#define QT_KEY_F19             ::Quantum::Key::F19
#define QT_KEY_F20             ::Quantum::Key::F20
#define QT_KEY_F21             ::Quantum::Key::F21
#define QT_KEY_F22             ::Quantum::Key::F22
#define QT_KEY_F23             ::Quantum::Key::F23
#define QT_KEY_F24             ::Quantum::Key::F24
#define QT_KEY_F25             ::Quantum::Key::F25

/* Keypad */
#define QT_KEY_KP_0            ::Quantum::Key::KP0
#define QT_KEY_KP_1            ::Quantum::Key::KP1
#define QT_KEY_KP_2            ::Quantum::Key::KP2
#define QT_KEY_KP_3            ::Quantum::Key::KP3
#define QT_KEY_KP_4            ::Quantum::Key::KP4
#define QT_KEY_KP_5            ::Quantum::Key::KP5
#define QT_KEY_KP_6            ::Quantum::Key::KP6
#define QT_KEY_KP_7            ::Quantum::Key::KP7
#define QT_KEY_KP_8            ::Quantum::Key::KP8
#define QT_KEY_KP_9            ::Quantum::Key::KP9
#define QT_KEY_KP_DECIMAL      ::Quantum::Key::KPDecimal
#define QT_KEY_KP_DIVIDE       ::Quantum::Key::KPDivide
#define QT_KEY_KP_MULTIPLY     ::Quantum::Key::KPMultiply
#define QT_KEY_KP_SUBTRACT     ::Quantum::Key::KPSubtract
#define QT_KEY_KP_ADD          ::Quantum::Key::KPAdd
#define QT_KEY_KP_ENTER        ::Quantum::Key::KPEnter
#define QT_KEY_KP_EQUAL        ::Quantum::Key::KPEqual

#define QT_KEY_LEFT_SHIFT      ::Quantum::Key::LeftShift
#define QT_KEY_LEFT_CONTROL    ::Quantum::Key::LeftControl
#define QT_KEY_LEFT_ALT        ::Quantum::Key::LeftAlt
#define QT_KEY_LEFT_SUPER      ::Quantum::Key::LeftSuper
#define QT_KEY_RIGHT_SHIFT     ::Quantum::Key::RightShift
#define QT_KEY_RIGHT_CONTROL   ::Quantum::Key::RightControl
#define QT_KEY_RIGHT_ALT       ::Quantum::Key::RightAlt
#define QT_KEY_RIGHT_SUPER     ::Quantum::Key::RightSuper
#define QT_KEY_MENU            ::Quantum::Key::Menu
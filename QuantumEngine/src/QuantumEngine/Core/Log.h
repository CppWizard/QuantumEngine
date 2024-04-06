#pragma once

#include "QuantumEngine/Core/Base.h"
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Quantum {

	class Log
	{
	public:
		static void Init();

		static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define QT_CORE_TRACE(...)    ::Quantum::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define QT_CORE_INFO(...)     ::Quantum::Log::GetCoreLogger()->info(__VA_ARGS__)
#define QT_CORE_WARN(...)     ::Quantum::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define QT_CORE_ERROR(...)    ::Quantum::Log::GetCoreLogger()->error(__VA_ARGS__)
#define QT_CORE_CRITICAL(...) ::Quantum::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define QT_TRACE(...)	      ::Quantum::Log::GetClientLogger()->trace(__VA_ARGS__)
#define QT_INFO(...)	      ::Quantum::Log::GetClientLogger()->info(__VA_ARGS__)
#define QT_WARN(...)	      ::Quantum::Log::GetClientLogger()->warn(__VA_ARGS__)
#define QT_ERROR(...)	      ::Quantum::Log::GetClientLogger()->error(__VA_ARGS__)
#define QT_CRITICAL(...)	  ::Quantum::Log::GetClientLogger()->critical(__VA_ARGS__)


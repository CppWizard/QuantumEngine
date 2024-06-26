#include "qtpch.h"
#include "Platform/OpenGL/OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>

namespace Quantum {

	OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
		: m_WindowHandle(windowHandle)
	{
		QT_CORE_ASSERT(windowHandle, "Window handle is null!")
	}

	void OpenGLContext::Init()
	{
		QT_PROFILE_FUNCTION();

		glfwMakeContextCurrent(m_WindowHandle);
		int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		QT_CORE_ASSERT(status, "Failed to initialize Glad!");

		QT_CORE_INFO("OpenGL Info:");
		QT_CORE_INFO("  Vendor: {0}", (char*)glGetString(GL_VENDOR));
		QT_CORE_INFO("  Renderer: {0}", (char*)glGetString(GL_RENDERER));
		QT_CORE_INFO("  Version: {0}", (char*)glGetString(GL_VERSION));

#ifdef QT_ENABLE_ASSERTS
		QT_CORE_ASSERT(GLVersion.major > 4 || (GLVersion.major == 4 && GLVersion.minor >= 5), "QuantumEngine requires at least OpenGL version 4.5!");
#endif
	}

	void OpenGLContext::SwapBuffers()
	{
		QT_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}

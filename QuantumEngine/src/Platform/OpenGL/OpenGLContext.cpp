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


		// Must include the casting char* to make it work
		QT_CORE_INFO("OpenGL Info:");
		QT_CORE_INFO("  Vendor: {0}", (char*)glGetString(GL_VENDOR));
		QT_CORE_INFO("  Renderer: {0}", (char*)glGetString(GL_RENDERER));
		QT_CORE_INFO("  Version: {0}", (char*)glGetString(GL_VERSION));

#ifdef HZ_ENABLE_ASSERTS
		int versionMajor;
		int versionMinor;
		glGetIntegerv(GL_MAJOR_VERSION, &versionMajor);
		glGetIntegerv(GL_MINOR_VERSION, &versionMinor);

		HZ_CORE_ASSERT(versionMajor > 4 || (versionMajor == 4 && versionMinor >= 5), "QuantumEngine requires at least OpenGL version 4.5!");
#endif
	}

	void OpenGLContext::SwapBuffers()
	{
		QT_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}

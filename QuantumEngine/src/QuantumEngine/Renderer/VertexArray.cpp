#include "qtpch.h"
#include "QuantumEngine/Renderer/VertexArray.h"

#include "QuantumEngine/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"

namespace Quantum {

	Ref<VertexArray> VertexArray::Create()
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:    QT_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
		case RendererAPI::API::OpenGL:  return CreateRef<OpenGLVertexArray>();
		}

		QT_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}

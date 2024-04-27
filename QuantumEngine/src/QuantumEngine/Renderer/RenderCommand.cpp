#include "qtpch.h"
#include "QuantumEngine/Renderer/RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace Quantum {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}

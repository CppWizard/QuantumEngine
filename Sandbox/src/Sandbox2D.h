#pragma once

#include "Quantum.h"

class Sandbox2D : public Quantum::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Quantum::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Quantum::Event& e) override;
private:
	Quantum::OrthographicCameraController m_CameraController;

	// Temp
	Quantum::Ref<Quantum::VertexArray> m_SquareVA;
	Quantum::Ref<Quantum::Shader> m_FlatColorShader;
	Quantum::Ref<Quantum::Framebuffer> m_Framebuffer;

	Quantum::Ref<Quantum::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};


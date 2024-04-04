#include "Sandbox2D.h"
#include <imgui/imgui.h>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

Sandbox2D::Sandbox2D()
	: Layer("Sandbox2D"), m_CameraController(1280.0f / 720.0f)
{
}

void Sandbox2D::OnAttach()
{
	QT_PROFILE_FUNCTION();

	m_CheckerboardTexture = Quantum::Texture2D::Create("assets/textures/Checkerboard.png");
}

void Sandbox2D::OnDetach()
{
	QT_PROFILE_FUNCTION();
}

void Sandbox2D::OnUpdate(Quantum::Timestep ts)
{
	QT_PROFILE_FUNCTION("Sandbox2D::OnUpdate");

	// Update
	m_CameraController.OnUpdate(ts);

	// Render
	{
		QT_PROFILE_SCOPE("Renderer Prep");
		Quantum::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1 });
		Quantum::RenderCommand::Clear();
	}

	{
		QT_PROFILE_SCOPE("Renderer Draw");
		Quantum::Renderer2D::BeginScene(m_CameraController.GetCamera());
		Quantum::Renderer2D::DrawQuad({ -1.0f, 0.0f }, { 0.8f, 0.8f }, { 0.8f, 0.2f, 0.3f, 1.0f });
		Quantum::Renderer2D::DrawQuad({ 0.5f, -0.5f }, { 0.5f, 0.75f }, { 0.2f, 0.3f, 0.8f, 1.0f });
		Quantum::Renderer2D::DrawQuad({ 0.0f, 0.0f, -0.1f }, { 10.0f, 10.0f }, m_CheckerboardTexture);
		Quantum::Renderer2D::EndScene();
	}
}

void Sandbox2D::OnImGuiRender()
{
	QT_PROFILE_FUNCTION();

	ImGui::Begin("Settings");
	ImGui::ColorEdit4("Square Color", glm::value_ptr(m_SquareColor));

	ImGui::End();
}

void Sandbox2D::OnEvent(Quantum::Event& e)
{
	m_CameraController.OnEvent(e);
}
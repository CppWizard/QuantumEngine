#include "qtpch.h"
#include "QuantumEngine/Scene/Entity.h"

namespace Quantum {

	Entity::Entity(entt::entity handle, Scene* scene)
		: m_EntityHandle(handle), m_Scene(scene)
	{
	}

}

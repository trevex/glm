///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-04-21
// Updated : 2011-04-26
// Licence : This source is under MIT licence
// File    : test/gtx/noise.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/noise.hpp>
#include <iostream>

int main()
{
	float ValueSNoise2D = glm::snoise(glm::vec2(0.5f));
    float ValueSNoise3D = glm::snoise(glm::vec3(0.5f));
    float ValueSNoise4D = glm::snoise(glm::vec4(0.5f));

	float ValueCNoise2D = glm::cnoise(glm::vec2(0.5f));
    float ValueCNoise3D = glm::cnoise(glm::vec3(0.5f));
    float ValueCNoise4D = glm::cnoise(glm::vec4(0.5f));
}

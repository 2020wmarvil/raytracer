#include <iostream>

#include <vec2.hpp>
#include <vec3.hpp>
#include <vec4.hpp>

int main() {
	cm::vec2<float> v(6, 3);

	std::cout << v.xx << std::endl;
	std::cout << v.yy << std::endl;
	std::cout << v.xy << std::endl;
	std::cout << v.yx << std::endl;
	std::cout << v.magnitude << std::endl;

	std::cin.get();
}
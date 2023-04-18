#include <iostream>
#include <cppcoro/task.hpp>
#include <cppcoro/generator.hpp>

cppcoro::generator<const std::uint64_t> fibonacci()
{
	std::uint64_t a = 0, b = 1;
	while (true)
	{
		co_yield b;
		auto tmp = a;
		a = b;
		b += tmp;
	}
}

void usage()
{
	for (auto i : fibonacci())
	{
		if (i > 1'000'000) break;
		std::cout << i << std::endl;
	}
}

int main () {
	usage();
}
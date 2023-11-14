#pragma once
class Singleton
{
protected:
	Singleton() = default;

public:
	Singleton& get_instance() {
		Singleton instance;

		if (instance == nullptr) {
			instance = Singleton();
		}
	}
};


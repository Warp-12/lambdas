
#pragma once
#include <chrono>
#include <functional>
#include <thread>

// void schedule(std::function<void()> func, std::chrono::seconds duration);
// void schedule(std::function<void(int)> func, std::chrono::seconds duration, int arg);
// void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string str, double arg);

template <typename T, typename... Arg>
void schedule(T func, std::chrono::seconds duration, Arg... args) {
    std::this_thread::sleep_for(duration);
    func(args...);
}

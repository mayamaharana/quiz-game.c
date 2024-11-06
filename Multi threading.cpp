
#include <iostream>
#include <thread>
#include <vector>

void process_data(int start, int end) {
    // Simulate data processing
    for (int i = start; i < end; ++i) {
        std::cout << "Processing data " << i << std::endl;
    }
}

int main() {
    const int num_threads = 4;
    const int data_size = 100;
    int chunk_size = data_size / num_threads;

    std::vector<std::thread> threads;
    for (int i = 0; i < num_threads; ++i) {
        threads.emplace_back(process_data, i * chunk_size, (i + 1) * chunk_size);
    }

    for (auto &thread : threads) {
        thread.join();
    }

    std::cout << "All data processed." << std::endl;
    return 0;
}
#include <iostream>
int main() {
    const int CAPACITY = 8;
    int window[CAPACITY] = {};
    int kept = 0;
    int count = 0;
    long long sum = 0;
    if (!(std::cin >> count)) return 1;
    for (int i = 0; i < count; ++i) {
        int value = 0;
        if (!(std::cin >> value)) return 1;
        int idx = i % CAPACITY;
        if (kept == CAPACITY) sum -= window[idx];
        else kept +=1;
        window[idx] = value;
        sum += value;
    }
    int last_idx   = (count - 1) % CAPACITY;
    int oldest_idx = (count - kept) % CAPACITY;
    std::cout << "kept="   << kept               << "\n";
    std::cout << "oldest=" << window[oldest_idx] << "\n";
    std::cout << "last="   << window[last_idx]   << "\n";
    std::cout << "sum="    << sum                << "\n";
    return 0;
}

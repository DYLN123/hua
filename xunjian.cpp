#include <iostream>
#include <string>

struct Record {
    std::string type;
    std::string status;
    int hours = 0;
};

int typeIndex(const std::string& type) {
    if (type == "printer") return 0;
    if (type == "scanner") return 1;
    if (type == "router")  return 2;
    if (type == "server")  return 3;
    return -1;
}

int main() {
    int n = 0;
    if (!(std::cin >> n)) return 1;

    int cnt[4] = {0, 0, 0, 0};
    int sum[4] = {0, 0, 0, 0};

    for (int i = 0; i < n; ++i) {
        Record r;
        std::cin >> r.type >> r.status >> r.hours;
        int idx = typeIndex(r.type);
        if (idx >= 0) {
            cnt[idx] += 1;
            sum[idx] += r.hours;
        }
    }

    const char* names[4] = {"printer", "scanner", "router", "server"};

    for (int i = 0; i < 4; ++i) {
        std::cout << names[i] << " " << cnt[i] << " " << sum[i] << "\n";
    }

    int best = 0;
    for (int i = 1; i < 4; ++i) {
        if (sum[i] > sum[best]) best = i;
    }
    std::cout << "busiest " << names[best] << "\n";

    return 0;
}

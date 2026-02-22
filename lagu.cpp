#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

// Function to animate text printing
void animateText(const std::string& text, double delay = 0.05) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(delay * 1000)));
    }
    std::cout << std::endl;
}

// Function to sing one lyric
void singLyric(const std::string& lyric, double delay, double speed, double lineDelay = 0) {
    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(delay * 1000)));
    animateText(lyric, speed);
    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(lineDelay * 1000)));
}

// Main function to sing the song
void singSong() {
    std::vector<std::pair<std::string, double>> lyrics = {
        {"Tante...", 0.08},
        {"Sudah terbiasa terjadi tante...", 0.09},
        {"Teman datang cuma kalo butuh saja...", 0.08},
        {"Coba kalau lagi susah...", 0.15},
        {"Mereka semua menghilaaaaang...", 0.15}
    };
    
    std::vector<double> delays = {0.3, 2.5, 5.8, 9.5, 13.5};
    
    std::vector<std::thread> threads;
    
    // Create and start threads for each lyric
    for (size_t i = 0; i < lyrics.size(); ++i) {
        threads.emplace_back(singLyric, lyrics[i].first, delays[i], lyrics[i].second, 0);
    }
    
    // Wait for all threads to finish
    for (auto& t : threads) {
        t.join();
    }
}

int main() {
    std::cout << "🎵 Memulai lagu... 🎵" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    
    singSong();
    
    std::cout << "\n🎵 Lagu selesai! 🎵" << std::endl;
    return 0;
}
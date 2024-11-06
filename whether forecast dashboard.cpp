
#include <iostream>
#include <vector>
#include <string>

struct Weather {
    std::string date;
    double temperature;
    double humidity;
    double windSpeed;
    std::string description;
};

void displayWeatherDashboard(const std::vector<Weather>& forecast) {
    std::cout << "================= Weather Forecast Dashboard =================\n";
    std::cout << "Date       | Temperature (°C) | Humidity (%) | Wind Speed (km/h) | Description\n";
    std::cout << "-----------------------------------------------------------------\n";

    for (const auto& weather : forecast) {
        std::cout << weather.date << " | " 
                  << weather.temperature << "°C          | "
                  << weather.humidity << "%         | " 
                  << weather.windSpeed << " km/h     | "
                  << weather.description << "\n";
    }

    std::cout << "=============================================================\n";
}

int main() {
    std::vector<Weather> forecast = {
        {"2024-11-05", 15.5, 80.0, 10.0, "Cloudy"},
        {"2024-11-06", 18.2, 65.0, 5.0, "Sunny"},
        {"2024-11-07", 12.8, 90.0, 20.0, "Rainy"},
        {"2024-11-08", 10.4, 85.0, 15.0, "Windy"},
    };

    displayWeatherDashboard(forecast);

    return 0 ;
    }
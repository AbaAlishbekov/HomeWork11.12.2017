#include "stdafx.h"
class City;
class Country;

//class Country {
//public:
//	std::vector<City> cities;
//
//};


class City {
public:
	City(std::string country, std::string name) {
		this->country = country;
		this->name = name;
	}

	std::string name;
	std::string country;
	


	friend std::ostream  &operator <<(std::ostream & stream,  City & city);
};


std::ostream  &operator <<(std::ostream & stream, City & city) {
	return stream << city.country << ' ' << city.name << std::endl;

}

class Manager {
public:
	std::vector<City> cities;

	Manager() {
		City city("USA", "NewYork");
		cities.push_back(city);
		City city1("USA", "Dalas");
		cities.push_back(city1);
		City city2("Kazakhstan", "Almaty");
		cities.push_back(city2);
		City city3("Kazakhstan", "Aktau");
		cities.push_back(city3);
		City city4("Russia", "Astrakhan");
		cities.push_back(city4);
		City city5("Russia", "Piter");
		cities.push_back(city5);
	}
	void WriteToFile() {
		std::ofstream out("countries.txt");
		std::for_each(cities.begin(), cities.end(), [&out]( City & city) {		
			if (out.is_open()){
				out << city;
			}
		});
		out.close();
	}
	void readFromFile() {
		std::ifstream in("countries.txt");

		if (in.is_open())
		{
			while (!in.eof()){
				std::string s;
				std::getline(in, s);
				if (s.empty())
				{
					return;
				}
				auto position = s.find_first_of(' ');
				cities.push_back(
					City(
					std::string{ s.begin(), s.begin() + position },
					std::string{ s.begin() + position + 1, s.end()}
				)
				);
			}
			

		}
	}

	void Filter(std::string country ) {
		std::for_each(cities.begin(), cities.end(), [&country](City & city) {
			if (country == city.country)
			{
				std::cout << city.name << std::endl;
			}
		});
		
	}

	friend std::ostream  &operator <<(std::ostream & stream,  Manager & manager);
};

std::ostream  &operator <<(std::ostream & stream,  Manager & manager) {
	std::for_each(manager.cities.begin(), manager.cities.end(), [&stream](City & city) {
	
		stream << city.country << ' ' << city.name << std::endl;
	});
	return stream;
}



int main() {
	Manager m;
	
	m.WriteToFile();
	m.Filter("Russia");
	system("pause");
	return 0;
}
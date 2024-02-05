#include <iostream>

int main() {
	setlocale(LC_ALL, "RUS");
	std::cout << "Гусеницы против Бамбука!\n";

	int passengers = 0;
	int passengersin;
	int passengersout;
	int totalpassengers = 0;
	
	int stationone = 0;
	int stationtwo = 0;
	int stationthree = 0;
	int stationfour = 0;

	int ticketprice = 20;
	int totalmoney = 0;
	int driversalary = 0;
	int fuelcosts = 0;
	int taxes = 0;
	int carrepaircosts = 0;
	int totalprofit = 0;


	std::cout << "мы прибываем на улицу: молюсков.в салоне пассажиров: " << passengers << "\n";
	std::cout << "сколько пассажирова вышло на остановке?";
	std::cin >> passengersout;
	std::cout << "сколько пассажирова зашло на остановке?";
	std::cin >> passengersin;
	passengers += passengersin - passengersout;
	totalpassengers += passengersin;
	std::cout << "отбываем с улицы молюсков.в салоне пассажиров: " << passengers << "\n";
	std::cout << "на станции молюсков зашло: " << stationone + passengersin << " людей. вышло: " << stationone + passengersout << "\n";
	std::cout << "---------едем-----------\n";

	std::cout << "мы прибываем на улицу: вишневскую.в салоне пассажиров: " << passengers << "\n";
	std::cout << "сколько пассажирова вышло на остановке?";
	std::cin >> passengersout;
	std::cout << "сколько пассажирова зашло на остановке?";
	std::cin >> passengersin;
	passengers += passengersin - passengersout;
	totalpassengers += passengersin;
	std::cout << "отбываем с улицы вишневской.в салоне пассажиров: " << passengers << "\n";
	std::cout << "на станции вишневской зашло: " << stationtwo + passengersin << " людей. вышло: " << stationtwo + passengersout << "\n";
	std::cout << "---------едем-----------\n";

	std::cout << "мы прибываем на улицу: тургенева.в салоне пассажиров: " << passengers << "\n";
	std::cout << "сколько пассажирова вышло на остановке?";
	std::cin >> passengersout;
	std::cout << "сколько пассажирова зашло на остановке?";
	std::cin >> passengersin;
	passengers += passengersin - passengersout;
	totalpassengers += passengersin;
	std::cout << "отбываем с улицы тургенева.в салоне пассажиров: " << passengers << "\n";
	std::cout << "на станции тургенева зашло: " << stationthree + passengersin << " людей. вышло: " << stationthree + passengersout << "\n";
	std::cout << "---------едем-----------\n";

	std::cout << "мы прибываем на улицу: лермонтова.в салоне пассажиров: " << passengers << "\n";
	std::cout << "сколько пассажирова вышло на остановке?";
	std::cin >> passengersout;
	std::cout << "сколько пассажирова зашло на остановке?";
	std::cin >> passengersin;
	passengers += passengersin - passengersout;
	totalpassengers += passengersin;
	std::cout << "отбываем с улицы лермонтова.в салоне пассажиров: " << passengers << "\n";
	std::cout << "на станции лермонтова зашло: " << stationfour + passengersin << " людей. вышло: " << stationfour + passengersout << "\n";

	
	std::cout << "---------конец-маршрута-----------\n";

	totalmoney = totalpassengers * ticketprice; 
	driversalary = totalmoney / 4; 
	fuelcosts = totalmoney / 5; 
	taxes = totalmoney / 5; 
	carrepaircosts = totalmoney / 5; 
	totalprofit = totalmoney - (driversalary + fuelcosts + taxes + carrepaircosts);

	
	std::cout << "всего заработали денег: " << totalmoney << "\n"; 
	std::cout << "зарплата водителя: " << driversalary << "\n";
	std::cout << "расходы на топливо: " << fuelcosts << "\n";
	std::cout << "налоги: " << taxes << "\n";
	std::cout << "расходы на ремонт машины: " << carrepaircosts << "\n";
	std::cout << "итого доход: " << totalprofit << "\n";
	std::cout << "Благодарю за использование!";
}	
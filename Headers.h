#pragma once

#include <iostream>
#include <fstream>
#include <SFML/Network.hpp>

using namespace std;

class advisory {

public:
	string id;
	int points;

	int easyChallengesCompleted;
	int mediumChallengesCompleted;
	int hardChallengesCompleted;
};
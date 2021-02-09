#pragma once

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <SFML/Network.hpp>

using namespace std;

class advisory {

public:
  string id, name;

  int grade, points, easyChallengesCompleted, mediumChallengesCompleted, hardChallengesCompleted;
};

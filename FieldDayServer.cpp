/*
NOTES TO SELF
 - Update advisory declarations to include name and grade
 - Update to match any portion of lowercase-d name, not exact match of ID
 - Get rid of ID, instead match portion of name

*/

#include "Headers.h"

// sf::TcpListener listener;
// sf::Packet packet;

// sf::TcpSocket socket;

advisory advisory1, advisory2, advisory3, advisory4, advisory5, advisory6, advisory7, advisory8, advisory9, advisory10, advisory11, advisory12, advisory13, advisory14, advisory15, advisory16, advisory17, advisory18, advisory19, advisory20, advisory21, advisory22, advisory23, advisory24, advisory25, advisory26, advisory27, advisory28, advisory29, advisory30;
advisory* curr = NULL;

string id, output;
char action[2] = "0";
int value;

int main()
{
  while (true)
  {
    // if (listener.listen(53000) != sf::Socket::Done)
    // {
    //   cout << "Error attempting socket hook on port 53000" << endl;
    // }

    // if (listener.accept(socket) != sf::Socket::Done)
    // {
    //   cout << "Error accepting socket" << endl;
    // }

    // socket.receive(packet);
    
    // if (packet >> id >> action >> value)
    // {
    //   // success
    // } else {
    //   cout << "Error reading: too much data" << endl;
    // }

    if (strncmp(action, "1", 2) == 0)  // Task
    {
      // Copy this line for each advisory
      if (id == "Griffin") { curr = &advisory1; }
      
      // Leave these lines once at the bottom
      curr->points += value;
      cout << "Added " << value << " points to " << curr->name << "'s grade " << curr->grade << " team." << endl;
    }

    else if (strcmp(action, "2") == 0)  // Check Scores
    {
      // socket.send(
      //   // Grade 5 advisories:
      //   advisory1.points +
      //   advisory2.points +
      //   advisory3.points +
      //   advisory4.points <<
        
      //   // Grade 6 advisories:
      //   advisory1.points +
      //   advisory2.points +
      //   advisory3.points +
      //   advisory4.points <<
        
      //   // Grade 7 advisories:
      //   advisory1.points +
      //   advisory2.points +
      //   advisory3.points +
      //   advisory4.points <<
        
      //   // Grade 8 advisories:
      //   advisory1.points +
      //   advisory2.points +
      //   advisory3.points +
      //   advisory4.points <<
      // );
    }
    else {
      cout << "Error reading: illegal action, action=" << action << ", required 1 or 2" << endl;
    }
    
  }
}

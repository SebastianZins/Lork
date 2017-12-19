#include "room.hh"

void defRooms(){
	Room r0_3("Wald", 0, 3);
	Room r0_4("Wald", 0, 4);
	Room r0_4("Wald", 0, 5);

	Room r1_1("Wald", 1, 1);
	Room r1_2("Wald", 1, 2);
	Room r1_3("dichter Wald", 1, 3);
	Room r1_4("Lichtung", 1, 4);
	Room r1_5("Wald", 1, 5);

	Room r2_1("Wiese", 2, 1);
	Room r2_2("Nord-Seite des Hauses", 2, 2);
	Room r2_3("Wald", 2, 3);
	Room r2_4("dichter Wald", 2, 4);
	Room r1_5("Wald", 2, 5);

	Room r3_1("West-Seite des Hauses", 3, 1);
	Room r3_2("Haus", 3, 2);
	Room r3_3("Ost-Seite des Hauses", 3, 3);
	Room r3_4("Wald", 3, 4);

	Room r4_1("Wiese", 4, 1);
	Room r4_2("Süd-Seite des Hauses", 4, 2);
	Room r4_3("Briefkasten", 4, 3);
	Room r4_4("Wiese", 4, 4);

	Room r5_1("Klippe", 5, 1);
	Room r5_2("Klippe", 5, 2);
	Room r5_3("Klippe", 5, 3);
	Room r5_4("Klippe", 5, 4);

	//    1 2 3 4 5		# = no "room"
	// 0| # # w w w 	w = Wald
	// 1| w w d l w 	d = dichter Wald
	// 2| g n w d w 	l = Lichtun
	// 3| W h e w # 	n/s/e/W = Hausseite
	// 4| g s b g # 	g = Wiese
	// 5| k k k k k 	k = Klippe
	//					b = Briefkasten
}

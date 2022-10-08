#include <iostream>

using namespace std;

class GameObject {
public:
	int health = 0;
	int damage = 0;
	int speed = 0;
	int defence = 0;
	string effect = ""; // weapon's special effect e.g bleed

	virtual void stab() = 0;
	virtual void slice() = 0;

	void setHealth(int t_health) { health = t_health; }
	void setDamage(int t_damage) { damage = t_damage; }
	void setDefence(int t_defence) { defence = t_defence; }
	void setSpeed(int t_speed) { speed = t_speed; }
};

class Hero : public GameObject {
public:
	Hero() { setHealth(30); }
	int damage = 0;
	int speed = 0;
	int defence = 0;
	string effect = "";

	void punch() { cout << "You: Fists of fury!" << endl; }
	void stab() { cout << "You: Have at thee" << endl; }
	void block() { cout << "You: You can't touch this" << endl; }
	void shieldBash() { cout << "You: stay back!" << endl; }
	void slice() { cout << "You: swoosh" << endl; }
	void smash() { cout << "You: bringing down the hammer of justice" << endl; }
	void cannonShot() { cout << "You: This will surely end you!" << endl; }

	void special() { cout << "You: time to die!" << endl; }

};

class Villain : public GameObject {
public:
	Villain() { setHealth(30), setDamage(4), setDefence(2), setSpeed(5); }

	string effect = "";

	void stab() { cout << "Baddie: Stabby stabby!" << endl; }
	void slice() { cout << "Baddie: I'll cut you up" << endl; }
};

void responce(int t_weapon);

GameObject* character = new Hero();

int main() {

	bool playing = true;
	bool swordUnlocked = false;
	bool ZweihanderUnlocked = false;
	bool sledgehammerUnlocked = false;
	bool glassCannonUnlocked = false;
	bool selected = false;
	int weapon;
	int sp = 0; // special points
	int wins = 0;

	for (; playing == true;)
	{
		cout << "-----------------------------------------------" << "\n"
			<< "Select a weapon:" << "\n"
			<< "1: None (shield only) (damage: 4, speed 7, defence: 5)" << "\n"
			<< "2: Knuckle dusters (damage: 6, speed 5, defence: 3)" << "\n"
			<< "3: Dagger + shield (damage: 3, speed 5, defence: 5 effect: Bleed)" << "\n";
		if (swordUnlocked)
		{
			cout << "4: Sword + shield (damage: 6, speed 5, defence: 5, effect: disarm)" << "\n";
		}
		else
		{
			cout << "4: Sword + shield (Locked)" << "\n";
		}
		if (ZweihanderUnlocked)
		{
			cout << "5: Zweihander (damage: 10, speed: 4, defence: 2)" << "\n";
		}
		else
		{
			cout << "5: Zweihander (Locked)" << "\n";
		}
		if (sledgehammerUnlocked)
		{
			cout << "6: sledgehammer (damage: 15, speed: 3, defence: 2)" << "\n";
		}
		else
		{
			cout << "6: sledgehammer (Locked)" << "\n";
		}
		if (glassCannonUnlocked)
		{
			cout << "7: Glass Cannon (damage: 50, speed 5, defence: 0 effect: one use)" << "\n";
		}
		else
		{
			cout << "7: Glass Cannon (Locked)" << "\n";
		}
		cout << "-----------------------------------------------" << "\n";
		cin >> weapon;

		for (; selected == false;)
		{
			switch (weapon)
			{
			case 1:
				character->damage = 4;
				character->speed = 7;
				character->defence = 5;
				character->effect = "none";
				selected = true;
				break;

			case 2:
				character->damage = 6;
				character->speed = 5;
				character->defence = 0;
				character->effect = "none";
				selected = true;
				break;

			case 3:
				character->damage = 3;
				character->speed = 5;
				character->defence = 5;
				character->effect = "bleed";
				selected = true;
				break;

			case 4:
				if (swordUnlocked)
				{
					character->damage = 6;
					character->speed = 5;
					character->defence = 3;
					character->effect = "disarm";
					selected = true;
					break;
				}
				else
				{
					cout << "Locked" << "\n";
					break;
				}

			case 5:
				if (ZweihanderUnlocked)
				{
					character->damage = 10;
					character->speed = 4;
					character->defence = 2;
					character->effect = "none";
					selected = true;
					break;
				}
				else
				{
					cout << "Locked" << "\n";
					break;
				}

			case 6:
				if (sledgehammerUnlocked)
				{
					character->damage = 15;
					character->speed = 3;
					character->defence = 2;
					character->effect = "none";
					selected = true;
					break;
				}
				else
				{
					cout << "Locked" << "\n";
					break;
				}

			case 7:
				if (glassCannonUnlocked)
				{
					character->damage = 50;
					character->speed = 5;
					character->defence = 0;
					character->effect = "oneUse";
					selected = true;
					break;
				}
				else
				{
					cout << "Locked" << "\n";
					break;
				}
			}
		}

		GameObject* baddie = new Villain();
		baddie->health += wins * 5;


		for (bool end = false; end == false;)
		{

			int totalDmgHero = 0; // how much damage the hero did that turn
			int totalDmgvillain = 0; // how much damage the villain did that turn
			int choice;
			// special points

			cout << "------------------------------" << "\n"
				<< "1: attack" << "\n"
				<< "2: defend: +1 sp" << "\n"
				<< "3: special (double damage + effect): sp needed: 3, current sp: " << sp << "\n"
				<< "------------------------------" << "\n"
				<< "\n";
			cin >> choice;
			cout << "\n";

			for (; choice > 0 && choice < 4;)
			{
				if (choice == 1) // attacking
				{

					if (character->speed >= baddie->speed)
					{
						responce(weapon);
						totalDmgHero = character->damage - baddie->defence / 4;
						baddie->health -= totalDmgHero;
						if (baddie->health <= 0)
						{
							baddie->damage = 0;
						}

						if (baddie->damage != 0)
						{
							((Villain*)baddie)->stab();
							totalDmgvillain = baddie->damage - (character->defence / 4);
							character->health -= totalDmgvillain;
						}
					}
					else
					{
						((Villain*)baddie)->stab();
						totalDmgvillain = baddie->damage - (character->defence / 4);
						character->health -= totalDmgvillain;
						if (character->health <= 0)
						{
							character->damage = 0;
						}

						if (character->damage != 0)
						{
							responce(weapon);
							totalDmgHero = character->damage - baddie->defence / 4;
							baddie->health -= totalDmgHero;
						}
					}

					if (character->effect == "oneUse" && baddie->health > 0)
					{
						cout << "You only had one shot, and you blew it";
						character->damage = 0;
					}
				}
				else if (choice == 2) // defend
				{
					sp++;
					((Hero*)character)->block();
					((Villain*)baddie)->slice();
					totalDmgvillain = baddie->damage - (character->defence / 2);
					character->health -= totalDmgvillain;
				}

				else if (choice == 3 && sp > 2) // special attack
				{
					if (character->speed / 2 >= baddie->speed)
					{
						((Hero*)character)->special();
						totalDmgHero = character->damage - baddie->defence / 4;
						baddie->health -= totalDmgHero;
						sp -= 3;
						if (baddie->health <= 0)
						{
							baddie->damage = 0;
						}

						if (baddie->damage != 0)
						{
							((Villain*)baddie)->stab();
							totalDmgvillain = baddie->damage - (character->defence / 4);
							character->health -= totalDmgvillain;
						}
					}
					else
					{
						((Villain*)baddie)->stab();
						totalDmgvillain = baddie->damage - (character->defence / 4);
						character->health -= totalDmgvillain;
						if (character->health <= 0)
						{
							character->damage = 0;
						}

						if (character->damage != 0)
						{
							((Hero*)character)->special();
							totalDmgHero = character->damage * 2 - baddie->defence / 3;
							baddie->health -= totalDmgHero;
							sp -= 3;
						}
					}

					if (character->effect == "bleed")
					{
						baddie->effect = "bleed";
					}
					else if (character->effect == "disarm")
					{
						baddie->damage /= 2;
					}
					else if (character->effect == "oneUse" && baddie->health > 0)
					{
						cout << "You only had one shot, and you blew it";
						character->damage = 0;
					}

					if (baddie->effect == "bleed" && character->health > 0)
					{
						baddie->health--;
						cout << "1 bleed damage" << "\n";
					}
				}
				else
				{
					cout << "Invalid choice" << "\n";
					break;
				}


				if (baddie->health <= 0)
				{
					end = true;
					character->health = 30;
					cout << "\n"
						<< "You Win!"
						<< "\n";
					wins++;
					switch (wins)
					{
					case 1:
						swordUnlocked = true;
						cout << "Sword unlocked" << "\n";
						break;
					case 2:
						ZweihanderUnlocked = true;
						cout << "Zweihander unlocked" << "\n";
						break;
					case 3:
						sledgehammerUnlocked = true;
						cout << "sledgehammer unlocked" << "\n";
						break;
					case 4:
						glassCannonUnlocked = true;
						cout << "Glass Cannon unlocked" << "\n";
						break;
					default:
						break;
					}
					break;
				}
				if (character->health <= 0)
				{
					end = true;
					character->health = 30;
					cout << "\n"
						<< "You Lose!"
						<< "\n";
					break;
				}

				cout << "\n"
					<< "------------------------------" << "\n"
					<< "You did: " << totalDmgHero << " damage" "\n"
					<< "Enemy did: " << totalDmgvillain << " damage" "\n"
					<< "\n"
					<< "Enemy has: " << baddie->health << " health left" "\n"
					<< "You have: " << character->health << " health left" "\n"
					<< "------------------------------" << "\n"
					<< "\n";
				choice = 0;
				system("cmd /C pause");
				cout << "\n";
			}
		}
	}
	cin.get();
}

void responce(int t_weapon)
{
	switch (t_weapon)
	{
	case 1:
		((Hero*)character)->shieldBash();
		break;
	case 2:
		((Hero*)character)->punch();
		break;
	case 3:
		((Hero*)character)->stab();
		break;

	case 4:
		((Hero*)character)->slice();
		break;

	case 5:
		((Hero*)character)->slice();
		break;

	case 6:
		((Hero*)character)->smash();
		break;

	case 7:
		((Hero*)character)->cannonShot();
		break;

	default:
		break;
	}
};

#include <iostream>

class Animal
{
private:
	int m_food;
	int m_weight;
	
public:
	void setAnimal(int food, int weight)
	{
		m_food = food;
		m_weight = weight;
	}

	void increaseFood(int inc)
	{
		m_food += inc;
		m_weight += (inc / 3);
	}

	void viewStat()
	{
		std::cout << "이 동물의 food : " << m_food << std::endl;
		std::cout << "이 동물의 weight: " << m_weight << std::endl;
	}
};

int mainStartClass()
{
	Animal animal;
	animal.setAnimal(100, 50);
	animal.increaseFood(30);
	animal.viewStat();
	return 0;
}
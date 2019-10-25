int main()
{
	bool health;
	health = false;

	if (health > 50)
	{
		int damage = 10;
		health = health - damage;
	}
	
	health = 100;

	{
		int damage = 20;
		health = health - damage;
	}
	return 0;
}

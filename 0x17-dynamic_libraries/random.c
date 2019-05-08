int rand()
{
	static int index = 0;
	int numbers[] = {0, 8, 8, 7, 9, 23, 74};
	
	index++;
	return (numbers[index]);
}

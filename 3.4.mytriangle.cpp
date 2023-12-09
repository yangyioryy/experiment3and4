bool is_valid(double side1, double side2, double side3)
{
	if (side1 > 0 && side2 > 0 && side3 > 0)
	{
		return 1;
	}
	return 0;
}
double is_area(double side1, double side2, double side3)
{
	if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2)
	{
		return 1;
	}
	return 0;
}
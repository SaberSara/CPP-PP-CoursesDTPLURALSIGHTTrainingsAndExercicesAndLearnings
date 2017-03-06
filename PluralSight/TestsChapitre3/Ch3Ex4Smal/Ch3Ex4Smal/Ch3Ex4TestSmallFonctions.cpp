double add(double x, double y)
{
	return x + y;
}

double add(double a, double b, double c)
{
	return a + b + c;
	// Or Return Add(Add(a,b),c);
}

bool test(bool x)
{
	return x;
}

bool test(double x)
{
	return x > 0;
}

///This 

void test( /* can add "void" in the place of the parameteres declarations */)
{
	return;
}
/// Or 

/// This 

//void test(void)
//{
//	return;
//}
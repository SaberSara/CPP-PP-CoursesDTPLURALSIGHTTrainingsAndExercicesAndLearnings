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

///The Compilator / \ \ The Compiler / \ \ The Compilator Doesn ' t Know If It Is A 3 For Number Float Double Or A 3 For A Boolean Function In The Overloads ANd Doesn ' t Know What To Choose On The OverLoad / \ \ OverLoads / \ \ OverLoad Is It The Bool Function Parameter Or The Double FUnction Parameter Or The Bool Function Parameter ... ETC ... Etc ... Etc 
/*if (test(3))
{
cout << " 3 Passes The Test " << endl;
}*/

///This 

//void test( /* can add "void" in the place of the parameteres declarations */)
//{
//	return;
//}

/// Or 

/// This 

void test(void)
{
	return;
}


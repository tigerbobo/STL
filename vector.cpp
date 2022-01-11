for (it = veci.begin(); it != veci.end(); )
	{
		if (0 == *it)
		{
			it = veci.erase(it);
		}
		else
		{
			++it;
		}
	}

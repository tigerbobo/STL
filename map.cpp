void example(void)
	{
		int id;
		std::string string;
		std::map<int, std::string> map;
		std::map<int, std::string>::iterator iterator;

		iterator = map.begin();
		if (iterator == map.end())
		{
			map[5] = "5555";
			map[6] = "6666";
			map[7] = "7777";
		}

		id = iterator->first;
		string = iterator->second;
	}

//Программа для изучения с++
#include <iostream>
#include <vector>
#include <algorithm>
////Словарь со списком запрещённых слов
//int main()
//{
//	std::vector<std::string> dwords {"cat", "jam"}; //Список запрещённых слов(СЗС)
//	std::vector<std::string> words;
//	for (std::string word; std::cin >> word;)
//	{
//		words.push_back(word);
//	}
//	std::cout << "Size: " << words.size() << std::endl;//Вывод кол-ва слов в словаре
//	std::sort(words.begin(), words.end());//Сортировка слов в словаре
//	for (int i = 0; i < words.size(); ++i)
//	{
//		if (i == 0 || words[i - 1] != words[i])
//		{
//			if (std::find(dwords.begin(), dwords.end(), words[i]) != dwords.end()) //Поиск соответствий с СЗС
//			{
//				std::cout << "BRUH\n";
//			}
//			else
//			{
//				std::cout << words[i] << std::endl;
//			}
//		}
//	}
//}
//int main()
//{
//	std::vector<double> i{ 0, 0 };
//	while (std::cin >> i[0] >> i[1])
//	{
//		std::sort(i.begin(), i.end());
//		if (i[0] == i[1])
//		{
//			std::cout << "Same\n";
//		}
//		else if ((int)((i[1]*100)/10) == ((int)(i[0]*100)/10))
//		{
//			std::cout << "Probably same\n";
//		}
//		else
//		{
//			std::cout << "Min: " << i[0] << " Max: " << i[1] << std::endl;
//		}
//	}
//}


////Преобразование длин
//int main()
//{
//	std::string s;
//	const double cm = 1;
//	const double m = 100 * cm;
//	const double in = 2.54 * cm;
//	const double ft = 12 * in;
//	double max = 0;
//	double min = 10000;
//	double z = 0;
//	double i = 0;
//	double amo = 0;
//	double sum = 0;
//	std::vector<double> num;
//	while (std::cin >> z >> s)
//	{
//		sort(num.begin(), num.end());
//		i = z;
//			
//			if (s == "cm")
//			{
//				if (z >= max)
//				{
//					max = z;
//					std::cout << "MAX: " << i << s << std::endl;
//				}
//				else if (z <= min)
//				{
//					min = z;
//					std::cout << "MIN: " << i << s << std::endl;
//				}
//				else
//				{
//					std::cout << i << s << std::endl;
//				}
//				sum += z / m;
//				++amo;
//				num.push_back(z / m);
//				std::cout << "Min: " << min << "cm  Max: " << max << "cm Amo: "
//					<< amo << " Sum: " << sum << "m\n" << "Numbers: ";
//				for (int ii = 0; ii < num.size(); ++ii)
//				{
//					std::cout << num[ii] << " ";
//				}
//			}
//			else if (s == "m")
//			{
//				if (z * m >= max)
//				{
//					max = z * m;
//					std::cout << "MAX: " << i << s << std::endl;
//				}
//				else if (z * m <= min)
//				{
//					min = z * m;
//					std::cout << "MIN: " << i << s << std::endl;
//				}
//				else
//				{
//					std::cout << i << s << std::endl;
//				}
//				sum += z;
//				++amo;
//				num.push_back(z);
//				std::cout << "Min: " << min << "cm  Max: " << max << "cm  Amo: "
//					<< amo << " Sum: " << sum << "m\n" << "Numbers: "; 
//				for (int ii = 0; ii < num.size(); ++ii)
//				{
//					std::cout << num[ii] << " ";
//				}
//			}
//			else if (s == "in")
//			{
//				if (z * in >= max)
//				{
//					max = z * in;
//					std::cout << "MAX: " << i << s << std::endl;
//				}
//				else if (z * in <= min)
//				{
//					min = z * in;
//					std::cout << "MIN: " << i << s << std::endl;
//				}
//				else
//				{
//					std::cout << i << s << std::endl;
//				}
//				sum += z*in / m;
//				++amo;
//				num.push_back(z*in / m);
//				std::cout << "Min: " << min << "cm  Max: " << max << "cm  Amo: " 
//					<< amo << " Sum: " << sum << "m\n" << "Numbers: "; 
//				for (int ii = 0; ii < num.size(); ++ii)
//				{
//					std::cout << num[ii] << " ";
//				}
//			}
//			else if(s == "ft")
//			{
//				if (z * ft >= max)
//				{
//					max = z * ft;
//					std::cout << "MAX: " << i << s << std::endl;
//				}
//				else if (z * ft <= min)
//				{
//					min = z * ft;
//					std::cout << "MIN: " << i << s << std::endl;
//				}
//				else
//				{
//					std::cout << i << s << std::endl;
//				}
//				sum += z*ft / m;
//				++amo;
//				num.push_back(z*ft / m);
//				std::cout << "Min: " << min << "cm  Max: " << max << "cm  Amo: " 
//					<< amo << " Sum: " << sum << "m\n" << "Numbers: ";
//				for (int ii = 0; ii < num.size(); ++ii)
//				{
//					std::cout << num[ii] << " ";
//				}
//			}
//			else
//			{
//				std::cout << "ERROR\n";
//			}
//	}
//}

//Программа угадывающая число от 1 до 100
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int x;
//	char c;
//	std::cout << "Загадайте число от 1 до 100\n";
//	std::cout << "Число больше 50? (y/n)\t";
//	std::cin >> c;
//	if (c == 'y')
//	{
//		std::cout << "Ваше число больше 75?\t";
//		std::cin >> c;
//		if (c == 'y')
//		{
//			std::cout << "Ваше число больше 87?\t";
//			std::cin >> c;
//			if (c == 'y')
//			{
//				std::cout << "Ваше число больше 93?\t";
//				std::cin >> c;
//				if (c == 'y')
//				{
//					std::cout << "Ваше число больше 96?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 98?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 100?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 100.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 99.\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 98?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 98.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 97.\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Ваше число больше 95?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Ваше число 96.\n";
//						}
//						else
//						{
//							std::cout << "Вы загадали число 94?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 94.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 95.\n";
//							}
//						}
//					}
//				}
//				else
//				{
//					std::cout << "Ваше число больше 91?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Вы загадали число 92?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Ваше число 92.\n";
//							std::cin >> c;
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Ваше число 93.\n";
//						}
//					}
//					else
//					{
//						std::cout << "Ваше число больше 89?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 90?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 90.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 91.\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 89?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 89.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 88.\n";
//							}
//						}
//					}
//				}
//			}
//			else
//			{
//				std::cout << "Ваше число больше 81?\t";
//				std::cin >> c;
//				if (c == 'y')
//				{
//					std::cout << "Ваше число больше 83?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 85?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Ваше число 87?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 87.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 86.\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 85?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 85.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 84.\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Вы загадали число 83?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Ваше число 83.\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Ваше число 82.\n";
//						}
//					}
//				}
//				else
//				{
//					std::cout << "Ваше число больше 77?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 79?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 80?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 80.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 81.\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 79?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 79.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Ваше число 78.\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Вы загадали число 77?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Ваше число 77.\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Ваше число 76.\n";
//						}
//					}
//				}
//			}
//		}
//		else
//		{
//			std::cout << "Ваше число больше 62?\t";
//			std::cin >> c;
//			if (c == 'y')
//			{
//				std::cout << "Ваше число больше 68?\t";
//				std::cin >> c;
//				if (c == 'y')
//				{
//					std::cout << "Ваше число больше 71?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 73?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Ваше число 74?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 74.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 75.\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 73?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 73.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 72.\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Ваше число больше 69?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 70?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 70.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 71.\n";
//							}
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 69.\n";
//						}
//					}
//				}
//				else
//				{
//					std::cout << "Ваше число больше 66?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Вы загадали число 67?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 67.\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 68.\n";
//						}
//					}
//					else
//					{
//						std::cout << "Ваше число больше 64?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 65?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 65.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 66.\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 64?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 64.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 63.\n";
//							}
//						}
//					}
//				}
//			}
//			else
//			{
//				std::cout << "Ваше число больше 56?\t";
//				std::cin >> c;
//				if (c == 'y')
//				{
//					std::cout << "Ваше число больше 60?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Вы загадали число 61?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 61.\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 62.\n";
//						}
//					}
//					else
//					{
//						std::cout << "Ваше число больше 58?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 59?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 59.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 60.\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 58?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 58.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 57.\n";
//							}
//						}
//					}
//				}
//				else
//				{
//					std::cout << "Ваше число больше 52?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 54?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 55?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 55.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 56.\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 54?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 54.\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 53.\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Вы загадали число 52?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 52.\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 51.\n";
//						}
//					}
//				}
//			}
//		}
//	}
//	else
//	{
//		std::cout << "Ваше число больше 25?\t";
//		std::cin >> c;
//		if (c == 'y')
//		{
//			std::cout << "Ваше число больше 37?\t";
//			std::cin >> c;
//			if (c == 'y')
//			{
//				std::cout << "Ваше число больше 43?\t";
//				std::cin >> c;
//				if (c == 'y')
//				{
//					std::cout << "Ваше число больше 46?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 48?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 49?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 49!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 50!\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 47?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 47!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 48\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Ваше число больше 45?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 46\n";
//						}
//						else
//						{
//							std::cout << "Вы загадали число 45?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 45\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 44\n";
//							}
//						}
//					}
//				}
//				else
//				{
//					std::cout << "Ваше число больше 39?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 41?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 42?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 42\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 43\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 41?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 41\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 40\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Вы загадали число 39?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 39\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 38\n";
//						}
//					}
//				}
//			}
//			else
//			{
//				std::cout << "Ваше число больше 29?\t";
//				std::cin >> c;
//				if (c == 'y')
//				{
//					std::cout << "Ваше число больше 33?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 35?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 36?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 36!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 37!\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 35?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 35!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 34!\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Ваше число больше 31?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 32?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 32!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 33!\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 31?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 31!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 30!\n";
//							}
//						}
//					}
//				}
//				else
//				{
//					std::cout << "Ваше число больше 27?\t";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Вы загадали число 28?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 28!\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 29!\n";
//						}
//					}
//					else
//					{
//						std::cout << "Вы загадали число 27?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 27!\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 26!\n";
//						}
//					}
//				}
//			}
//		}
//		else
//		{
//			std::cout << "Ваше число больше 12?";
//			std::cin >> c;
//			if (c == 'y')
//			{
//				std::cout << "Ваше число больше 18?";
//				std::cin >> c;
//				if (c == 'y')
//				{
//					std::cout << "Ваше число больше 22?";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 24?";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 25!\n";
//						}
//						else
//						{
//							std::cout << "Вы загадали число 24?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 24!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 23!\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Ваше число больше 20?";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 21?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 21!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 22!\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 20?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 20!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 19!\n";
//							}
//						}
//					}
//				}
//				else
//				{
//					std::cout << "Ваше число больше 14?";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 16?";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 17?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 17!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 18!\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 16?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 16!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 15!\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Вы загадали число 14?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 14!\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 13!\n";
//						}
//					}
//				}
//			}
//			else
//			{
//				std::cout << "Ваше число больше 6?";
//				std::cin >> c;
//				if (c == 'y')
//				{
//					std::cout << "Ваше число больше 8?";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 10?";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 11?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 11!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 12!\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 11?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 10!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 9!\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Вы загадали число 8?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 8!\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 7!\n";
//						}
//					}
//				}
//				else
//				{
//					std::cout << "Ваше число больше 2?";
//					std::cin >> c;
//					if (c == 'y')
//					{
//						std::cout << "Ваше число больше 4?";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "Вы загадали число 6?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 6!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 5!\n";
//							}
//						}
//						else
//						{
//							std::cout << "Вы загадали число 4?\t";
//							std::cin >> c;
//							if (c == 'y')
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 4!\n";
//							}
//							else
//							{
//								std::cout << "\tПоздравляю!\n Вы загадали число 3!\n";
//							}
//						}
//					}
//					else
//					{
//						std::cout << "Вы загадали число 2?\t";
//						std::cin >> c;
//						if (c == 'y')
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 2!\n";
//						}
//						else
//						{
//							std::cout << "\tПоздравляю!\n Вы загадали число 1!\n";
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//}


//Простой калькулятор
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	double x = 0;
//	double y = 0;
//	char c = 'a';
//	std::cout << "Введите два числа, а затем символ операции(+,-,*,/)\n";
//	std::cin >> x >> y >> c;
//	switch (c)
//	{
//	case('+'):
//		std::cout << "Сумма " << x << " и " << y << " равна " << x + y << std::endl;
//		break;
//	case('-'):
//		std::cout << "Разность " << x << " и " << y << " равна " << x - y << std::endl;
//		break;
//	case('/'):
//		std::cout << "Частное " << x << " и " << y << " равно " << x / y << std::endl;
//		break;
//	case('*'):
//		std::cout << "Произведение " << x << " и " << y << " равно " << x * y << std::endl;
//		break;
//	default:
//		std::cout << "Ошибка! Неверный знак!\n";
//	}
//	system("pause");
//}


//Перевод строковых названий в цифры
//int main()
//{
//	std::vector<std::string> na = { "zero","one","two","three","four","five","six","seven","eight","nine" };
//	std::vector<std::string> n1 = { "0","1","2","3","4","5","6","7","8","9" };
//	int ni = 0;
//	std::string n = "@";
//	while (std::cin >> n)
//	{
//		ni = 0;
//		for (ni; ni < 10; ++ni)
//		{
//			if (na[ni] == n)
//			{
//				std::cout << n << " = " << n1[ni] << std::endl;
//			}
//			else if (n1[ni] == n)
//			{
//				std::cout << n << " = " << na[ni] << std::endl;
//			}
//		}
//	}
//}


//Камень, ножницы, бумага
//int main()
//{
//	std::vector<char> rps = { 'r', 'p', 's' };
//	char c = '!';
//	int i = 0;
//	while (std::cin >> c)
//	{
//		++i;
//		if (i > 2)
//		{
//			i /= 2;
//		}
//		switch (c)
//		{
//		case 'r':
//			switch (rps[i])
//			{
//			case 'r':
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tDRAW!\n";
//				break;
//			case 'p':
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tYOU LOSE!\n";
//				break;
//			case 's' :
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tYOU WIN!\n";
//				break;
//			}
//			break;
//		case 'p':
//			switch (rps[i])
//			{
//			case 'p':
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tDRAW!\n";
//				break;
//			case 's':
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tYOU LOSE!\n";
//				--i;
//				break;
//			case 'r':
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tYOU WIN!\n";
//				++i;
//				break;
//			}
//			break;
//		case 's':
//			switch (rps[i])
//			{
//			case 's':
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tDRAW!\n";
//				break;
//			case 'r':
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tYOU LOSE!\n";
//				--i;
//				break;
//			case 'p':
//				std::cout << "P1: " << c << " COM: " << rps[i] << "\n\tYOU WIN!\n";
//				++i;
//				break;
//			}
//			break;
//		}
//	}
//}


//Нахождение простых чисел с помощью функции
//int prime(int x)
//{
//	int count = 0;
//	for (int i = 1; i <= x; ++i)
//	{
//		if (x % i == 0)
//		{
//			++count;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	std::vector<int> primen = { 1 };
//	int max = 0;
//	std::cin >> max;
//	for (int num = 1; num <= max; ++num)
//	{
//		if (prime(num) == 2)
//		{
//			primen.push_back(num);
//		}
//	}
//	std::cout << "\nPrime numbers: ";
//	for (int i1 = 0; i1 < primen.size(); ++i1)
//	{
//		std::cout << " " << primen[i1];
//	}
//
//}


////Нахождение простых чисел по принципу решета Эратосфена
//int main()
//{
//	std::vector<int> prime;
//	int n = 10000;
//	int m = 0;
//	int  i2 = 0;
//	while (std::cin >> m)
//	{
//		i2 = 1;
//		for (int i = 1; i <= n; ++i)
//		{
//			prime.push_back(i);
//		}
//		std::cout << "\nPrime numbers: ";
//		for (int i = 2; i < n; ++i)
//		{
//			for (int j = i * i; j <= n; j += i)
//			{
//				prime[j-1] = 0;
//			}
//		}
//		for (int i1 = 0; i1 < prime.size(); ++i1)
//		{
//			
//			if (prime[i1] != 0 && i2 <= m)
//			{
//				std::cout << " " << prime[i1];
//				++i2;
//			}
//		}
//		std::cout << std::endl;
//		prime.clear();
//	}
//}


////Решение квадратного уравнения
//int main()
//{
//	double a, b, c, D;
//	while (std::cin >> a >> b >> c)
//	{
//		D = b * b - 4 * a * c;
//		if (D > 0)
//		{
//			std::cout << "D = " << D << " x1 = " << -b + sqrt(D) << " x2 = " << -b - sqrt(D) << std::endl;
//		}
//		else if (D == 0)
//		{
//			std::cout << "D = " << D << " x = " << -b + sqrt(D) << std::endl;
//		}
//		else
//		{
//			std::cout << "D = " << D << " Корней нет" << std::endl;
//		}
//	}
//}



//Обработка ошибок
//class Bad_x { };
//class Bad_y { };
//
//double count(double x, double y)
//{
//	if (x <= 0) throw Bad_x{};
//	if (y == 0) throw Bad_y{};
//	return sqrt(x) / y;
//}
//
//void error(std::string s)
//{
//	throw std::runtime_error(s);
//}
//
//double f()
//{
//	double d = 0;
//	std::cin >> d;
//	if (!std::cin)
//		error(" Can't read d" " in 'f()' ");
//	return d;
//}
//
//int main()
//try {
//	f();
//	std::vector<int> v = { 1,2,3,4 };
//	double x = 0;
//	double  y = 0;
//	std::cin >> x >> y;
//	std::cout << count(x, y) << std::endl;
//	std::cout << v.at(x);
//}
//catch (Bad_x) {
//	std::cerr << " X <= 0\n";
//	return 1;
//}
//catch (Bad_y) {
//	std::cerr << " Y = 0\n";
//	return 2;
//}
//catch (std::exception& e) {
//	std::cerr << "error: " << e.what() << '\n';
//	return 6;
//}
//catch (std::out_of_range) {
//	std::cerr << "Out of range\n";
//	return 3;
//}
//catch (std::runtime_error& e) {
//	std::cerr << "runtime_error: " << e.what() << '\n';
//	return 4;
//}
//catch (...) {
//	std::cerr << "Unknown error\n";
//	return 5;
//}


////Преобразование температуры из K в C
//void error(std::string s)
//{
//	throw std::runtime_error(s);
//}
//double temp(double c)
//{
//	if (c < -273.15) error("temp < 0K\n");
//	double k = 0;
//	k = c + 273.15;
//	return k;
//}
//int main()
//try {
//	double c = 0;
//	double k = 0;
//	std::cin >> c;
//	if (!std::cin) error("error cin c");
//	std::cout << c << "C = " << temp(c) << "K\n";
//	system ("pause");
//	return 0;
//}
//catch (std::exception& e) {
//	std::cerr << "Error: " << e.what() << '\n';
//	system("pause");
//	return 1;
//}
//catch (...) {
//	std::cerr << "Unknown exception!\n";
//	system("pause");
//	return 2;
//}



////Последовательность Фибоначи
//int main()
//{
//	std::vector<int> v = { 0,1 };
//	for (int i = 0; i != 45; ++i)
//	{
//		v.push_back(v[v.size() - 1] + v[v.size() - 2]);
//		std::cout << i << "\t" << v[i] << "\n";
//	}
//}






//Калькулятор(calculator)
#include <cmath>



void error(std::string s)
{
	throw std::runtime_error(s);
}																//вЫвод сообщений об ошибке
void error(std::string s1, std::string s2)
{
	throw std::runtime_error(s1 + s2);
}

class token {
public:
	char sim;
	double num;
	std::string name;
	token(char ch) : sim(ch), num(0) {}							//Класс передающий символ и значение
	token(char ch, double val) : sim(ch), num(val) {}
	token (char ch, std::string n)	:sim(ch), name(n) {}
};


class token_stream {
public:
	token_stream();
	token get();
	void putback(token t);
	void ignore(char c);										//Класс обрабатывающий поток данных
private:
	bool full;
	token buffer;
	
};



token_stream::token_stream()
		:full(false) , buffer (0)
{
}

void token_stream::putback(token t)
{
	if (full) error("Buffer is full");
	buffer = t;
	full = true;
}

void token_stream::ignore(char c)
{
	if (full && c == buffer.sim)
	{
		full = false;
		return;
	}
	full = false;
	char ch = 0;
	while (std::cin >> ch)
		if (ch == c) return;
}

const char number = '8';
const char quit = 'q';  //Выход из программы
const char print = ';'; //Выполнить(ставить после каждой команды)
const std::string result = "= ";	//Присвоение значения переменной				Лексемы и ключевые слова
const char name = 'a';
const char let = 'L';	
const std::string declkey = "let";	//Объявление переменной (Пример: let x = 10;)

token token_stream::get()					//Функция считывающая символы из потока
{
	if (full) {	full = false;	return buffer;	}
	char ch;
	std::cin >> ch;
	switch (ch)
	{
	case print: case quit: case'(':case')':case'*':case'/':case'+':case'-':
	case'{':case'}':case'!':case'%':case'=':
		return token(ch);
		
	case'.':case'0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
	{
		std::cin.putback(ch);
		double val;
		std::cin >> val;
		return token(number, val);
	}
	default:
		if (isalpha(ch))
		{
			std::string s;
			s += ch;
			while (std::cin.get(ch) && (isalpha(ch) || isdigit(ch)))
				s += ch;
			std::cin.putback(ch);
			if (s == declkey) return token(let);

			return token(name, s);
		}
		error("Неправильная лексема");
	}
}

class Variable {								//Класс работающий с переменными
public:
	std::string name;
	double value;
	Variable (std::string n, double v)	:name(n), value(v) { }
};

std::vector<Variable> var_table;

void set_value(std::string s, double d)										//Присваивание значения определённой переменной(не используется)
{
	/*for (int i = 0; i < var_table.size(); ++i)
	{
		if (var_table[i].name == s)
		{
			var_table[i].value = d;
			return;
		}
		error("set: неопределённая переменная ", s);
	}*/
	for ( Variable& v : var_table)
		if (v.name == s) {
			v.value = d;
			return;
		}
	error("set: неопределённая переменная ", s);
}

double get_value(std::string s)												//Использование значения определённой переменной
{
	/*for (int i = 0; i < var_table.size(); ++i)
	{
		if (var_table[i].name == s)
		{
			return var_table[i].value;
		}
		error("get: неопределённая переменная ", s);
	}*/
	for (const Variable& v : var_table)
		if (v.name == s) return v.value;
	error("get: неопределённая переменная ", s);
}

bool is_declared(std::string var)
{
	/*for (int i = 0; i < var_table.size(); ++i)
	{
		if (var_table[i].name == var)
		{
			return true;
		}
		return false;
	}*/
	for (const Variable& v : var_table)
		if (v.name == var) return true;
	return false;
}

double define_name(std::string var, double val)
{
	if (is_declared(var))
	{
		error(var, " уже обьявлена.");
	}
	var_table.push_back(Variable(var, val));
	return val;
}

token_stream ts;
double expression();

double declaration()								//Объявление переменных
{
	token t = ts.get();
	if (t.sim != name) error("В объявлении ожидается переменная name");
	std::string var_name = t.name;

	token t2 = ts.get();
	if (t2.sim != '=') error("В объявлении пропущен символ =", var_name);

	double d = expression();
	define_name(var_name, d);
	return d;
}

double statement()									//Подключение переменных
{
	token t = ts.get();
	switch (t.sim) {
	case let:
		return declaration();
	default:
		ts.putback(t);
		return expression();
	}
}



double primary()		//Первичная работа с выражением, вычесление !,(),{}, обработка отрицательных чисел
{
	token t = ts.get();
	token f = ts.get();
	int i = 1;
	if (f.sim == '!')
	{
		if (t.num == 0)	return 1;
		return std::tgamma(t.num+1);
	}
	else
	{
		ts.putback(f);
	}
	switch (t.sim)
	{
	case'(':
	{
		double d = expression();
		t = ts.get();
		if (t.sim != ')') error(") not find");
		t = ts.get();
		if (t.sim == '!')
		{
			d = tgamma(d+1);
		}
		else ts.putback(t);
		return d;
	}
	case'{':
	{
		double d = expression();
		t = ts.get();
		if (t.sim != '}') error("} not find");
		return d;
	}
	case number:
		return t.num;	//Возвращаем число
	case '-':
		return -primary();
	case '+':
		return primary();
	case name:
		return get_value(t.name);
	default:
		error("Numbers not find");
	}
}

double term()				//Вычисление *,/,%
{
	double left = primary();
	token t = ts.get();
	while (true)
	{
		switch (t.sim)
		{
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case'/':
		{
			double d = primary();
			if (d == 0) error("/: деление на ноль");
			left /= d;
			t = ts.get();
			break;
		}
		case'%':
		{
			double d = term();
			int i1 = int(left);
			if (i1 != left) error("слева от % не целое число");
			int i2 = int(d);
			if (i2 != d) error("справа от % не целое число");
			if (i2 == 0) error("%: деление на ноль");
			left = i1 % i2;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);
			return left;
		}
	}
}

double expression()				//Вычисление +,-
{
	double left = term();
	token t = ts.get();
	while (true)
	{
		switch (t.sim)
		{
		case '+':
			left += term();
			t = ts.get();
			break;
		case '-':
			left -=term();
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

void calculate()			//Основная функция, запуск вычислений + ключевые слова
{
	double val = 0;
	while (std::cin)
	try{
		token t = ts.get();
		while (t.sim == print) t = ts.get();
		if (t.sim == quit) return;
		ts.putback(t);
		std::cout << result << statement() << std::endl;
 		/*if (t.sim == quit)				//ver. 1
		{
			std::cout << "Quit\n";
			break;
		}
		if (t.sim == print)
		{
			std::cout << result << val << '\n';
			val = 0;
		}
		
		else
		{
			ts.putback(t);
			val = expression();
		}*/
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << '\n';
		clean_up_mess();
	}
}
int main()
try
{
	setlocale(LC_ALL, "Russian");
	define_name("pi", 3.1415926535);				//Блок константных переменных
	define_name("e", 2.7182818284);
	std::cout << "Ключевые слова:" << std::endl 
		<< "; - выполнить(ставить после каждой команды)(Пример: 10!+3;) " << std::endl
		<< "q - выход из программы " << std::endl										//UI
		<< "let - объявление переменной (Пример: let x = 10;)" << std::endl;
	calculate();
	system("pause");
	return 0;
}
catch (std::exception& e) {
	std::cerr << "Error: " << e.what() << '\n';
	clean_up_mess();
}
catch (...) {
	std::cerr << "Unknown exception!\n";
	system("pause");
	return 2;
}





//Разбор числа по разрядам

//void error(std::string s)
//{
//	throw std::runtime_error(s);
//}
//
//int main() try
//{
//	setlocale(LC_ALL, "Russian");
//	std::vector<std::string> v510 = { "сотен тысяч", "десятков тысяч", "тысяч", "сотен", "десятков", "едениц" };
//	std::vector<std::string> v1 = { "сотня тысяч", "десяток тысяч", "тысячя", "сотня", "десяток", "еденица" };
//	std::vector<std::string> v24 = { "сотни тысяч", "десятка тысяч", "тысячи", "сотени", "десятка", "еденицы" };
//	std::string d = " ";
//	std::vector<int> num;
//	std::cout << "Эта Программа раскладывает число по разрядам\n"
//		<< "Пожалуйста введите целое число : ";
//	while (std::cin >> d)
//	{
//		for (int i = 0; i < d.size(); ++i)
//		{
//			num.push_back(d[i] - '0');
//			if (num[num.size() - 1] > 9)
//			{
//				error("Некорректный ввод");
//			}
//		}
//		if (d.size() > v1.size())
//		{
//			error("Числа больше 999 999 пока не поддерживаются.");
//		}
//		std::cout << d << " - это ";
//		for (int i = 0; i < d.size(); ++i)
//		{
//			
//			if (num[i] == 1) 
//			{
//				std::cout << num[i] << " " << v1[v1.size() - d.size() + i] << " ";
//			}
//			if (num[i] > 4 || num[i] == 0)
//			{
//				std::cout << num[i] << " " << v510[v1.size() - d.size() + i] << " ";
//			}
//			if (num[i] > 1 && num[i] < 5)
//			{
//				std::cout << num[i] << " " << v24[v1.size() - d.size() + i] << " ";
//			}
//			if (i == d.size() - 2) std::cout << " и ";
//			else if (i == d.size() - 1) std::cout << ".\n" << "\nПожалуйста введите целое число : ";
//			else std::cout << ", ";
//		}
//		num.clear();
//	}
//	system("pause");
//	return 0;
//}
//
//catch (std::exception& e) {
//	std::cerr << "Error: " << e.what() << '\n';
//	system("pause");
//	return 1;
//}
//catch (...) {
//	std::cerr << "Unknown exception!\n";
//	system("pause");
//	return 2;
//}





//Тест сборки нескольких файлов


//Разработка класса

//class Name_pairs {
//public:
//	std::vector<std::string> name;
//	std::vector<double> age;
//	std::vector<std::string> name_db;
//	std::vector<double> age_temp;
//	Name_pairs(std::vector<std::string> s, std::vector<double> d) :
//		name(s), age(d) {};
//
//	Name_pairs()
//	{
//		name = { }, age = { };
//	}
//	void read_names();
//	void read_ages();
//	void print();
//	void sort();
//};
//
//void Name_pairs::read_names()
//{
//	std::string s;
//	while (std::cin >> s && s != ";")
//	{
//		name.push_back(s);
//	}
//	name_db = name;
//	std::cout << '\n';
//}
//
//void Name_pairs::read_ages()
//{
//	double d;
//	while (age.size() != name.size())
//	{
//		std::cout << name[age.size()] << " ";
//		std::cin >> d;
//		age.push_back(d);
//	}
//	age_temp = age;
//	std::cout << '\n';
//}
//
//void Name_pairs::print()
//{
//	for (int i = 0; i < name.size(); i++)
//	{
//		/*int search = 0;
//		for (int j = 0; j < name.size(); j++)
//		{
//			if (name[i] == name_db[j])						sort ver. 1
//			{
//				std::cout << name[i] << " " << age[i] << '\n';
//			}
//		}*/
//		std::cout << name[i] << " " << age[i] << '\n';
//	}
//	std::cout << '\n';
//}
//
//bool operator== (const Name_pairs& a, const Name_pairs& b)
//{
//	return a.name == b.name && a.age == b.age;
//}
//
//bool operator!= (const Name_pairs & a, const Name_pairs & b)
//{
//	return !(a == b);
//}
//
//std::ostream& operator<< (std::ostream& os, const Name_pairs& s)
//{
//	for (int i = 0; i < s.name.size(); i++)
//	{
//		os << s.name[i] << " " << s.age[i] << '\n';
//	}
//	os << '\n';
//	return os;
//}
//
//void Name_pairs::sort()
//{
//	std::sort(name.begin(), name.end());
//	for (int i = 0; i < name.size(); i++)
//	{
//		for (int j = 0; j < name.size(); j++)
//		{
//			if (name[i] == name_db[j])
//			{
//				age_temp[i] = age[j];		//ver. 2
//			}
//		}
//	}
//	age = age_temp;
//}
//
//int main()
//{
//	Name_pairs s;
//	s.read_names();
//	s.read_ages();
//	std::cout << s;
//	system("pause");
//}


//Каталог библиотеки

//class Book
//{
//public:
//	class ISBN {
//	public:
//		int country, pubcode, unum, chkd;
//		ISBN(int co, int pu, int u, int ch) :
//			country(co), pubcode(pu), unum(u), chkd(ch) {};
//		ISBN()
//		{
//			country = 0;
//			pubcode = 0;
//			unum = 0;
//			chkd = 0;
//		}
//	};
//
//	class Date {
//	public:
//		int dd, mm, yy;
//		Date(int d, int m, int y) :
//			dd(d), mm(m), yy(y) {};
//		Date()
//		{
//			dd = 0;
//			mm = 0;
//			yy = 0;
//		}
//	};
//
//	enum class Genre
//	{
//		none, Myth, Fantasy, Poem, For_childe, autobiografy,
//	};
//
//	Book(std::string b, std::string a, Genre gg, ISBN i, Date d, bool t) :
//		bname(b), aname(a), genre(gg), isbn(i), date(d), take(t) {};
//	Book()
//	{
//		static Book a(bname = "-", aname = "-", genre = Genre::none , isbn, date, take = 0);
//	}
//
//	std::string bname, aname;
//	Genre genre;
//	ISBN isbn;
//	Date date;
//	bool take;
//};
//
//std::ostream& operator<< (std::ostream& o, const Book::ISBN& i)
//{
//	return o << i.country << "-" << i.pubcode << "-" << i.unum << "-" << i.chkd;
//}
//
//std::istream& operator>> (std::istream& i, Book::ISBN& is)
//{
//	i >> is.country >> is.pubcode >> is.unum >> is.chkd;
//	return i;
//}
//
//std::ostream& operator<< (std::ostream& o, const Book::Date& d)
//{
//	return o << d.dd << "." << d.mm << "." << d.yy;
//}
//
//std::istream& operator>> (std::istream& i, Book::Date& d)
//{
//	i >> d.dd >> d.mm >> d.yy;
//	return i;
//}
//
//std::ostream& operator<< (std::ostream &os, const Book &b)
//{
//	return os << b.bname << '\t' << b.aname << '\t' << static_cast<int>(b.genre) << '\t' << b.isbn << '\t' << b.date << '\t' << b.take << '\n';
//}
//
//std::istream& operator>> (std::istream& is, Book& b)
//{
//	std::string g;
//	is >> b.bname >> b.aname >> g >> b.isbn >> b.date >> b.take;
//
//	return is;
//}
//
//int main()
//{
//	Book book;
//	std::cout << book << '\n';
//	std::cin >> book;
//	std::cout << book << '\n';
//	system("pause");
//}


//Потоки ввода и вывода
//#include <fstream>
//
//struct Reading {
//	int hour;
//	double tempr;
//	Reading(int h, double t) : hour(h), tempr(t) {}
//};
//
//void fill_vector(std::istream& ist, std::vector<int>& v, char terminator)
//try {
//	int i = 0;
//	//while (ist >> i)	v.push_back(i);	ver.1
//	for (int i; ist >> i;) v.push_back(i);    //ver.2
//		if (ist.eof()) return;
//		if (ist.bad()) ist.exceptions(ist.exceptions() | std::ios_base::badbit);
//		if (ist.fail())
//		{
//			ist.clear();
//			char c;
//			ist >> c;
//			if (c != terminator) {
//				ist.unget();
//				
//				ist.clear(std::ios_base::failbit);
//			}
//		}
//}
//
//catch (std::exception& x)
//{
//	std::cerr << x.what() << '\n';
//}
//
//int main()
//{
//	std::vector<int> v;
//
//	std::string iname = "D:\\ist.txt";
//	std::ifstream ist{ iname };
//	if (!ist) std::cout << "error:ist";
//	std::string oname = "D:\\result.txt";
//	std::ofstream ost{ oname };
//	if (!ost) std::cout << "error:ost";
//	fill_vector(ist, v, '*');
//	for (int i = 0; i < v.size(); ++i)
//	{
//		ost << i + 1 << ". " << v[i] << '\n';
//	}
//	/*
//	
//	std::vector<Reading> temps;
//	int hour;
//	double temprs;
//	while (ist >> hour >> temprs)
//	{
//		if (hour < 0 || 23 < hour)	std::cout << "error: hour";
//		temps.push_back(Reading(hour, temprs));
//	}
//	for (int i = 0; i < temps.size(); ++i)
//	{
//		ost << '(' << temps[i].hour << ", " << temps[i].tempr << ")\n";
//	}*/
//	system("pause");
//	return 0;
//}


////Class Points and io
//
//#include <fstream>
//class Points {
//public:
//	double x, y;
//	Points(double xx, double yy) :
//		x(xx), y(yy) {};
//};
//
//bool issame_vp(std::vector<Points>& p1, std::vector<Points>& p2)		//Сравнение векторов точек
//{
//	if (p1.size() != p2.size()) return false;
//	for (int i = 0; i < p1.size(); i++)
//	{
//		if (p1[i].x != p2[i].x || p1[i].y != p2[i].y) return false;
//	}
//	return true;
//}
//
//int main()
//{
//	std::vector<Points> original_points;
//	Points p{0.0, 0.0};
//	while (original_points.size() < 7)
//	{
//		std::cin >> p.x >> p.y;
//		original_points.push_back(p);
//	}
//	/*for (int i = 0; i < original_points.size(); i++) { std::cout << original_points[i].x << " " << original_points[i].y << '\n'; }*/
//	std::string name = "D:\\mydata.txt";
//	std::ofstream ost{ name };
//	if (!ost) std::cout << "Error open ost\n";
//	for (int i = 0; i < original_points.size(); i++)
//	{
//		ost << original_points[i].x << " " << original_points[i].y << '\n';
//	}
//	ost.close();
//	std::ifstream ist{name};
//	if (!ist) std::cout << "Error open ist\n";
//	std::vector<Points> processed_points;
//	while (ist >> p.x >> p.y)
//	{
//		/*ist >> p.x;*/	//проверка issame_vp
//		processed_points.push_back(p);
//	}
//	std::cout << "1\n";
//	for (int i = 0; i < original_points.size(); i++) { std::cout << original_points[i].x << " " << original_points[i].y << '\n'; }
//	std::cout << "2\n";
//	for (int i = 0; i < processed_points.size(); i++) { std::cout << processed_points[i].x << " " << processed_points[i].y << '\n'; }
//	if (!issame_vp(original_points, processed_points)) std::cout << "Something is wrong!\n";
//	system("pause");
//	return 0;
//}
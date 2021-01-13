#include <iostream>
#include <vector>
//void swap_cr(const int& a, const int& b)
//{
//	int temp; temp = a; a = b; b = temp;
//	std::cout << a << " cr " << b << '\n';
//}
//namespace X	{
//	static int var;
//	static void print()
//	{
//		std::cout << var << std::endl;
//	}
//}
//
//namespace Y {
//	static int var;
//	static void print()
//	{
//		std::cout << var << std::endl;
//	}
//}
//
//namespace Z {
//	static int var;
//	static void print()
//	{
//		std::cout << Z::var << std::endl;
//	}
//}

//static void print(std::string s, std::vector<int> v)
//{
//	std::cout << s << '\n';
//	for (int i = 0; i < v.size(); ++i)
//	{
//		std::cout << v[i] << " ";
//	}
//	std::cout << '\n';
//}
//
//static void fibonacci(int x, int y, std::vector<int>& v, int n) //max n = 45
//{
//	v.push_back(x);
//	v.push_back(y);
//	int temp;
//	for (int i = 0; i < n - 2; ++i)
//	{
//		temp = x + y;
//		v.push_back(temp);
//		x = y;
//		y = temp;
//	}
//}
//
//static std::vector<int> swap_v(std::vector<int> v)
//{
//	std::vector<int> vc;
//	for (int i = v.size() - 1; i >= 0; --i)
//	{
//		vc.push_back(v[i]);
//	}
//	return vc;
//}
//
//static void swap_r(std::vector<int>& v)
//{
//	int b, e;
//	for (b = 0, e = v.size() - 1; e >= b; --e, ++b)
//	{
//		std::swap(v[b], v[e]);
//	}
//}
//
//static std::vector<std::string> swap_v(std::vector<std::string> v)
//{
//	std::vector<std::string> vc;
//	for (int i = v.size() - 1; i >= 0; --i)
//	{
//		vc.push_back(v[i]);
//	}
//	return vc;
//}
//
//static void swap_r(std::vector<std::string>& v)
//{
//	int b, e;
//	for (b = 0, e = v.size() - 1; e >= b; --e, ++b)
//	{
//		std::swap(v[b], v[e]);
//	}
//}
//
//static void print_s(std::vector<std::string> s)
//{
//	for (int i = 0; i < s.size(); ++i)
//	{
//		std::cout << s[i] << " ";
//	}
//	std::cout << '\n';
//}
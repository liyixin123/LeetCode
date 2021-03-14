//
// Created by lyx on 2021/3/14.
//
#include <iostream>
#include <vector>
#include <list>
class MyHashSet
{
private:
	std::vector<std::list<int>> data;
	static const int base{ 769 };

	static int hash(int key){
		return key % base;
	}
public:
	/** Initialize your data structure here. */
	MyHashSet():data(base)
	{

	}

	void add(int key)
	{
		int h = hash(key);
		for (auto iterator = data[h].begin(); iterator != data[h].end(); ++iterator)
		{
			if (*iterator == key)
			{
				return;
			}
		}
		data[h].push_back(key);
	}

	void remove(int key)
	{
		int h = hash(key);
		for (auto iterator = data[h].begin(); iterator != data[h].end(); ++iterator)
		{
			if (*iterator == key)
			{
				data[h].erase(iterator);
				return;
			}
		}
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key)
	{
		int h = hash(key);
		for (auto iterator = data[h].begin(); iterator != data[h].end(); ++iterator)
		{
			if (*iterator == key)
			{
				return true;
			}
		}
		return false;
	}
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

int main()
{
	auto* obj = new MyHashSet();
	obj->add(1);
	obj->add(2);
	obj->remove(2);


	std::cout << obj->contains(1) << std::endl;
}
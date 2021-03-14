//
// Created by lyx on 2021/3/14.
//
#include <vector>
#include <list>

class MyHashMap
{
private:
	std::vector<std::list<std::pair<int, int>>> data;
	static const int base = 769;

	static int hash(int key)
	{
		return key % base;
	}

public:
	/** Initialize your data structure here. */
	MyHashMap() : data(base)
	{

	}

	/** value will always be non-negative. */
	void put(int key, int value)
	{
		int h = hash(key);
		for (auto iterator = data[h].begin(); iterator != data[h].end(); ++iterator)
		{
			if ((*iterator).first == key)
			{
				iterator->second = value;
				return;
			}
		}
		data[h].push_back(std::make_pair(key, value));
	}

	/** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
	int get(int key)
	{
		int h = hash(key);
		for (auto iterator = data[h].begin(); iterator != data[h].end(); ++iterator)
		{
			if (iterator->first == key)
			{
				return iterator->second;
			}
		}
		return -1;
	}

	/** Removes the mapping of the specified value key if this map contains a mapping for the key */
	void remove(int key)
	{
		int h = hash(key);
		for (auto iterator = data[h].begin(); iterator != data[h].end(); ++iterator)
		{
			if (iterator->first == key)
			{
				data[h].erase(iterator);
				return;
			}
		}
	}
};

int main()
{
	/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
}
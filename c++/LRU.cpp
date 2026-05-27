class LRUCache
{
private:
    list<pair<int, int>> myList;
    unordered_map<int, list<pair<int, int>>::iterator> myMap;
    int Capacity;

public:
    LRUCache(int capacity) : Capacity{capacity}, myMap(capacity)
    {
    }

    int get(int key)
    {
        auto it = myMap.find(key);
        if (it == myMap.end())
            return -1;
        auto listNodeIt = it->second;
        int value = listNodeIt->second;
        myList.splice(myList.begin(), myList, listNodeIt);
        return value;
    }

    void put(int key, int value)
    {
        if (myMap.find(key) != myMap.end())
        {
            auto it = myMap.find(key)->second;
            it->second = value;
            myList.splice(myList.begin(), myList, it);
            return;
        }

        if (myMap.size() == Capacity)
        {
            int oldestKey = myList.back().first;
            myMap.erase(oldestKey);
            myList.pop_back();
        }
        myList.push_front({key, value});
        myMap[key] = myList.begin();
    }
};


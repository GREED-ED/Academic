#include <iostream>
#define SIZE 10
using namespace std;
int hash(int key) //to calculate the hash value
{
    return key % SIZE;
}
int probe(int H[], int key)// Function to probe for the next available slot
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != 0)
        i++;
    return (index + i) % SIZE;
}
void insert(int H[], int key)// Function to insert a key into the hash table using linear probing
{
    int index = hash(key);
    if (H[index] != 0)
        index = probe(H, key);
    H[index] = key;
}
// Function to search for a key in the hash table
int search(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != key)
        i++;
    return (index + i) % SIZE;
}
// Function to display the contents of the hash table
void displayTable(int H[])
{
    cout << "Hash Table:" << endl;
    for (int i = 0; i < SIZE; ++i)
	{
        cout << i << ": ";
        if (H[i] != 0)
		{
            cout << H[i];
        }
        cout << endl;
    }
}
int main()
{
    int hashTable[SIZE] = {0};
    insert(hashTable, 12);
    insert(hashTable, 25);
    insert(hashTable, 35);
    insert(hashTable, 26);
    insert(hashTable, 45);
    insert(hashTable, 36);
    displayTable(hashTable);
    int keyToFind = 36;
    int foundIndex = search(hashTable, keyToFind);
    if (foundIndex != -1)
	{
        cout << "Key " << keyToFind << " found at index " << foundIndex << endl;
    } 
	else
	{
        cout << "Key " << keyToFind << " not found in the hash table." << endl;
    }
    return 0;
}


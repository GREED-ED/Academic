//to display the moves in Tower of Hanoi problem for user input no of disk.
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) // Function to solve Tower of Hanoi for 'n' disks
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\tTower of Hanoi problem"<<endl;
    cout<<"\t\t************************************"<<endl;
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;
    cout << "Tower of Hanoi moves for " << numDisks << " disks:" << endl;
    towerOfHanoi(numDisks, 'A', 'B', 'C');
    return 0;
}

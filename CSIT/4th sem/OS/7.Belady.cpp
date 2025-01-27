#include <iostream>
#include <iomanip>
using namespace std;
bool isPresent(int frames[], int nFrame, int page)
{
    for (int i = 0; i < nFrame; ++i) {
        if (frames[i] == page) {
            return true;
        }
    }
    return false;
}
void display(const int frames[], int nFrame, const string& status) 
{
    for (int i = 0; i < nFrame; ++i) 
    {
        if (frames[i] != -1)
            cout << setw(5) << frames[i];
        else
            cout << setw(5) << "-";
    }
    cout << setw(15) << status;
    cout << endl;
}
int FIFOPageReplacement(int ref[], int nPage, int nFrame) 
{
    int frames[nFrame];
    int pageFaults = 0;
    int index = 0;
    for (int i = 0; i < nFrame; ++i) 
    {
        frames[i] = -1;
    }
    cout << setw(15) << "Reference";
    for (int i = 0; i < nFrame; ++i) 
    {
        cout << setw(5) << "F" << (i + 1);
    }
    cout << setw(10) << "Status" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < nPage; ++i) 
    {
        int currentPage = ref[i];
        string status;
        if (!isPresent(frames, nFrame, currentPage)) 
        {
            status = "Page fault";
            frames[index] = currentPage;
            index = (index + 1) % nFrame;
            pageFaults++;
        } else 
            status = "No fault";
        cout << setw(15) << currentPage;
        display(frames, nFrame, status);
    }
    return pageFaults;
}
int main() 
{
    int nPage;
    cout << "*************** Belady's Anomaly ******************" << endl << endl;
    cout << "Enter the number of pages in the reference string: ";
    cin >> nPage;
    int ref[nPage];
    cout << "Enter the page reference string: ";
    for (int i = 0; i < nPage; ++i) 
    {
        cin >> ref[i];
    }
    int startFrame, endFrame;
    cout << "Enter the minimum number of frames: ";
    cin >> startFrame;
    cout << "Enter the maximum number of frames: ";
    cin >> endFrame;
    for (int nFrame = startFrame; nFrame <= endFrame; ++nFrame) 
    {
        cout << "\nNumber of frames: " << nFrame << endl;
        int pageFaults = FIFOPageReplacement(ref, nPage, nFrame);
        cout << "Total Page Faults with " << nFrame << " frames: " << pageFaults << endl;
    }
    cout << endl<<"Compiled By: Prashan Shrestha." << endl;
    return 0;
}


// overlap rates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    float  rate1, rate2, rate3, overlap_min, overlap_sec, overlap_deg;
    int  choice, no_start_pos, dif_pos;
    vector<int> start;
    cout << "Do you want to see the where the clock overlaps or do you want to make your own rates?\n1] Own\n2] Clock\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "What is the first rate of movement (deg/h)?\n";
        cin >> rate1;
        cout << "What is the second rate of movement (deg/h, faster(bigger) then the first)?\n";
        cin >> rate2;
        cout << "What is the third rate of movement (deg/h)?\n";
        cin >> rate3;
        cout << "How many regular starting positions are there?\n";
        cin >> no_start_pos;
        cout << "What is the step between positions?\n";
        cin >> dif_pos;
        break;

    default:
        rate1 = 30;
        rate2 = 360;
        rate3 = 0.1;
        no_start_pos = 12;
        dif_pos = 1;
        break;
    }
    for (int i = 0; i < no_start_pos; i+=dif_pos)
    {
        start.push_back(i);
    }
    float rrate = (rate2 - rate1) / rate1;
    for (int i = 0; i < start.size(); i ++)
    {
        overlap_min = start.at(i) * 60 / rrate;
        overlap_sec = overlap_min * 60;
        overlap_deg = overlap_sec * rate3;
        cout << "Min=" << overlap_min << "; Sec=" << overlap_sec << "; Deg=" << overlap_deg <<endl;
    }
    
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

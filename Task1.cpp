/*************************************************************************************
В кинотетре каждый билет стоит 5$. Покупатели стоят в очереди и покупают по одному
 билету за раз. Каждый покупатель может заплатить купюрами в 5$, 10$ и 20$.
 Если покупатель заплатил больше за билет, то ему выдается сдача.
 Необходимо определить, возможно ли корректно выдать сдачу всем покупателям.

В начале денег в кассе нет.
***************************************************************************************/

#include <iostream>
#include <string>

using namespace std;
int main(void)
{
    int ans = 0;

    int n;
    cin >> n;

    int change_counter[] = {0, 0};  // change_counter[0] - 5, [1] - 10
    int current_cash;

    for(int i = 0; i < n; i++)
    {
        cin >> current_cash;
        if(current_cash == 5)
        {
            change_counter[0]++;
        }
        else if (current_cash == 10)
        {
            if(change_counter[0] > 0)
            {
                change_counter[0]--;
                change_counter[1]++; 
            }
            else
            {
                ans = -1;
                break;
            }
        }
        else if (current_cash == 20)
        {
            if(change_counter[1] > 0 && change_counter[0] > 0)
            {
                change_counter[0]--;
                change_counter[1]--;
            }
            else if(change_counter[0] > 2)
            {
                change_counter[0] -= 3;
            }
            else
            {
                ans = -1;
                break;
            }
        }

    }

    string answer = (ans == 0) ? "True" : "False";

    cout << answer << endl;
        
	return 0;
}

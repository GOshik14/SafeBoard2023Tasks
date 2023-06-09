/*************************************************************************************
Дана последовательность h содержащая n целых числел высот. 
На кординатной плоскости нарисовано n вертикальных линий,
 i-й элемент определяет линию от точки (i, 0) до точки (i, h[i]).
 Найдите две линии, которые образуют вместе с осью x "контейнер",
 который может содержать наибольшее количество "двумерной воды" так,
 чтобы она не выливалась за его пределы. Контейнер наклонять нельзя.
 ***************************************************************************************/
 
#include <iostream>
#include <string>

using namespace std;
int main(void)
{
    long n;
    cin >> n;

    long *heights = new long[n];
    for(size_t i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    long max = 0;
    long val = 0;
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            long tmp_min = (heights[i] <= heights[j]) ? heights[i] : heights[j];
            val = tmp_min  * (j - i);
            if (val > max)
            {
                max = val;
            }
            
        }
        
    }

    cout <<  max << endl;

    delete[] heights;

    
	return 0;
}
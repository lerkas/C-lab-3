int getSumMaxMin(int arr[],int N)

{
    int i, min = 0, max = 0, sum = 0;

    for (i = 1; i < N; i++)
    {
        if(arr[i] < arr[min])           //идём по массиву и запоминаем _индексы_ наибольших и наименьших встреченных значений
            min = i;
    else if(arr[i] > arr[max])
            max = i;
    }

    if (min > max)                      //проверяем, не оказалось ли минимальное значение больше максимального
    {
        i = min; min = max; max = i;    //если да, меняем их местами
    }

    for (i = min + 1; i < max; i++)     //определяем диапазон пригодных для значения чисел
        sum +=arr[i];                   //последовательно складываем числа

    return sum;
}

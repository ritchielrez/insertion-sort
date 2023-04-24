#ifndef INSERTION_SORT_INCLUDED
#define INSERTION_SORT_INCLUDED

void swap_ints(int &num1, int &num2);
void insertion_sort(int arr[], int l, int h);

#endif // INSERTION_SORT_INCLUDED

#ifdef INSERTION_SORT_DEFINITION

void swap_ints(int &num1, int &num2)
{
    if (num1 != num2)
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }
}

void insertion_sort(int arr[], int l, int h)
{
    for (int i = 1; i < h; ++i)
    {
        int j{i};
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap_ints(arr[j], arr[j - 1]);
            j = j - 1;
        }
    }
}

#endif

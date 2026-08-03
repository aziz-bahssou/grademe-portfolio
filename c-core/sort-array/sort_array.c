void sort_array(int *tab, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j;
    unsigned int temp;

    while(i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if(tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <iostream>
#include <vector>

// Sarah Sookoo
std::vector<int> merge(std::vector<int> one, std::vector<int> two)
{
    std::vector<int> result;
    while (one.size() > 0 || two.size() > 0)
    {

        if (one.size() > 0 && two.size() > 0)
        {
            if (one[0] <= two[0])
            {
                result.push_back(one[0]);
                one.erase(one.begin());
            }
            else
            {
                result.push_back(two[0]);
                two.erase(two.begin());
            }
        }
        else if (one.size() > 0)
        {
            for (int i = 0; i < one.size(); i++)
                result.push_back(one[i]);
            break;
        }
        else if (two.size() > 0)
        {
            for (int i = 0; i < two.size(); i++)
                result.push_back(two[i]);
            break;
        }
    }
    return result;
}

// Tommy Liang
std::vector<int> msort(std::vector<int> a)
{
    if (a.size() < 2)
        return a;
    std::vector<int> fhalf;
    std::vector<int> shalf;
    int mid = (a.size() + 1) / 2;
    //separate array into two pieces
    if (a.size() > 1)
    {
        for (int i = 0; i < (a.size() + 1) / 2; i++)
            fhalf.push_back(a[i]);
        for (int i = (a.size() + 1) / 2; i < a.size(); i++)
            shalf.push_back(a[i]);
        //need to sort the two arrays
        fhalf = msort(fhalf);
        shalf = msort(shalf);
        return merge(fhalf, shalf);
    }
    else
        return a;
}

int main()
{
    std::vector<int> v1 = {5, 24, 3, 7, 45, 2, 1, 6, 57};
    std::vector<int> v2 = {9, 1, 5, 16, 2, 64, 5};
    v1 = msort(v1);
    v2 = msort(v2);
    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < v2.size(); i++)
    {
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> v3 = merge(v1, v2);

    for (int i = 0; i < v3.size(); i++)
    {
        std::cout << v3[i] << " ";
    }
    std::cout << std::endl;
}
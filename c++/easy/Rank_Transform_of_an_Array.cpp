// task №1331

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map <int, int> p; // создаю мапу с названием p которой передаю 2 интовых параметра
        vector <int> arr2 = arr; // новый массив с сортировкой

        sort(arr2.begin(), arr2.end()); // сортирую массив от меньшего к большему
        arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end()); //удаляю дубликаты

        /*  добавляю в созданную ранее мапу элементы таким образом:
        "arr2[i]" - элемент нашего массива i. (первым будет 11 тк он 0 индекса в отсортированном массиве)
        и присваиваю ключу "11", значение "i + 1" тоесть наш ранг. */
        for (int i = 0; i < arr2.size(); i++) { 
            p[arr2[i]] = i + 1;
        }

        // заменяю значения нашего основного массива рангами
        for (int i = 0; i < arr.size(); i++) { 
            arr[i] = p[arr[i]]; // первая иттерация - "40 = 4" т.к. ранее мы ключу 40 присвоили значение 3)
        } 
    return arr;
    }
};


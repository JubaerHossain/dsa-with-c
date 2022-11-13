e (left <= mid && mid <= r)
        {
            if (arr[left] < arr[middle])
            {
                temp[start] = arr[left];
                left++;
            }
            else
            {
                temp[start] = arr[middle];
                middle++;
            }
            start++;
        }
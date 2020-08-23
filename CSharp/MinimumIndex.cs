/*

Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of favorite restaurants represented by strings.

You need to help them find out their common interest with the least list index sum. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.

Example 1:
Input:
["Shogun", "Tapioca Express", "Burger King", "KFC"]
["Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"]
Output: ["Shogun"]
Explanation: The only restaurant they both like is "Shogun".
Example 2:
Input:
["Shogun", "Tapioca Express", "Burger King", "KFC"]
["KFC", "Shogun", "Burger King"]
Output: ["Shogun"]
Explanation: The restaurant they both like and have the least index sum is "Shogun" with index sum 1 (0+1).
Note:
The length of both lists will be in the range of [1, 1000].
The length of strings in both lists will be in the range of [1, 30].
The index is starting from 0 to the list length minus 1.
No duplicates in both lists.

*/


public class Solution {
    public string[] FindRestaurant(string[] list1, string[] list2) {
        Dictionary<string, int> restaurants = new Dictionary<string, int>();
        //Dictionary<string, int> result = new Dictionary<string, int>();
        List<string> results = new List<string>();
        int min = 2001;
        for(int i=0; i<list1.Length; i++)
        {
           restaurants.Add(list1[i], i);
        }
        
        for(int j=0; j<list2.Length; j++)
        {
            if(!restaurants.ContainsKey(list2[j]))
                continue;
            else 
            {
                int indexSum = restaurants[list2[j]] + j;
                if(indexSum < min)
                {
                    min = indexSum;
                    results.Clear();
                    results.Add(list2[j]);
                }
                else if(indexSum == min)
                    results.Add(list2[j]);
            }
        }
        
        string[] final = new string[results.Count];
        for(int i=0; i< results.Count; i++)
            final[i] = results[i];
        
        return final;
    }
}


/* 

How can you make this more optimal? 
- If the arrays are of different length, find the smaller array; traverse and store into the dictionary. 
How can you solve this without the additional data structures?
- Nested For loops, O(n^2) complexity
Time Complexity of this?
- O(n) the worst case scenario, we traverse all the elements in both the arrays
*/
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;  ///stack store indices of histogram
        int max_area=0;
        int index=0;

        while(index<heights.size()){
            ///if stack is empty or,
            ///if current height is greater than its previous(index stored in stack), push its index in stack
            if(s.empty() || heights[index]>=heights[s.top()]){
                s.push(index);
                index++;
            }
            else{
                int top=s.top();   ///storing the index before poping (to calculate area)
                s.pop();

                int area;
                ///calculate area of the popped element
                if(s.empty()){
                    area=heights[top]*index;
                }else{
                    area=heights[top]*(index-s.top()-1);
                }

                max_area=max(max_area,area);
            }
        }

        ///calculating area for the leftout elements in the stack

        while(!s.empty()){
            int top=s.top();
            s.pop();

            int area;
            if(s.empty()){
                area=heights[top]*index;
            }else{
                area=heights[top]*(index-s.top()-1);
            }
            max_area=max(max_area,area);
        }

        return max_area;
    }
};

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>student_choice;
        int j=0;
        int rotation=0;
        int size=students.size();
        for(int i=0;i<size;i++)
        {
            student_choice.push(students[i]);
        }
       
       
        while(student_choice.size() &&  rotation< student_choice.size())
        {
            if(student_choice.front()==sandwiches[j])
            {
                student_choice.pop();
                j++;
                rotation=0;
               
            }
            else
            {
                int ch=student_choice.front();
              
                student_choice.pop();
                  student_choice.push(ch);
                 rotation++;
                
                
            }
        }
        return student_choice.size();
      
        
        
    }
};
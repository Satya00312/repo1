
# include <string.h>
#include<conio.h>    
typedef struct {
  char name[26];
  char id[9];
  int project[2];
  int exam[2];
  char grade;
  int average;
  int idNum;
} STUDENT;
                
void printUnsorted(int size, STUDENT stuAry[]);
void sortAry(int size, STUDENT stuAry[]); 
                
                
int main(void)  
{
  STUDENT stuAry[51];
   
  FILE* f = fopen("records.ssv", "r");
  if (f== NULL) {
    printf("Error opening file %s.\n", "records.ssv");
    return 1;
  }

  char line[100];
  int ind = 0;
  while (fgets(line, sizeof(line), f) != NULL) {
    sscanf(line, "%25[^;]; %[^;]; %d; %d; %d; %d; %c ",
                &stuAry[ind].name,
                &stuAry[ind].id,
                &stuAry[ind].exam[0],
                &stuAry[ind].exam[1],
                &stuAry[ind].project[0],  
                &stuAry[ind].project[1],
                &stuAry[ind].grade);
                
     ind++;
  }
   
  for (int i=0; i<ind; i++) {
                stuAry[i].average = (stuAry[i].exam[0] + stuAry[i].exam[1] + stuAry[i].project[0] +
                stuAry[i].project[1]) / 4;
  }

  printUnsorted(ind, stuAry);
  sortAry(ind, stuAry);
  
  char gradeChoice;
  printf("Enter grade letter to search (q to quit):");
  scanf("%c", &gradeChoice);
  while(gradeChoice != 'q'){
        if(gradeChoice != 'A' || gradeChoice != 'B' || gradeChoice != 'C' || gradeChoice != 'D' || gradeChoice != 'F'){
                printf("ERROR and enter again (A, B, C, D, or F (q to quit)):");
                scanf("%c", &gradeChoice);
                    break;
        }else{
                //Binary Search
        }
  }
           
  if (fclose(f) == EOF) {
    printf("Error closing file %s.\n", "records.ssv");
    return 1;
  }



return 0;
}
  
void printUnsorted(int size, STUDENT stuAry[])
{
  printf("\nOriginal: \n              Student Name    Identification\t  Exam 1   Exam 2   Project 1   Project 2   Average   Grade\n");
  printf("=============================================================================================================\n");
  for (int i=0; i<size; i++) {
    printf("%26s\t   %s\t  %d\t   %d\t    %d\t        %d\t    %d\t      %c\n",
           stuAry[i].name,
           stuAry[i].id,
           stuAry[i].exam[0],
           stuAry[i].exam[1],
           stuAry[i].project[0],
           stuAry[i].project[1],
           stuAry[i].average,
           stuAry[i].grade);
  }
} 
  
void sortAry(int size, STUDENT stuAry[])
{
        for (int i=0; i<size; i++) {
                stuAry[i].average = (stuAry[i].exam[0] + stuAry[i].exam[1] + stuAry[i].project[0] +
                                stuAry[i].project[1]) / 4;
        }
  
        int largest, largestExam1, largestExam2, largestProject1, largestProject2;
        char largestName[26]; 
        char largestId[9];
        char largestGrade;
           
        for(int current = 0; current < size; ++current){
                for(int walk = current + 1; walk < size; ++walk){
                        if(stuAry[current].average < stuAry[walk].average){
                                //store in largest
                                largest = stuAry[current].average;
                                largestExam1 = stuAry[current].exam[0];
                                largestExam2 = stuAry[current].exam[1];
                                largestProject1 = stuAry[current].project[0];
                                largestProject2 = stuAry[current].project[1];
                                strcpy(largestName, stuAry[current].name);
                                strcpy(largestId, stuAry[current].id);
                                largestGrade = stuAry[current].grade;
                
                                //change order
                                stuAry[current].average = stuAry[walk].average;
                                stuAry[current].exam[0] = stuAry[walk].exam[0];
                                stuAry[current].exam[1] = stuAry[walk].exam[1];   
                                stuAry[current].project[0] = stuAry[walk].project[0];
                                stuAry[current].project[1] = stuAry[walk].project[1];
                                strcpy(stuAry[current].name, stuAry[walk].name);
                                strcpy(stuAry[current].id, stuAry[walk].id);
                                stuAry[current].grade = stuAry[walk].grade;
                
                                //put into other spot
                                stuAry[walk].average = largest;
                                stuAry[walk].exam[0] = largestExam1;
                                stuAry[walk].exam[1] = largestExam2;   
                                stuAry[walk].project[0] = largestProject1;
                                stuAry[walk].project[1] = largestProject2;   
                                strcpy(stuAry[walk].name, largestName);
                                strcpy(stuAry[walk].id, largestId);
                                stuAry[walk].grade = largestGrade;
                        }
                }
        }
        printf("\nSorted:\n");
        printf("Index\t            Student Name     Identification\t Exam 1   Exam 2   Project 1   Project 2   Average   Grade\n");
        printf("==================================================================================================================\n");
        for(int i = 0; i < size; i++){
                stuAry[i].idNum = i+1;
                printf("%5d %26s\t  %s\t %d\t  %d\t   %d\t       %d\t   %d\t     %c\n",
                        stuAry[i].idNum, stuAry[i].name, stuAry[i].id, stuAry[i].exam[0],
                        stuAry[i].exam[1], stuAry[i].project[0], stuAry[i].project[1],
                        stuAry[i].average, stuAry[i].grade);
        }

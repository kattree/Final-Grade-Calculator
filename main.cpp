#include <cstdio>
#include <cstdlib>

void finalGradeCalculator(){
   char* input = new char[6];
  printf("What do you currently have in the class?(No percent sign please <3 )");
  fgets(input,5,stdin);
  float grade = atoi(input);
  printf("What would you like to get in the class?");
   fgets(input,5,stdin);
  float want = atoi(input);
  printf("Your final is worth what percent of the class?");
   fgets(input,5,stdin);
  float finale = atoi(input);
  finale /= 100;

  float need = (grade*(1-finale)-want)/-finale;
  printf("You need a %f percent on the final to get a %f in the class", need, want);
}

int main() {
 
  finalGradeCalculator();
}

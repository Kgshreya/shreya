//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    char items[10];
//    //open a file for reading and writing ("r+" mode).
//    FILE *file = fopen("example.txt","r+");
//
//    if (file == NULL)
//    {
//        //check if file opened successfully.
//        printf("error opening file for writing.\n");
//        return 1;
//    }
//    //fseek(file,0,SEEK_SET);//move to the beginning of the file.
//    fprintf(file,"==== hello world appened ====");
//
//    //write to the file.
////    fprintf(file,"enter items");
////    for(int i=0;i<3;i++)
////    {
////       scanf("%s",items);
////       fprintf(file,"%s\n",items);
////
////
////    }
//
//    //close the file.
//    fclose(file);
//
//    printf("data written to file successfully.\n");
//    return 0;
//}
//
//
//CREATE
//#include <stdio.h>
//int main(){
//FILE *file = fopen("example.txt", "w");
//
//if (file== NULL) {
//        printf("Error opening file for writing.\n");
//return 1;
//}
//fprintf(file, "Hello, world!\n");
//fprintf(file, "This is a simple file handling example in C.\n");
//
//
//fclose(file);
//
//printf("Data written to file successfully!\n");
//
//return 0;
//}
//
//
//
//UPDATE
//
//#include <stdio.h>
//int main(){
//FILE *file = fopen("example.txt", "r+");
//if (file== NULL) {
//printf("Error opening file for writing.\n");
//return 1; }
////fseek(file,0,SEEK_SET);
//fprintf(file, "Updated content: Hello, updated World!\n");
//fclose(file);
//printf("Data written to file successfully!\n");
//return 0; }
//
//
//
//APPENDED
//
//#include <stdio.h>
//int main(){
//FILE *file = fopen("example.txt", "a");
//if (file== NULL) {
//printf("Error opening file for writing.\n");
//return 1; }
////fseek(file,0,SEEK_SET);
//fprintf(file, "===Hello World Appended=== \n");
//fclose(file);
//printf("Data written to file successfully!\n");
//return 0; }
//

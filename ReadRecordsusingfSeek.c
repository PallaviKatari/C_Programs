///*seekfile.c*/
//#include<stdio.h>
//#include<stdlib.h>
//struct Student{
//    char sid[11];
//    char name[20];
//    int marks;
//};
//
//int main()
//{
//    FILE * fp;
//    int offset;
//    struct Student stu;
//    int i=0;
//    fp = fopen("student.dat","rb");
//
//    if(fp == NULL)
//        {
//        perror("fopen\n");
//        exit(EXIT_FAILURE);
//    }
//
//    printf("Last record in file.\n");
//    offset = -(sizeof(stu));
//    fseek(fp,offset,SEEK_END);
//    fread(&stu,sizeof(stu),1,fp);
//    printf("\n\tStudent ID : %s",stu.sid);
//    printf("\n\tName : %s",stu.name);
//    printf("\n\tMarks : %d",stu.marks);
//    printf("\nCurrent offset:%ld",ftell(fp));
//
//    printf("\n\nFirst record in file.\n");
//    fseek(fp,0,SEEK_SET);
//    fread(&stu,sizeof(stu),1,fp);
//    printf("\n\tStudent ID : %s",stu.sid);
//    printf("\n\tName : %s",stu.name);
//    printf("\n\tMarks : %d",stu.marks);
//    printf("\nCurrent offset:%ld",ftell(fp));
//
//    printf("\n\nSecond record in file.\n");
//    fseek(fp,0,SEEK_CUR);
//    fread(&stu,sizeof(stu),1,fp);
//    printf("\n\tStudent ID : %s",stu.sid);
//    printf("\n\tName : %s",stu.name);
//    printf("\n\tMarks : %d",stu.marks);
//    printf("\nCurrent offset:%ld",ftell(fp));
//
//    fclose(fp);
//    return 0;
//}

/*creat_data.c*/
#include <stdlib.h>
#include <stdio.h>
struct Student{
    char sid[11];
    char name[20];
    int marks;
};
int main(int argc, char * argv[]){
    int i=9;
    struct Student stu;
    FILE * fp;
    fp = fopen("student.dat","wb");
    while((i--)>0){
        printf("Student ID(10 digits):\n");
        scanf("%s",stu.sid);
        printf("Student Name:\n");
        scanf("%s",stu.name);
        printf("Marks:\n");
        scanf("%d",&stu.marks);
        fwrite(&stu,sizeof(struct Student),1,fp);
    }
    fclose(fp);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define max_array 2000
#define max 100


typedef struct
{
    char id[max];
    char f_name[max];
    char l_name[max];
    char gender[max];
    char DoB[max];
    char class[max];
    char country[max];
    float score;
}list;
typedef struct
{
    char id[max];
    char sub_id[max];
    char score[max];
}score;


int countf(const char file[])
{
    FILE* f = fopen(file, "r");
    int n = -1;
    char temp[100];
    while(!feof(f))
    {
        fgets(temp, 100, f);
        n++;
    }
    fclose(f);
    return n;
}
float average_score(score sc[], int n, char id_sv[])
{
    float sum = 0;
    int count_sub = 0;
    float score_sv;
    char temp[max];

    for(int i = 0; i < n; i++)
    {
        strcpy(temp, sc[i].score);
        score_sv = atof(temp);
        if(strcmp(id_sv, sc[i].id) == 0)
        {
            sum += (score_sv + 0.0);
            count_sub++;
        }
    }

    float average = sum / (count_sub * 1.0);
    return average;
}
int check_DoB(const char* x,const char* y)
{
    char DoBx[100],DoBy[100],day[10],month[10],year[10];
    int day_x, month_x, year_x, day_y, month_y, year_y;

    strcpy(DoBx,x);
    strcpy(DoBy,y);

    char* dayx = strtok(DoBx,"/");
    strcpy(day,dayx);
    day_x = atoi(day);
    
    char* monthx = strtok(NULL,"/");
    strcpy(month,monthx);
    month_x = atoi(month);

    char* yearx = strtok(NULL,"/");
    strcpy(year,yearx);
    year_x = atoi(year);

    char* dayy = strtok(DoBy,"/");
    strcpy(day,dayy);
    day_y = atoi(day);

    char* monthy = strtok(NULL,"/");
    strcpy(month,monthy);
    month_y = atoi(month);

    char* yeary = strtok(NULL,"/");
    strcpy(year,yeary);
    year_y= atoi(year);

    if (year_x > year_y) return -1;

    if (year_x < year_y) return 1;

    if (year_x == year_y)
    {
        if (year_x == year_y && month_x >= month_y)
        {
            if (month_x == month_y && day_x >= day_y)
            {
                if (day_x == day_y)
                {
                    return 0;
                }
                return -1;
            }
            else if(month_x == month_y)
            {
                return 1;
            }
            else return -1;
        }
        else if(year_x == year_y)
        {
            return 1;
        }
        return -1;
    }
    
}


void error()
{
    FILE* f_error = fopen("error.txt", "w");

    fprintf(f_error, "invalid command");

    fclose(f_error);
    exit(0);
}
void is_error_command(char* input)
{
    if(input[strlen(input) - 1] == 10 || input[strlen(input) - 1] == 13)
        input[strlen(input) - 1] = '\0';

    if(input[strlen(input) - 1] == 10 || input[strlen(input) - 1] == 13)
        input[strlen(input) - 1] = '\0';
    int n = strlen(input);


    int count_space = 0;
    for(int i = 0; i < n; i++)
    {
        if(isspace(input[i]))
        {
            count_space++;
        }
    }
    if(input[n - 1] == ' ')
    {
        error();
    }
    if(count_space != 1)
    {
        error();
    }


    if(input[0] == ' ')
    {
        error();
    }


    int count_special = 0;
    for(int i = 0; i < n; i++)
    {
        if(!isalnum(input[i]) && input[i] != ' ')
        {
            count_special++;
        }
    }
    if(count_special != 0)
    {
        error();
    }
}


void read_list(const char dssv[], list sv[])
{
    FILE* f = fopen(dssv, "r");

    int n = 0;
    char line[100];
    fgets(line, 100, f);
    while(!feof(f))
    {
        fgets(line, 100, f);
        int i = 1;

        if(line[strlen(line) - 1] == 10 || line[strlen(line) - 1] == 13)
            line[strlen(line) - 1] = '\0';
        if(line[strlen(line) - 1] == 10 || line[strlen(line) - 1] == 13)
            line[strlen(line) - 1] = '\0';

        char* tok = strtok(line, ",");
        while(tok != NULL)
        {
            if(i == 1)
            {
                strcpy(sv[n].id, tok);
                tok = strtok(NULL, ",");
                i++;
            }
            else if( i == 2)
            {
                strcpy(sv[n].f_name, tok);
                tok = strtok(NULL, ",");
                i++;
            }
            else if( i == 3)
            {
                strcpy(sv[n].l_name, tok);
                tok = strtok(NULL, ",");
                i++;
            }
            else if( i == 4)
            {
                strcpy(sv[n].gender, tok);
                tok = strtok(NULL, ",");
                i++;
            }
            else if( i == 5)
            {
                strcpy(sv[n].DoB, tok);
                tok = strtok(NULL, ",");
                i++;
            }
            else if( i == 6)
            {
                strcpy(sv[n].class, tok);
                tok = strtok(NULL, ",");
                i++;
            }
            else if( i == 7)
            {
                strcpy(sv[n].country, tok);
                tok = strtok(NULL, ",");
                i++;
            }
            
        }

        n++;
    }

    fclose(f);
}
void read_score(const char diemSo[], score sc[])
{
    FILE* f = fopen(diemSo, "r");

    int n = 0;
    char line[100];
    fgets(line, 100, f);
    while(!feof(f))
    {
        fgets(line, 100, f);
        int i = 1;

        if(line[strlen(line) - 1] == 10 || line[strlen(line) - 1] == 13)
            line[strlen(line) - 1] = '\0';

        if(line[strlen(line) - 1] == 10 || line[strlen(line) - 1] == 13)
            line[strlen(line) - 1] = '\0';  

        char* tok = strtok(line, ",");
        while(tok != NULL)
        {
            if(i == 1)
            {
                strcpy(sc[n].id, tok);
            }
            else if( i == 2)
            {
                strcpy(sc[n].sub_id, tok);
            }
            else if( i == 3)
            {
                strcpy(sc[n].score, tok);
            }

            tok = strtok(NULL, ",");
            i++;
        }

        n++;
    }

    fclose(f);
}


void list_command(list sv[], char* input)
{
    char temp[20];
    strcpy(temp, input);
    char* tok = strtok(temp, " ");
    tok = strtok(NULL, " ");
    int n = countf("dssv.csv");
    FILE* f_result = fopen("result.csv", "w");

    int nl = 0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(sv[i].class, tok) == 0)
        {
            nl++;
        }
    }

    int n2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(sv[i].class, tok) == 0 && n2 != nl - 1)
        {
            fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s\n",
                sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
            n2++;
        }
        else if(strcmp(sv[i].class, tok) == 0)
        {
            fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s",
                sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
        }
    }
    
    fclose(f_result);
}
void count_command(list sv[], char* input)
{
    char temp[20], temp_[20], test[20];
    strcpy(temp, input);
    
    char* tok = strtok(temp, " ");
    char* tok2 = strtok(NULL, " ");

    strcpy(test, tok2);
    if(strcmp(test, "female") != 0)
    {
        if(strcmp(test, "male") != 0)
        {
            error();
        }
    }

    strcpy(temp_, tok2);
    temp_[0] = toupper(temp_[0]);

    int n = countf("dssv.csv");
    FILE* f_result = fopen("result.csv", "w");

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(sv[i].gender, temp_) == 0)
        {
            count++;
        }
    }
    
    fprintf(f_result, "%d", count);

    fclose(f_result);
}
void top_command(list sv[], score sc[], char* input)
{
    char temp[20], temp_[20];
    strcpy(temp, input);
    
    char* tok = strtok(temp, " ");
    tok = strtok(NULL, " ");

    int count = 0;
    strcpy(temp_, tok);
    for(int i = 0; i < strlen(temp_); i++)
    {
        if(temp_[i] < '0' || temp_[i] > '9')
        {
            count++;
        }
    }
    if(count != 0)
    {
        error();
    }

    FILE* f_result = fopen("result.csv", "w");

    int c = atoi(tok);

    int n = countf("dssv.csv");
    int k = countf("diem.csv");

    for(int i = 0; i < n; i++)
    {
        sv[i].score = average_score(sc, k, sv[i].id);
    }

    list index;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(sv[i].score == sv[j].score)
            {
                if(strcmp(sv[i].f_name, sv[j].f_name) == 0)
                {
                    if(strcmp(sv[i].l_name, sv[j].l_name) == 0)
                    {
                        if(strcmp(sv[i].country, sv[j].country) == 0)
                        {
                            continue;
                        }
                        else if(strcmp(sv[i].country, sv[j].country) > 0)
                        {
                            index = sv[i];
                            sv[i] = sv[j];
                            sv[j] = index;
                        }
                    }
                    else if(strcmp(sv[i].l_name, sv[j].l_name) > 0)
                    {
                        index = sv[i];
                        sv[i] = sv[j];
                        sv[j] = index;
                    }
                }
                else if(strcmp(sv[i].f_name, sv[j].f_name) > 0)
                {
                    index = sv[i];
                    sv[i] = sv[j];
                    sv[j] = index;
                }
            }
            else if(sv[i].score < sv[j].score)
            {
                index = sv[i];
                sv[i] = sv[j];
                sv[j] = index;
            }
        }
    }

    if(c > n)
    {
        for(int i = 0; i < n; i++)
        {
            if(i < n - 1)
            {
                fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s\n",
                sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
            }
            else
            {
                fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s",
                sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
                break;
            }
        }
    }
    else
    {
        for(int i = 0; i < c; i++)
        {
            if(i < c - 1)
            {
                fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s\n",
                sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
            }
            else
            {
                fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s",
                sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
                break;
            }
        }
    }

    fclose(f_result);
}
void sort_command(list sv[], char* input)
{
    char temp[20], temp_[20];
    strcpy(temp, input);
    
    char* tok = strtok(temp, " ");
    char* tok2= strtok(NULL, " ");
    strcpy(temp_, tok2);

    if(strcmp(temp_, "asc") != 0 && strcmp(temp_, "desc") != 0)
    {
        error();
    }

    int n = countf("dssv.csv");
    FILE* f_result = fopen("result.csv", "w");

    list index;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(sv[i].f_name, sv[j].f_name) == 0)
            {
                if(check_DoB(sv[i].DoB, sv[j].DoB) == 0)
                {
                    if(strcmp(sv[i].l_name, sv[j].l_name) == 0)
                    {
                        if(strcmp(sv[i].country, sv[j].country) == 0)
                        {
                            
                        }
                        else if(strcmp(sv[i].country, sv[j].country) > 0)
                        {
                            index = sv[i];
                            sv[i] = sv[j];
                            sv[j] = index;
                        }
                    }
                    else if(strcmp(sv[i].l_name, sv[j].l_name) > 0)
                    {
                        index = sv[i];
                        sv[i] = sv[j];
                        sv[j] = index;
                    }
                }
                else if(check_DoB(sv[i].DoB, sv[j].DoB) > 0)
                {
                    index = sv[i];
                    sv[i] = sv[j];
                    sv[j] = index;
                }
            }
            else if(strcmp(sv[i].f_name, sv[j].f_name) > 0)
            {
                index = sv[i];
                sv[i] = sv[j];
                sv[j] = index;
            }
        }
    }

    if(strcmp(temp_, "asc") == 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(i != n - 1)
            {
                fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s\n",
                    sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
            }
            else
            {
                fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s",
                    sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
            }
        }
    }
    else if(strcmp(temp_, "desc") == 0)
    {
        for(int i = n - 1; i >= 0; i--)
        {
            if(i != 0)
            {
                fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s\n",
                    sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
            }
            else
            {
                fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s",
                    sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
            }
        }
    }
    
    fclose(f_result);
}
void country_command(list sv[], char* input)
{
    char temp[20], temp_[20];
    strcpy(temp, input);
    
    char* tok = strtok(temp, " ");
    tok = strtok(NULL, " ");

    strcpy(temp_, tok);
    temp_[0] = toupper(temp_[0]);

    int n = countf("dssv.csv");
    FILE* f_result = fopen("result.csv", "w");

    int nl = 0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(sv[i].country, temp_) == 0)
        {
            nl++;
        }
    }

    int n2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(sv[i].country, temp_) == 0 && n2 != nl - 1)
        {
            fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s\n",
                sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
            n2++;
        }
        else if(strcmp(sv[i].country, temp_) == 0)
        {
            fprintf(f_result, "%s,%s,%s,%s,%s,%s,%s",
                sv[i].id, sv[i].f_name, sv[i].l_name, sv[i].gender, sv[i].DoB, sv[i].class, sv[i].country);
        }
    }
    
    fclose(f_result);
}


void read_commend(char* input)
{
    if(input[strlen(input) - 1] == 10 || input[strlen(input) - 1] == 13)
        input[strlen(input) - 1] = '\0';

    if(input[strlen(input) - 1] == 10 || input[strlen(input) - 1] == 13)
        input[strlen(input) - 1] = '\0';

    char temp_[10];
    strcpy(temp_, input);

    char* command = strtok(temp_, " ");

    if(strcmp(command, "list") == 0)
    {
        list sv[max_array];
        read_list("dssv.csv", sv);
        
        list_command(sv, input);
    }
    else if(strcmp(command, "count") == 0)
    {
        list sv[max_array];
        read_list("dssv.csv", sv);
        
        count_command(sv, input);
    }
    else if(strcmp(command, "top") == 0)
    {
        list sv[max_array];
        read_list("dssv.csv", sv);
        score sc[max_array];
        read_score("diem.csv", sc);
        
        top_command(sv, sc, input);
    }
    else if(strcmp(command, "sort") == 0)
    {
        list sv[max_array];
        read_list("dssv.csv", sv);
        
        sort_command(sv, input);
    }
    else if(strcmp(command, "country") == 0)
    {
        list sv[max_array];
        read_list("dssv.csv", sv);
        
        country_command(sv, input);
    }
    else
    {
        error();
    }
}


int main()
{

    int a = countf("dssv.csv");
    int b = countf("dsmh.csv");
    int c = countf("diem.csv");
    FILE* f_log = fopen("log.txt", "w");

    fprintf(f_log, "%d %d %d", a, b, c);

    fclose(f_log);

    char input[20];
    fgets(input, 20, stdin);

    for(int i = 0; i < strlen(input); i++)
    {
        input[i] = tolower(input[i]);
    }

    is_error_command(input);
    read_commend(input);

    return 0;
}
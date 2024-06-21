#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void uncharted(void);
double* artifact_evaluate(void);
void gacha(void);
char draw(int amount,int rate_5,int rate_4);

int main()
{
    srand(time(NULL));

    /*uncharted();*/

    /*double* artifact_score;
    double evaluate_sum = 0;
    artifact_score = artifact_evaluate();


    for (int i = 0; i < 5; i++){

        evaluate_sum += *(artifact_score + i);
    }
    printf("\n�`�M:%.2f\n",evaluate_sum);

    if (evaluate_sum < 100)
        printf("\n�~���t�򪫧a");
    else if (evaluate_sum < 150)
        printf("\n����w����");
    else if (evaluate_sum < 200)
        printf("\n�������~1");
    else
        printf("\n���P�j��!");*/

    gacha();

    return 0;
}

void uncharted(void){

    int part_amount[5] = {0};

    while(1){

        int any_bottom;
        int artifact_amount;

        printf("\n���t����--���t��:\n�I�����N�� �����ꥻ �ϥΤ@���@�Y���>");
        scanf("%d",&any_bottom);

        artifact_amount = 0;

        for(int i = 0; i < 2; i++){
            if (rand() % 1000 + 1 < 66){

                artifact_amount += 2;
            }
            else{
                artifact_amount++;
            }
        }

        for(int i = 0; i < artifact_amount; i++){

            int part;
            char part_name[5][10] = {"�ᦷ","�Ф�","�F�|","�M�l","�Y�a"};
            char main_entry_list[9][10] = {"�ͩR%","����%","���m%","��q","�R��","�˪M","�z��","�z�v","�v��"};
            int main_entry_lacation = -1;
            int sub_entry_amount;
            char sub_entry_name[10][10] = {"�ͩR","����","���m","�ͩR","����","���m","��q","�R��","�z��","�z�v"};
            double sub_entry_list[10][4] = {{/*"�ͩR"*/209,239,269,299},{/*"����"*/14,16,18,19},{/*"���m"*/16,19,21,23},
            {/*"�ͩR"*/4.1,4.7,5.3,5.8},{/*"����"*/4.1,4.7,5.3,5.8},{/*"���m"*/5.1,5.8,6.6,7.3},
            {/*"��q"*/16,19,21,23},{/*"�R��"*/4.5,5.2,5.8,6.5},{/*"�z��"*/5.4,6.2,7.0,7.8},{/*"�z�v"*/2.7,3.1,3.5,3.9}};

            if(rand() % 2 + 1 == 1)
                printf("\n\n�����t");
            else
                printf("\n\n���l��");

            part = rand() % 5;
            part_amount[part]++;
            printf(" %s",part_name[part]);

            if(part == 2){
                int choose[5] = {1,2,3,4,5},i;
                int ratio[5] = {2667,2667,2667,1000,1000},choosen;
                int front = 0,afterward = 0;

                choosen = rand() % (ratio[0] + ratio[1] + ratio[2] + ratio[3] + ratio[4]) + 1;
                for(i = 0; i < 5; i++){
                    front = afterward;
                    afterward += ratio[i];
                    if(front < choosen && choosen <= afterward)break;
                }
                main_entry_lacation = choose[i]-1;
                printf("%7s",main_entry_list[main_entry_lacation]);
            }
            else if(part == 3){
                int choose[5] = {1,2,3,4,6},i;
                int ratio[5] = {2125,2125,2000,250,3500},choosen;
                int front = 0,afterward = 0;
                char element[7][5] = {"��","��","�p","�B","��","��","��"};

                choosen = rand() % (ratio[0] + ratio[1] + ratio[2] + ratio[3] + ratio[4]) + 1;
                for(i = 0; i < 5; i++){
                    front = afterward;
                    afterward += ratio[i];
                    if(front < choosen && choosen <= afterward)break;
                }
                main_entry_lacation = choose[i]-1;
                if (i == 4){
                    printf("%3s%s",element[rand() % 7],main_entry_list[main_entry_lacation]);
                }
                else
                    printf("%7s",main_entry_list[main_entry_lacation]);
            }
            else if(part == 4){
                int choose[7] = {1,2,3,4,7,8,9},i;
                int ratio[7] = {22,22,22,4,10,10,10},choosen;
                int front = 0,afterward = 0;

                choosen = rand() % (ratio[0] + ratio[1] + ratio[2] + ratio[3] + ratio[4] + ratio[5] + ratio[6]) + 1;
                for(i = 0; i < 7; i++){
                    front = afterward;
                    afterward += ratio[i];
                    if(front < choosen && choosen <= afterward)break;
                }
                main_entry_lacation = choose[i]-1;
                printf("%7s",main_entry_list[main_entry_lacation]);
            }
            else
                printf("%7s","  ");

            if (rand() % 10 + 1 < 3)
                {printf("  4�ϱ�");
                sub_entry_amount = 4;}
            else
                {printf("  3�ϱ�");
                sub_entry_amount = 3;}

            /*"�ͩR","����","���m""�ͩR%","����%","���m%","��q","�R��","�z��","�z�v"*/
            int sub_ratio[10];
            if (part == 0){
                int sub_entry_ratio[10] = {0,1579,1579,1053,1053,1053,1053,1053,789,789};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else if (part == 1) {
                int sub_entry_ratio[10] = {1579,0,1579,1053,1053,1053,1053,1053,789,789};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else if (main_entry_lacation == 0) {
                int sub_entry_ratio[10] = {150,150,150,0,100,100,100,100,75,75};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else if (main_entry_lacation == 1) {
                int sub_entry_ratio[10] = {150,150,150,100,0,100,100,100,75,75};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else if (main_entry_lacation == 2) {
                int sub_entry_ratio[10] = {150,150,150,100,100,0,100,100,75,75};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else if (main_entry_lacation == 3/*��q*/) {
                int sub_entry_ratio[10] = {150,150,150,100,100,100,0,100,75,75};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else if (main_entry_lacation == 4/*�R��*/) {
                int sub_entry_ratio[10] = {150,150,150,100,100,100,100,0,75,75};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else if (main_entry_lacation == 6/*�z��*/) {
                int sub_entry_ratio[10] = {1463,1463,1463,976,976,976,976,976,0,732};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else if (main_entry_lacation == 7/*�z�v*/) {
                int sub_entry_ratio[10] = {1463,1463,1463,976,976,976,976,976,732,0};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}
            else {
                int sub_entry_ratio[10] = {1364,1364,1364,909,909,909,909,909,682,682};
                for(int i = 0; i < 10; i++){sub_ratio[i] = sub_entry_ratio[i];}}

            int position_record[4] = {-1,-1,-1,-1};
            for(int times = 0; times < sub_entry_amount; times++){

                int ratio_sum = 0;
                int choosen,position;
                int front = 0,afterward = 0;
                int repetition = 0;

                for(int i = 0; i < 10; i++)
                    ratio_sum += sub_ratio[i];
                choosen = rand() % ratio_sum + 1;
                for(position = 0; position < 10; position++){
                    front = afterward;
                    afterward += sub_ratio[position];
                    if(front < choosen && choosen <= afterward)break;
                }
                for(int i = 0; i < times ; i++){
                    if(position == position_record[i])
                        repetition = 1;
                }
                if(repetition == 1){
                    times -= 1;
                    continue;
                }
                else
                    position_record[times] = position;

                int value = (sub_entry_list[position][rand() % 4])*10;

                if(times > 0) printf("%25c",' ');
                if (position <= 2 || position == 6)
                    printf("%7s+%d%c",sub_entry_name[position],value/10);
                else
                    printf("%7s+%d.%d%c",sub_entry_name[position],value/10,value%10,'%');
                if(position == 4 || position >= 7)
                    printf("  (���ĵ���)\n");
                else printf("\n");
            }
        }

        printf("\n\n�֭p:(��:%d/��:%d/�F:%d/�M:%d/�a:%d)\n----------------------------------\n",
               part_amount[0],part_amount[1],part_amount[2],part_amount[3],part_amount[4]);
    }
}

double* artifact_evaluate(void){

    double credit_damage,credit_ratio,attack;
    char artifact_name[5][10] = {"�ͤ���","������","�ɤ��F","�Ť��M","�z���a"};
    static double score[5] = {0};

    printf("��J�A���DC�t�򪫸��(�z��/�z�v/����):\n");

    for (int i = 0; i < 5; i++){

        printf(" %s>",artifact_name[i]);
        scanf("%lf %lf %lf",&credit_damage,&credit_ratio,&attack);
        score[i] = credit_damage*1 + credit_ratio*2 + attack*1.3;
    }
    printf("\n�A���t�򪫤���:\n");
    for (int i = 0; i < 5; i++){
        printf("\n %s: %2.2f ��",artifact_name[i],score[i]);
        if (i < 2 && score[i] >= 50)
            printf("(���~!)");
        if (i >= 2 && score[i] >= 40)
            printf("(���~!)");
    }
    return(score);
}

void gacha(void){

    int rate_5_star = 6,  count_for_5 = 1;
    int rate_4_star = 51, count_for_4 = 1;
    int rate_3_star = 1000 - (rate_5_star + rate_4_star);
    int amount_5_star = 0, amount_4_star = 0;
    int amount,counter = 1;
    int star;
    int stop = 1;

    while(1){
        printf("\n����U�� ������@--�п��(1/10�s)>");
        scanf("%d",&amount);

        if (amount == 1 || amount == 10){
            do {
                for(int i = 0; i < amount; i++){
                    if (count_for_5 > 73)
                        rate_5_star += 60;

                        switch (count_for_4){

                        case 9:
                            rate_4_star = 562;
                            break;
                        case 10:
                            rate_4_star = 1000 - rate_5_star;
                            break;
                    }

                    star = draw(amount,rate_5_star,rate_4_star);

                    if (star == '5'){

                        count_for_5 = count_for_4 = 0;
                        rate_5_star = 6;
                        rate_4_star = 51;
                        amount_5_star++;
                    }
                    else if (star == '4'){

                        count_for_4 = 0;
                        rate_4_star = 51;
                        amount_4_star++;
                    }

                    count_for_5++;
                    count_for_4++;
                    counter++;
                }
                    printf("\n\n�`��d��:%d\n�O���֭p:%d\n�֭p5��:%d\n�֭p4��:%d",
                            counter-1,count_for_5-1,amount_5_star,amount_4_star);
                    printf("\n�����N���~��%d��A��0����>",amount);
                    scanf("%d",&stop);

            } while (stop != 0);
        }

    }
}

char draw(int amount,int rate_5,int rate_4){

    int rate_3;
    int result;
    static int guaranty = 0;
    #define amount_5_star 6
    #define amount_4_star 38

    char list_5_star[amount_5_star][15] = {"����U��","�}�c�J","���R","�^","�贸","�C�C"};
    char list_4_star[amount_4_star][15] = {"�p�A","�Z���S","ù�����","��Ի",
        "����","����","�E����ù","���c","���n","���]","�}���R","����","���º�",
        "��}","�զ㺸","�ݪݩ�","�_��","����","����","���",
        "�üC","��§�C","�X���s�u","�護�C","�B��","��§�j�C","�護�j�C","��C",
        "��§�}","����","�}��","�護�y�}","�L��","�y���ֳ�","�護����",
        "��§�ݳ�","�X�̷���","�護���j"};

    rate_3 = 1000 - (rate_5 + rate_4);

    if (rate_5 + rate_4 > 1000){

        rate_4 = 1000 - rate_5;
        rate_3 = 0;
    }
    if (rate_5 > 1000){

        rate_5 = 1000;
        rate_4 = 0;
    }

    result = rand() % 1000 + 1;

    if (result <= rate_5){
        printf("\n5��");

        if (rand() % 2 + 1 == 1 || guaranty == 1){
            printf(" %s",list_5_star[0]);
            guaranty = 0;
        }
        else{
            printf(" %s",list_5_star[rand() % (amount_5_star - 1) + 1]);
            guaranty = 1;
        }
        return('5');
    }
    else if (rate_5 < result && result <= rate_4){
        printf("\n4��");

        if (rand() % 2 + 1 == 1)
            printf(" %s",list_4_star[rand() % 3]);
        else
            printf(" %s",list_4_star[rand() % (amount_4_star - 3) + 3]);
        return('4');
    }
    else{
        printf("\n3��");
        return('3');
    }
}

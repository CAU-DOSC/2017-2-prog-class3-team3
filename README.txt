# README file for TEAM[3,3]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

Ownershipe Description:

Readme.txt - 조현민

header.h - 강재환

main.c - 김영권

library.c - 이민희


Functional Description


link createnode(int) :

int형 변수를 받아 node* 변수와 int 변수를 가진 구조체 node를 생성, 

그 구조체를 가리키는 link 반환


int calculatecount(link) [link = node*] :

head 부터 시작하여 리스트 끝까지 가면서 node의 숫자를 세고 그 값을 반환


void reverseprint(link , int) :

link와 구조체의 개수를 받아 입력된 자료를 역순으로 출력


void printmiddle(link, int ) :

link와 구조체의 개수를 받아 중간값 출력


void printlist(link , int) :

link와 구조체의 개수를 받아 입력된 자료 순으로 출력


void deleteodd(link head, int count) :

link와 구조체의 개수를 받아 홀수 번째 자료 삭제


void printeven(link , int) :

link와 구조체의 개수를 받아 남아있는 자료 출력




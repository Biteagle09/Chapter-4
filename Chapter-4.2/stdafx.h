#pragma once

// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "stdio.h"
#include "tchar.h"
#include "Windows.h"
#include <cstdio>
#include <ctime>
#include <cmath>


/*
ע�������string��cstring�е�ʹ�ò��
�ڶ�����ʹ��cout���string�����ַ�����ʱ�����ʹ��string�⣬
������ܻ���������Լ������һϵ�д���
*/
#include <string>    




//�궨�崦
#define ElemType int

// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�





//����������ʽ�洢�ṹ�嶨��
typedef struct BiTNode {
	ElemType data;                 //������
	struct BiTNode* lchild;   //���ӽ��ָ��
	struct BiTNode* rchild;   //�Һ��ӽڵ�ָ��
}BiTNode, *BiTree;





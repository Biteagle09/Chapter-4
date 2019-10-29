#pragma once

// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "stdio.h"
#include "tchar.h"
#include "Windows.h"
#include <cstdio>
#include <ctime>
#include <cmath>


/*
注意这里的string与cstring中的使用差别，
在定义与使用cout输出string类型字符串的时候，最好使用string库，
否则可能会出现乱码以及错误等一系列错误
*/
#include <string>    




//宏定义处
#define ElemType int

// TODO:  在此处引用程序需要的其他头文件





//二叉树的链式存储结构体定义
typedef struct BiTNode {
	ElemType data;                 //数据域
	struct BiTNode* lchild;   //左孩子结点指针
	struct BiTNode* rchild;   //右孩子节点指针
}BiTNode, *BiTree;





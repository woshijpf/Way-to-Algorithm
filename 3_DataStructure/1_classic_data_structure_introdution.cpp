//经典数据结构介绍
//classic_data_structure_introduction.cpp

//1)平衡二叉树(Balanced Binary Tree)
//平衡二叉树是一种特别的二叉树，它保证所有节点的左右子树的高度相差不超过1
//这是为了避免出现由于树的不平衡使得查询，插入和删除一个元素的时间复杂度退化为O(n)
//在平衡二叉树中以上操作的时间复杂度为O(lgn)
//几乎所有平衡二叉树中维持平衡的操作都是基于四种树的旋转操作
//平衡二叉树其中最为流行的几种是：AVL树，Treap，伸展树，红黑树，2-3-4树
//树的旋转操作实现起来难度比较大，不过几乎所有流行的语言中都有关于平衡二叉树的实现
//比如C++中的map和multimap容器
//
//2)跳跃表(Skip List)
//跳跃表是一种基于随机思想的链表数据结构，通过缩短各节点距离从而提高各种操作的效率
//在普通的单链表或双向链表中每个节点只有一个或两个指针指向自己的相邻节点
//但跳跃表通过增加链表中一些节点的指针数量使其查询时避免按部就班的挨个遍历每个节点
//而是通过一个合适的指针直接到达另一个节点，使得各种操作的时间复杂度为O(lgn)
//当插入和删除元素时，跳跃表则通过一个随机函数判断是否应该增加或减少节点中的指针
//从而使得跳跃表中各节点的指针数量维持平衡
//实际中跳跃表并不是增加各节点成员的指针数量
//而是对同一个节点进行多个备份，每个备份指向不同的邻节点
//
//3)B树(B Tree)
//B树是一种特别的二叉树，它保证所有节点的键值key大于其左子树，小于其右子树
//B树和二分查找法的本质相同，也成为二叉搜索树
//B树有很多衍生版本，最为流行的几种是：B-树，B+树，B*树
//这些衍生版本与原版的B树实现细节和功能都有很多差别
//但根节点键值key大于左子树，小于右子树的核心思路不变
//
//4)斐波那契堆(Fibonacci Heap)
//斐波那契堆用于实现优先队列数据结构，其核心思路在于使用斐波那契数列分析
//从而保证其查询和插入操作的时间复杂度为O(1)
//用于优先队列的较为流行的数据结构还有二项堆和Pairing堆
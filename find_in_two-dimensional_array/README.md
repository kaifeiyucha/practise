###题目:
在一个二维数组中,每一行都按照从左向右递增的顺序,每一列都按照从上到下题赠的顺序排列。请完成一个函数,输入这样的一个数组和一个整数,判断数组中是否含有该整数。

二维数组Array
1   2   8   9
2   4   9   12
4   7   10  13
6   8   11  15

---
###分析:
举个简单的例子,目标数字为7.
从右上角开始找,9是最后一列的最小值,是第一行的最大值,则9>7,代表7只能在前三列找.
然后比较8,8>7,代表只能在第一二列找。
2<7,代表只能在第2,3,4行找了;
然后4<7,代表只能在3,4行找;
然后是7==7,找到了。


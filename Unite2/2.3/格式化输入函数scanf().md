## 2.3.4格式化输入函数scanf().


##
* 格式化输出函数printf(),是系统提供的函数，用编译预处理程序#include<stdio.h>

```
  scanf("格式控制字符串"，输入参数1，....,输入参数n)
  
  scanf("x=%d",&x);
  
```
 * 输入参数的形式：变量名前面加&,例如&x.



* 格式控制字符串中包含两种信息，格式控制说明和普通字符：<br>
  
  1. 格式控制说明：指定输出的数据类型，以%开头的格式控制字符，不同的数据采用不同的控制字符。<br>
     %d:int; %f:float,double。（后面的（变）量会替换，掉格式控制）
  
  2. 普通字符，需要原样输出的字符。包含在“ ”之中。

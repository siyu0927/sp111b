本資料夾所有程式都來自陳鍾誠老師 https://github.com/ccc111b/cpu2os/tree/master/02-%E8%BB%9F%E9%AB%94/02-%E7%B7%A8%E8%AD%AF%E5%99%A8/01-diy/03a-compiler  
只修改compiler.c裡的92至106行,110至112行,並新增dowhile.c

測試程式:
```
i = 1;
do {i = i + 1;}
while (i<10)
```
make指令無法使用,要用mingw32-make  
執行結果:
```
i = 1;
do {i = i + 1;}
while (i<10)
========== lex ==============
token=i
token==
token=1
token=;
token=do
token={
token=i
token==
token=i
token=+
token=1
token=;
token=}
token=while
token=(
token=i
token=<
token=10
token=)
========== dump ==============
0:i
1:=
2:1
3:;
4:do
5:{
6:i
7:=
8:i
9:+
10:1
11:;
12:}
13:while
14:(
15:i
16:<
17:10
18:)
============ parse =============
t0 = 1
i = t0
(L0)
t1 = i
t2 = 1
t3 = t1 + t2
i = t3
t4 = i
t5 = 10
t6 = t4 < t5
if not T6,goto L1
goto L0
(L1)
```

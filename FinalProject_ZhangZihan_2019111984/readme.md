# 计算机图形学期末项目

张子涵 2019111984

## 项目简介

本项目选题为openGL迷宫地图生成，实际实现中在生成迷宫的基础上增加了一系列其他有关迷宫游戏和图形学知识的功能。项目主要调用了openGL基础库以及GLUT库进行实现，可以基于windows运行（其他系统没有尝试过）。

## 使用说明

项目基本框架使用了本学期课程作业中的编译框架，使用makefile对文件进行编译，在配置好gcc32编译器之后进入项目根目录运行make命令，再运行build\main.exe即可使用

## 功能简介

+ 迷宫生成
  + 首先本项目使用随机Kruskal算法进行迷宫生成，具体思路为：首先创建所有墙壁的列表，并为每个单元格创建一个集合，每个集合只包含一个单元格。之后，对于每一堵墙都随机访问，如果当前的墙（图中的某个边）连接了两个分离的生成树，那就连接这两棵树。由此重复直到所有的边都被访问过。
  + 在程序运行过程中可以通过以下按键改变迷宫：
    + "C"：重新生成新迷宫
    + "+"、"-"：重新生成一个更大/更小的迷宫

![1](D:\Graphics\111\images\1.gif)

+ 图形学功能

  + 在游戏中可以通过以下按键更改图形界面：
    + "P"：将玩家模型切换为球/圆锥
    + "V"：更改图形模式（2D、3D、第一人称视角）
    + "J"、"K"、"I"、"L"：在3D视图下旋转迷宫
    + "1"、"2"、"3"、"4"、"5"：更改灯光以及材质

  ![2](D:\Graphics\111\images\2.gif)

  + 在游戏中可以通过以下按钮进行游玩:
    + "w"、"a"、"s"、"d"：控制玩家模型上下左右移动
    + 上下左右箭头：在第一人称模式中控制摄像机移动（这部分实在不知道怎么在openGL中实现摄像头跟随，请老师谅解）
    + 空格键：开始/停止另一个小球（电脑控制）的行动

![3](D:\Graphics\111\images\3.gif)
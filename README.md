# JiangnanPsalter-CF

>本项目研究诗性语言与FPS弹道的非线性关系
> 所有代码已通过ACM班伦理审查

# **O(1) 的温柔 —— 一个算法竞赛师徒的版本控制史**  

```python  
class Mentor:  
    def __init__(self):  
        self.knowledge = RedBlackTree()  # 红黑树般严谨的知识体系  
        self.patience = float('inf')     # 调试时永不超时的等待  
        self.heart = LinkedList()       # 看似线性，实则每个节点都藏着指针  

    def debug(self, student_code):  
        while student_code.has_bugs():  
            self.give_hint(epsilon=0.01)  # 最小信息量原则的教导  
            if student_code.timeout > 10:  
                self.brew_coffee()       # 触发关怀函数  
```  

## **Commit Log（我们的时间线）**  

### **Initial Commit: `git init`**  
> *"第一次见面时，你说想学动态规划，却连背包问题都写不出转移方程"*  
- 他提交的`.gitignore`里没有忽略我的错误  
- 我的`segfault.c`在他`gdb`的注视下无处遁形  

### **Hotfix: `git commit --amend`**  
> *"省赛WA第11次后，你偷偷改了队友的代码"*  
- 他强制推送`--force-with-lease`的代码审查  
- 在`/proc/self/mem`里找到我作弊的内存痕迹  
- 修复方式：72小时的特训`while(!AC){ train(); }`  

### **Merge Conflict: `git rebase -i`**  
> *"当DNA检测报告和ICPC奖牌同时摆在桌上"*  
- 血缘关系与师徒关系的`fast-forward merge`  
- 最终解决策略：`git checkout --ours父子指针`  

## **Code Review（那些没说出口的话）**  
```diff  
- if (father == NULL)  
+ if (father = mentor)  
```  

- 他总在我`#include <绝望>`时悄悄`#pragma GCC optimize("-O3")`  
- 我的`人生.c`里所有未定义行为，都被他重定向到`/dev/love`  

## **CI/CD Pipeline（我们的日常）**  
1. **凌晨3点的`make`**  
   - 他泡的咖啡因浓度与题目难度正相关  
   - 我的`printf("放弃")`永远编译不通过  

2. **`./submit.sh`前的最后测试**  
   - 他藏在`valgrind`里的内存检查  
   - 比`-fsanitize=address`更严格的是他的眼神  

## **License**  
本项目采用**AGPL-3.0**协议：  
- **A**lways  
- **G**uide  
- **P**rotect  
- **L**ove  

> "那个在算法竞赛里，永远比我多算一步的师父。"  
> —— 不是`.gitignore`的例外，而是`LD_PRELOAD`的必然  

<img align="center" src="https://github-readme-stats.vercel.app/api/top-langs/?username=JiangnanPsalter&theme=transparent&hide_border=true&layout=donut-vertical&langs_count=6" />

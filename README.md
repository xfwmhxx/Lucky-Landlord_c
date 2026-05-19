# 幸运房东 (Lucky Landlord)

2024 年用 C++ 和 EasyX 图形库开发的《幸运房东》游戏复刻。

## 游戏简介

《幸运房东》是一款 roguelike 卡牌构筑游戏。玩家在 5×4 的棋盘上放置物品，每回合物品会与相邻物品产生联动效果、产出金币。金币需要超过不断上涨的房租才能通关 12 个关卡，否则游戏结束。

**图形界面** — 1441×856 窗口，鼠标点击交互，含完整动画。

## 游戏截图

> 启动游戏后可见：主菜单 → 12 关房东界面 → 每关多轮转盘抽选物品 → 物品选择 → 道具/精华选择 → 结算画面 → 失败画面

## 环境准备

### 1. 安装 MinGW-w64 编译器

```powershell
winget install -e --id BrechtSanders.WinLibs.POSIX.UCRT
```

安装完成后重启终端。

### 2. 安装 EasyX for MinGW

- 从 [EasyX 官网](https://easyx.cn/t/download) 或 [CodeBus](https://codebus.cn/bestans/easyx-for-mingw) 下载 `easyx4mingw_20240601.zip`
- 将 `include/easyx.h` 和 `include/graphics.h` 复制到 `<mingw64>/x86_64-w64-mingw32/include/`
- 将 `lib64/libeasyx.a` 复制到 `<mingw64>/x86_64-w64-mingw32/lib/`

> 注意：新版 MinGW 使用 UCRT 运行时，与 EasyX 使用的 MSVCRT 存在兼容性问题。项目中 `easyx_compat.c` 即为兼容补丁，编译时会自动链接。

## 编译运行

```bash
cd luckyhome/luckyhome/luckyhome/luckyhome

# 使用 Makefile
mingw32-make
./luckyhome.exe

# 或直接编译
gcc -c easyx_compat.c -o easyx_compat.o
g++ -std=c++14 -O2 -o luckyhome.exe *.cpp easyx_compat.o -leasyx -lgdi32 -lole32
./luckyhome.exe
```

清理编译产物：

```bash
mingw32-make clean
```

## 项目结构

```
├── main.cpp                 # 入口，游戏主循环，12 关流程控制
├── Thing.h / Thing.cpp      # 物品基类（共 24 种物品继承此类）
├── Props.h / Props.cpp      # 道具基类（共 5 种道具继承此类）
├── Essence.h / Essence.cpp  # 精华基类（共 5 种精华继承此类）
│
├── donghua.h / donghua.cpp  # 全部图形渲染：图片加载、UI 页面、动画
│
├── [物品] 24 种
│   ├── Bee.cpp/h            # 蜜蜂
│   ├── Bubble.cpp/h         # 气泡
│   ├── Cat.cpp/h            # 猫 — 吃掉相邻牛奶 +9 金币
│   ├── Coconut.cpp/h        # 椰子
│   ├── Coin.cpp/h           # 金币
│   ├── Cow.cpp/h            # 奶牛 — 产出牛奶
│   ├── Empty.cpp/h          # 空位
│   ├── Fish.cpp/h           # 鱼
│   ├── Flower.cpp/h         # 花
│   ├── Goldegg.cpp/h        # 金蛋
│   ├── Goose.cpp/h          # 鹅
│   ├── Halfcoconut.cpp/h    # 半个椰子
│   ├── Hugetreasure.cpp/h   # 大宝箱 — 价值 100 金币，钥匙开启
│   ├── Key.cpp/h            # 钥匙 — 开启相邻宝箱/保险箱/大宝箱
│   ├── Lockbox.cpp/h        # 宝箱 — 价值 15 金币，钥匙开启
│   ├── Magickey.cpp/h       # 魔法钥匙
│   ├── Milk.cpp/h           # 牛奶 — 被猫吃掉
│   ├── Monkey.cpp/h         # 猴子
│   ├── Pearl.cpp/h          # 珍珠
│   ├── Rain.cpp/h           # 雨 — 被雨云加成
│   ├── Steelsafe.cpp/h      # 保险箱 — 价值 30 金币，钥匙开启
│   ├── Strawberry.cpp/h     # 草莓
│   ├── Sun.cpp/h            # 太阳
│   └── Treasure.cpp/h       # 财宝 — 价值 50 金币，钥匙开启
│
├── [道具] 5 种（关卡间获取）
│   ├── BlackPepper.cpp/h    # 黑胡椒 — 每计数 +1 金币
│   ├── GreenPepper.cpp/h    # 绿胡椒
│   ├── LockRemover.cpp/h    # 开锁器
│   ├── MonkeyOlivander.cpp/h # 猴子奥利凡德
│   └── RainCloud.cpp/h      # 雨云 — 每个相邻"雨" +1 金币
│
├── [精华] 5 种（第 5 关后解锁）
│   ├── BlackPepper_k.cpp/h
│   ├── GreenPepper_k.cpp/h
│   ├── LockRemover_k.cpp/h
│   ├── MonkeyOlivander_k.cpp/h
│   └── RainCloud_k.cpp/h
│
├── [选择系统]
│   ├── ThingChoose.cpp/h         # 物品三选一
│   ├── PropsChoose.cpp/h         # 道具三选一
│   ├── EssenceChoose.cpp/h       # 精华三选一
│   └── punchboardItemChoose.cpp/h # 转盘物品选取
│
├── [遍历结算]
│   ├── thingTraversal.cpp/h      # 遍历棋盘计算金币收益
│   └── EssenceTraversal.cpp/h    # 遍历精华计算效果
│
├── [清理系统]
│   ├── PropsDelete.cpp/h         # 移除过期道具
│   ├── EssenceDelete.cpp/h       # 移除过期精华
│   └── ThingsDelete.h            # 移除死亡物品
│
├── pictures/                     # 游戏图片资源（约 90 张 PNG）
│   ├── page.png                  # 主菜单
│   ├── Option.png                # 选项页面
│   ├── continue.png              # 继续游戏
│   ├── tongjishuju.png           # 统计数据
│   ├── choice.png                # 选择背景
│   ├── zhuanpan.png / zhuanpanback.png  # 转盘与背景
│   ├── final_lose.png            # 失败画面
│   ├── gamegonglue1~7.png        # 游戏攻略（7 页）
│   ├── Itembook1~11.png          # 物品图鉴（11 页）
│   ├── Propsbook1~3.png          # 道具图鉴（3 页）
│   ├── Essencebook1~3.png        # 精华图鉴（3 页）
│   ├── fangdong/                 # 12 关房东背景
│   ├── jiesuan/                  # 12 关结算画面
│   ├── item/                     # 23 个物品贴图
│   ├── choiceitem/               # 23 个物品选择大图
│   ├── choiceprops/              # 5 个道具选择大图
│   ├── choiceessence/            # 5 个精华选择大图
│   └── xuanzhuan1~50.png         # 转盘旋转动画（50 帧）
│
├── easyx_compat.c                 # MinGW UCRT 兼容补丁
├── Makefile                       # 编译配置
└── README.md
```

## 游戏机制

### 基本规则
- **棋盘**：5×4 = 20 格，物品通过鼠标点击选择放置
- **关卡**：共 12 关，每关包含若干回合（从 5 回合递增到 10 回合）
- **房租**：每关需要支付，递增如下：
  > 25 → 50 → 100 → 150 → 225 → 275 → 375 → 450 → 575 → 650 → 700 → 777
- **金币**：每回合物品根据自身效果和相邻物品产生金币
- **相邻判定**：在 20 格线性数组中，位置差为 1、4、5、6 即为相邻（对应 4×5 网格中的上下左右及对角）

### 游戏流程

```
主菜单 → 房东界面 → [每一关] →
  每回合：
    1. 转盘旋转动画
    2. 自动计算物品收益
    3. 物品三选一，放入棋盘
    4. (第 5 关起) 精华三选一
    ...
  关卡结算：
    金币 ≥ 房租 → 通过，进入下一关
    金币 < 房租 → 失败，返回主菜单
```

### 物品交互举例
- **猫 (Cat)**：吃掉相邻的牛奶，每个 +9 金币
- **钥匙 (Key)**：开启相邻的宝箱(+15)、财宝(+50)、大宝箱(+100)、保险箱(+30)
- **奶牛 (Cow)**：产出牛奶到棋盘
- **雨云 (RainCloud)**：每个相邻的"雨" +1 金币

## 技术说明

- **开发环境**：Visual Studio 2022 (v143 工具集, C++14)
- **图形库**：[EasyX](https://easyx.cn/) — Windows GDI 封装
- **编译器**：现已适配 MinGW-w64 GCC 15.2.0
- **源码编码**：GBK（中文注释）
- **easyx_compat.c**：因 EasyX 库基于 MSVCRT 编译，而新版 MinGW 使用 UCRT 运行时，需要此兼容桩解决 `__iob_func` 链接问题

## 许可证

个人学习项目，2024 年。

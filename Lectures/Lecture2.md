# Lecture 2 : ARM Processors & Intro to Interfacing (ARM 处理器 & 接口)

> Lecture @ 2025-3-3

## ARM 处理器

### 什么是 ARM 处理器

ARM 的全称是 Advanced RISC Machine，是一种基于 RISC 架构的处理器，由 ARM 公司设计。其中 RISC 是 Reduced Instruction Set Computing 的缩写，即精简指令集计算机。类似的，有 CISC (Complex Instruction Set Computing, 复杂指令集计算机)。

RISC 和 CISC 的区别在于指令集的复杂度，RISC 的指令集更加简单，执行速度更快，但是需要更多的指令来完成同样的任务。也正因此，RISC 的硬件实现更加简单，更容易设计和优化。

CISC 和 RISC 都是一种 ISA，即 Instruction Set Architecture，指令集架构。ISA 定义了处理器的指令集，包括指令的格式、操作数的个数、寻址方式等。ISA 定义了软件和硬件之间的接口，使得软件可以在不同的硬件上运行。

ISA 是一种低级的抽象，它定义了处理器的指令集，但是不关心具体的实现。处理器的实现可以有很多种，只要它们遵循了 ISA 的规范，就可以运行相同的软件。而我们之前学过的编程语言，比如 C 语言，是一种高级的抽象，它定义了程序的结构和语法，但是不关心底层的硬件。

| 区别           | RISC                           | CISC                           |
| -------------- | ------------------------------ | ------------------------------ |
| 指令集         | 一个周期执行一个的简单指令     | 复杂指令，可能需要多个周期     |
| 更通用的寄存器 | 芯片里有更多的空间给寄存器     | 相对更少的寄存器               |
| 内存模型       | 简单的内存模型，更少的数据类型 | 复杂的内存模型，更多的数据类型 |
| 重点           | 重点在软件上                   | 重点在硬件上                   |

总结一下:

- CISC
  - 优点
    - 代码的体积更小，因为一个指令可以完成更多的工作
    - 内存效率更高
  - 缺点
    - 运行更慢
    - 硬件设计更复杂
    - 通常有更高的功耗
- RISC
  - 优点
    - 运行更快
    - 功耗更低
  - 缺点
    - 更多的指令，因此代码更大
    - 需要更多的内存
    - 制造成本更高

> 并不只有 ARM 是 RISC 架构，还有 MIPS，RISC-V 等等。

### ARM 处理器的类型

ARM 处理器广泛用于移动设备、嵌入式系统、智能手机、平板电脑、智能手表、智能家居等等。不同的 ARM 处理器有不同的性能和功耗，适用于不同的场景。

![Different Types](Lecture2.assets/1740992688378.png)

- ARM Cortex-M
  - 定位是 Microcontroller Processors, 适用于嵌入式系统
  - 低功耗，低成本
  - 时钟频率通常小于 200MHz
  - 适用于实时系统
- ARM Cortex-A
  - 定位是 Application Processors, 适用于智能手机、平板电脑等
  - 支持手机操作系统，比如 Android。同时支持 Linux
  - 高性能，时钟频率通常大于 1GHz
- ARM Cortex-R
  - 定位是 Real-time Processors, 适用于实时系统
  - 通常用于汽车、工业控制等
  - 时钟频率通常为 200MHz 到 1GHz

PPT 上给了一个更加详细的表格，可以参考。

![ARM Processors](Lecture2.assets/1740992630944.png)

### 与 x86 和 MIPS 处理器的比较

## STM32 & NUCLEO-L432KC

<!-- TODO -->

## 接口

### GPIO (General Purpose Input Output, 通用输入输出)

# 堆栈跟踪解析工具 - 安装指南

## 概述

本指南将帮助你安装和配置堆栈跟踪解析工具。该工具用于解析和显示 Java、C++ 等语言的堆栈跟踪信息，使其更易于阅读和理解。

## 系统要求

- 操作系统：Linux、macOS、Windows
- 编译器：C++11 兼容的编译器（如 GCC、Clang、MSVC）
- 构建工具：CMake 3.10 或更高版本

## 依赖项

在安装堆栈跟踪解析工具之前，请确保已安装以下依赖项：

- **CMake**：用于构建项目。
- **C++ 编译器**：如 GCC、Clang 或 MSVC。
- **Git**：用于克隆项目仓库。

### 安装依赖项

#### Linux

在大多数 Linux 发行版上，你可以使用包管理器安装依赖项。例如，在 Ubuntu 上：

```bash
sudo apt-get update
sudo apt-get install -y build-essential cmake git
```

#### macOS

在 macOS 上，你可以使用 Homebrew 安装依赖项：

```bash
brew update
brew install cmake git
```

#### Windows

在 Windows 上，你可以使用 Chocolatey 安装依赖项：

```powershell
choco install cmake git
```

## 安装步骤

### 1. 克隆项目仓库

首先，克隆堆栈跟踪解析工具的项目仓库：

```bash
git clone https://github.com/yourusername/stack-trace-parser.git
cd stack-trace-parser
```

### 2. 构建项目

使用 CMake 构建项目。在项目根目录下创建一个 `build` 目录，并使用 CMake 生成构建文件：

```bash
mkdir build
cd build
cmake ..
```

然后，编译项目：

```bash
make
```

### 3. 安装工具

编译完成后，安装生成的可执行文件：

```bash
sudo make install
```

### 4. 验证安装

运行以下命令验证安装是否成功：

```bash
stack-trace-parser --version
```

如果安装成功，你应该会看到工具的版本信息。

## 常见问题解答

### 1. 如何指定输入文件？

使用 `--input` 选项指定输入文件：

```bash
stack-trace-parser --input stacktrace.txt
```

### 2. 如何指定输出文件？

使用 `--output` 选项指定输出文件：

```bash
stack-trace-parser --input stacktrace.txt --output output.txt
```

### 3. 如何启用详细模式？

使用 `--verbose` 选项启用详细模式：

```bash
stack-trace-parser --input stacktrace.txt --verbose
```

### 4. 如何指定堆栈跟踪格式？

使用 `--format` 选项指定堆栈跟踪格式：

```bash
stack-trace-parser --input stacktrace.txt --format java
```

支持的格式包括 `java` 和 `cpp`。

### 5. 如何卸载工具？

要卸载工具，请在 `build` 目录下运行以下命令：

```bash
sudo make uninstall
```

## 联系信息

如有任何问题或建议，请联系 [你的邮箱地址]。
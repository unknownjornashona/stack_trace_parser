# 堆栈跟踪解析工具 - 贡献指南

## 欢迎贡献

感谢你考虑为堆栈跟踪解析工具做出贡献！我们欢迎各种形式的贡献，包括但不限于代码提交、问题报告、文档改进和功能建议。

## 如何贡献

### 1. 提交问题

如果你在使用工具时遇到问题或发现 bug，请在 [GitHub Issues](https://github.com/yourusername/stack-trace-parser/issues) 页面提交问题。在提交问题时，请提供尽可能详细的信息，包括：

- 问题的描述
- 复现问题的步骤
- 预期的行为
- 实际的行为
- 相关的日志和堆栈跟踪信息

### 2. 提交功能建议

如果你有新的功能建议，请在 [GitHub Issues](https://github.com/yourusername/stack-trace-parser/issues) 页面提交功能请求。在提交功能请求时，请提供尽可能详细的信息，包括：

- 功能描述
- 功能的使用场景
- 功能的预期效果

### 3. 提交代码

我们欢迎你提交代码来改进工具。在提交代码之前，请确保你已经阅读并理解了以下内容：

#### 3.1 克隆项目仓库

首先，克隆堆栈跟踪解析工具的项目仓库：

```bash
git clone https://github.com/yourusername/stack-trace-parser.git
cd stack-trace-parser
```

#### 3.2 创建分支

在提交代码之前，请创建一个新的分支：

```bash
git checkout -b feature/your-feature-name
```

#### 3.3 编写代码

在编写代码时，请遵循以下编码规范：

- **代码风格**：遵循 [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)。
- **注释**：在代码中添加必要的注释，解释代码的功能和实现细节。
- **单元测试**：为新功能编写单元测试，确保代码的正确性和稳定性。

#### 3.4 提交代码

在提交代码之前，请确保代码已经通过所有测试，并且没有编译错误。然后，提交代码：

```bash
git add .
git commit -m "Add your commit message here"
```

#### 3.5 推送代码

将代码推送到你的 GitHub 仓库：

```bash
git push origin feature/your-feature-name
```

#### 3.6 创建 Pull Request

在 GitHub 页面上，创建一个新的 Pull Request。在 Pull Request 中，请提供以下信息：

- 修改的描述
- 修改的原因
- 相关的 Issue 或功能请求

### 4. 编码规范

为了保持代码的一致性和可读性，请遵循以下编码规范：

- **命名**：使用有意义的变量和函数命名，遵循驼峰命名法。
- **缩进**：使用 4 个空格进行缩进。
- **括号**：使用 K&R 风格的大括号。
- **注释**：在代码中添加必要的注释，解释代码的功能和实现细节。
- **单元测试**：为新功能编写单元测试，确保代码的正确性和稳定性。

### 5. 开发流程

我们使用以下开发流程：

- **分支管理**：使用 `main` 分支作为主分支，所有新功能和 bug 修复都在单独的分支上进行开发。
- **代码审查**：所有代码提交都需要经过代码审查。请至少邀请一位项目成员进行代码审查。
- **持续集成**：我们使用 GitHub Actions 进行持续集成，确保每次提交都通过所有测试。

## 联系信息

如有任何问题或建议，请联系 [你的邮箱地址]。
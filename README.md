# Project Euler

What is Project Euler?
>Project Euler is a series of challenging mathematical/computer programming problems that will require more than just mathematical insights to solve. Although mathematics will help you arrive at elegant and efficient methods, the use of a computer and programming skills will be required to solve most problems.
>
>The motivation for starting Project Euler, and its continuation, is to provide a platform for the inquiring mind to delve into unfamiliar areas and learn new concepts in a fun and recreational context.

Link to official website: https://projecteuler.net/about

## Enviroment Setup
Microsoft:
>C++ is a compiled language meaning your program's source code must be translated (compiled) before it can be run on your computer.

### Linux Distributions

Taken from https://code.visualstudio.com/docs/cpp/config-linux#_prerequisites:
1. Check if GCC is already installed. You can do this with:

```
gcc -v
```
2. If GCC isn't installed, run the following:

```
sudo apt-get update
```
to update ```apt``` package lists and install the GNU compiler tools and GDB debugger:

```
sudo apt-get install build-essential gdb
```

Now the compiler is installed on your system, create a ```.cpp``` file in your faivourite editor with your C++ code and compile with:

```
g++ <sourceFileName.cpp> -o <outputFileName>
```

which can be run with

```
 ./<outputFilename>
```
in the output file directory.

### Windows

Installing MinGW-w64 toolchain (for compilation) on Windows (taken from https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites):
1. You can download the latest installer from the MSYS2 page or use this direct link to the installer.

2. Run the installer and follow the steps of the installation wizard. Note that MSYS2 requires 64 bit Windows 8.1 or newer.

3. In the wizard, choose your desired Installation Folder. Record this directory for later. In most cases, the recommended directory is acceptable. The same applies when you get to setting the start menu shortcuts step. When complete, ensure the Run MSYS2 now box is checked and select Finish. This will open a MSYS2 terminal window for you.

4. In this terminal, install the MinGW-w64 toolchain by running the following command:

```
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

5. Accept the default number of packages in the toolchain group by pressing Enter.

6. Enter Y when prompted whether to proceed with the installation.

7. Add the path to your MinGW-w64 bin folder to the Windows PATH environment variable by using the following steps:

  1. In the Windows search bar, type Settings to open your Windows Settings.
  2. Search for Edit environment variables for your account.
  3. In your User variables, select the Path variable and then select Edit.
  4. Select New and add the MinGW-w64 destination folder you recorded during the installation process to the list. If you used the default settings above, then this will be the path: C:\msys64\ucrt64\bin.
  5. Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available.

Install a compiler, then translate your code with 
```
g++ <yourfile.cpp> -o <youroutputfile>
```
or
```
clang <yourfile.cpp>
```
according to your installed compilier. In this repository, reference files will be compiled into ```.exe``` files for portability on windows. For local testing on other systems, please compile the ```.cpp``` file. **For the best development experience, Arch/Debian Linux or Windows 10/11 is recommended.**

### macOS

Development is not reccomended on macOS, but for people who won't give up:

(taken from https://code.visualstudio.com/docs/cpp/config-clang-mac#_prerequisites)

>Clang might be already installed on your mac. To verify that it is, open a macOS Terminal window and enter the following command:
>
>```
>clang --version
>```
>If Clang isn't installed, enter the following command to install the command line developer tools, which include Clang:
>
>```
>xcode-select --install
>```

## Editors

You can write C++ code in virtually text editor (People have tried it in Microsoft Word!) as long as you have a compiler installed. Some famous editors are:

### Visual Studio Code (https://code.visualstudio.com/) - Windows, Linux, macOS
### vim (https://www.vim.org/) - Linux(advanced), Windows(graphical)
### emacs (https://www.gnu.org/software/emacs/) - Linux(advanced), Windows(graphical)
### Sublime Text (https://www.sublimetext.com/index2) - Windows, Linux, macOS
### Notepad++ (https://notepad-plus-plus.org/) - Windows

Microsoft (Visual Studio Code):
>The C/C++ extension doesn't include a C++ compiler or debugger, since VS Code as an editor relies on command-line tools for the development workflow. You need to install these tools or use the tools already installed on your computer.

Get started with C++ Programming with Visual Studio Code: https://code.visualstudio.com/docs/languages/cpp


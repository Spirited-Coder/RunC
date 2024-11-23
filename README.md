# CRun

This project is a C program that can execute other C programs dynamically, as requested by the user. The program allows users to easily execute C programs that have already been compiled and are available in the `bin` directory. The source files are located in the `src` directory.

## Features
- The main program can execute other C programs by specifying their number which will be shown when the main program is executed.
- The `src` directory contains the source code files (`.c`) of the programs.
- The `bin` directory contains the compiled executable files (`.out` or other extensions, depending on your system/compiler).
- Simple and easy-to-use interface to execute a C program from the command line.

## Directory Structure
```bash
/project-root
│
├── src/                # Directory containing C source files (.c)
|   ├── main.c              # The main program that executes other C programs
│   ├── program1.c
│   ├── program2.c
│   └── ...
│
├── bin/                # Directory containing compiled executable files (.out or .exe)
│   ├── program1.out
│   ├── program2.out
│   └── ...
│
├── Makefile            # Build system to compile the source code
└── README.md           # Project documentation
```

## Compilation
To build the project, use the provided Makefile. It will compile all the source files from the src directory into executables, which will be placed in the bin directory.

## Steps to build:
<ol>
  <li>
    Clone or download this repository.    
  </li>
  <li>
    Navigate to the project directory.
  </li>
  <li>
    Run make to compile the program:
  </li>
</ol>


```bash
make
```

## Usage
Once the project is compiled, you can execute any program from the bin directory using the main program.

## To run the main program:
<ol>
  <li>Navigate to the project directory.</li>
  <li>Run the executable program</li>
</ol>

```bash
./bash/main
```

## Notes
<ol>
  <li>Ensure that the programs in the bin directory have been compiled properly before attempting to execute them.</li>
  <li>The main program assumes the executables are present in the bin directory and will attempt to run them from there.</li>
  <li>You may add new C programs by placing them in the src directory and recompiling the project.</li>
</ol>

## Licence
This project is licensed under the MIT License - see the LICENSE file for details.


Feel free to customize it as needed! Let me know if there's anything else you want to add or tweak.

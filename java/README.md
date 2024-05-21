# MyJavaProject

## Description
A brief description of what your project does.

## Requirements
- Java JDK 11 or later

## Build and Run
### Compile
```bash
javac -d bin src/com/example/Main.java
```
### Run
```bash
java -cp bin com.example.Main
```

## Adding Libraries
Add libraries to lib folder then add them when compiling and running
```bash
javac -cp lib/some-library.jar -d bin src/com/example/Main.java
java -cp bin:lib/some-library.jar com.example.Main
```

<!-- TODO: Change compile method to build tool such as Maven or Gradle -->

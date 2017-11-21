# بسم الله الرحمن الرحيم

##  Lecture Contents: Android Overview
- Why Android
- Android Architecture
// Following part can be taken from Book: Mastering Android Programming with Kotlin
- Different Tools
  - AVD
  - Gradle
  - ADB
  - APK
- Java vs. JVM
- Officially Supported Language by Google ?!
- Why Kotlin is a good choice to learn
- First steps with Kotlin
- Practical Kotlin Examples
- Creating new Kotlin project in Android Studio

## AVD

## Kotlin Programming Language
- Modern
- Statically typed
- Android-compataible
- Avoids:
  - null pointer exceptions
  - excessive code verbosity
- Designed by: JetBrains
- Features include
  - <b>Safety</b>: in terms of nullability and immutability
    - Statically typed: data types known at compile time. Compiler can verify class attributes and methods at compile time.
    - More strict type system: explicitly state if <i>null</i> is allowed, so avoid <i>NullPointerException</i> at run time
  - <b>Easy debugging</b>: in terms of immutable data. Kotlin distinguishes mutable (read-write) and immutable (read-only) collections by providing convenient interfaces
  - <b>Conciseness</b>: Most of Java verbosity was eliminated
  - <b>Interoperability</b>: seamlessly work side by side with java (cross-language project)
  - <b>Versatility</b>: target many platforms, including mobile applications (android), server-side applications (backend), desktop applications, front-end code running in the browser, and even build systems (Gradle)
  - <b>Open Source</b>
  - <b>Backward Compataibility</b>: Compataible with JDK6, so it runs on android 4

## Kotlin Support
- Kotlin has good support with many IDEs, such as: Android Studio (our choice), IntelliJ, Eclipse
- Kotlin bug tracker: https://youtrack.jetbrains.com/issues/KT
- Kotlin slack channel: https://slack.kotlinlang.org

## Kotlin Examples
- Kotlin Playground: https://try.kotlinlang.org
- main function is the entry point of every kotlin applications
- Android applications have multiple entry points. main function is called implicitly by the Android framework, so we can't use it to run Kotlin code on Android platform ( different intents can start different components in the application )


```kotlin
var name="Haitham" 		// Inferred type is string
var name="Abdel Monem"		// Kotlin does not need semicolons

name=2 				// Error, because name is of type string

println("My name is $name") 	// Prints: My name is Abdel Monem

val name="Nadia"
println("My name is $(name.toUpperCase()}"))	// Prints: My name is NADIA

// Not all types can have null values
// Use question mark to allow null values for variables
var a: String = "Sakr"
a = null 			// Compilation Error

var b: String? = "Mohamed"
b = null			// Correct

// Use safe call operator to safely call methods on potentially nullable variables
savedInstanceState?.doSomething
// Previous method will be invoked only if savedInstanceState has a non-null value

for(i in 1..10){
  print(i)
} // 12345678910

// Pair data type
val son_to_father = "Haitham" to "Abdel Monem"
println(son_to_father.first)	// Prints: Haitham
println(son_to_father.second)	// Prints: Abdel Monem

// Destruct Pair into separate values, using destructive declarations
val (son, father) = son_to_father
println(son)
println(father)

// Iterate through list of pairs
val sons_to_father("Haitham" to "Abdel Monem", "Mohamed" to "Abdel Monem", "Hesham" to "Abdel Monem")
for((son, father) in sons_to_father){
  println("$son is son of $father")
}

// Alternatively, we can use forEach
sons_to_father.forEach{(son, father) ->
  println("$son is son of $father")
}



```

## Kotlin with IntelliJ Idea
- Will be used for the first part of the course

## Kotlin with Android Studio
- Android studio 3.0 has full Kotlin support
- Installation of Kotlin plug-in is not even required (Demo)
- Kotlin can be used with Android Studio 2.x, but through Kotlin plug-in
- Demo-01
  - Create new Android Project
  - with any activity
  - then, go to: Tools -> Kotlin -> Configure Kotlin in Project
  - Chose: Android with Gradle
  - Finally, chose: For All modules
- Note: Happened with me that when I picked empty project at first time, Kotlin menu was not active, but later it became active

- Kotlin REPL
  - Use Android Studio Kotlin REPL (Read Eval Print Loop)
  - Android Studio -> Tools -> Kotlin -> Kotlin REPL

## Kotlin under the hood
- Kotlin can be compiled to multiple platforms
- We will focus on android
  - Kotlin (*.kt) and Java (*.java) -> Kotlin Compiler -> *.class -> *.class and Kotlin stdlib -> *.dex -> application.apk
  - .dex extension contains Dalvik bytecode

## Kotlin Standard Library
- very small library
- distributed with Kotlin
- Required to run applications written in Kotlin
- Added automatically to applications
- Provide essential elements
- include
  - Data types (arrays, collections, lists, ranges)
  - Extensions
  - Higher-order functions
  - Various utilities to work with strings and char sequences
  - Extensions for JDK classes to work with files, IO, and threading




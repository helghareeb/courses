# بسم الله الرحمن الرحيم

## Lecture Objectives
- Download and install IntelliJ 
- Start new Kotlin project
- Compile and run Kotlin projects

## Lecture Contents: Fundamental building blocks of Kotlin
- Variables, values, and constants
- Type inference
- Input Data (Read Line)
- Add Comments
- Null safety

## General Steps
- Open IntelliJ
- Create a Project
- Java -> Kotlin
- on src directory -> Right click and add a Kotlin file
- any_name.kt
- add the following

```kotlin
fun main(args:Array<String>{

}
```
- Then, Happy Coding :)

## Variables
- Two types of variables
  - Mutable reference (read-write) -> var
  - Immutable reference (read-only) -> val

```kotlin
fun main(args: Array<String>){
  var fruit:String = "apple"
  fruit = "orange"

  val random: Int
  get() = Random().nextInt()

  val ifruit = "banana"
  ifruit = "orange" // error

}
```

## Mutability meaning
- Mutable refers to variable reference (reference itself)
- Not the properties of referenced object
- In the following example, we can't change the reference of list
- But we can still modify list

```kotlin
val list = mutableListOf("a", "b", "c")
list = mutableListOf("d", "e") // Error
list.remove("a")
```
## Variables - Again :)
- One more time

```kotlin
fun main(args:Array<String>){
  var x=10
  var y=12
  var name="Haitham"
  var strName:String = "Abdel Monem"
  var age:Int = 28
  var dept:String
  dept = "Information Systems"
  var faculty:String? // Allows Null
  println("My name is: " + name) // String concatenation
  println("My name is: $name)
  println("I am " + age + " years old.")
  println("I am $age years old.")

  name = "Haytham" //var is read-write
  val myName = "Haitham" // val is read-only
  // myName = "Mohamed" -> Compile Error
  

  // Try debugging this program
  // Add breakpoints then Debug
  // Input Data
  print("Enter your username: ")
  var userName:String=readLine()
  print("Enter your age: ")
  var userAge:Int=readLine()!!.toInt()
  var dVar=readLine().toDouble()
  
  // Comments -> This is a single line comment
  /*
	This
	is
	a multi-line
	comment
  */

  //Null Safety
  var nullNotAllowed:String = null // Compilation Error
  var nullAllowed:String? = null // null allowed
  // !! -> Two excalamation marks ensure that variable has value (not null)
  println(name!!) // will run only if name has value (not null)
  
  

  
  
  
} 


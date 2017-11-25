import java.util.*

// بسم الله الرحمن الرحيم

fun main(args:Array<String>){
    println("Welcome to Calculate My Age By Year App!...")
    print("Enter your Year of Birth: ")
    var yearBirth:Int=readLine()!!.toInt()

//    val yearsOld = Calendar.getInstance().get(Calendar.YEAR) - yearBirth

    val yearsOld = 2017 - yearBirth
    println("You are $yearsOld years old.")
    println("Have a nice Day!")
}
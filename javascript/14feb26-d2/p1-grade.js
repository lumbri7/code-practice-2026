let marks = prompt("Enter marks:");
if(marks < 0){
    console.log("Marks cannot be less than 0")
} 
else if(marks <= 49){
    console.log("Fail");
} 
else if(marks <= 69){
    console.log("Grade D")
} 
else if(marks <= 79){
    console.log("Grade C")
} 
else if(marks <= 89){
    console.log("Grade B")
} 
else if(marks <= 100){
    console.log("Grade A")
} 
else if(marks > 100){
    console.log("Marks cannot be grater that 100")
}
else
    console.log("Invalid")

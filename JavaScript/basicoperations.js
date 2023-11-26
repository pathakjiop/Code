// Prompt the user for input
var num1 = parseFloat(prompt("Enter the first number:"));
var num2 = parseFloat(prompt("Enter the second number:"));

// Check if the input is valid numbers
if (!isNaN(num1) && !isNaN(num2)) {
  // Perform the addition
  var sum = num1 + num2;

  // Display the result
  console.log("The sum of " + num1 + " and " + num2 + " is: " + sum);
} else {
  // Handle invalid input
  console.log("Invalid input. Please enter valid numbers.");
}

const prompt = require('prompt-sync')();

// Prompt the user for their age
var age = prompt("Enter your age:");
3
// Check if the input is a valid number
if (!isNaN(age)) {
  if (age >= 18) {
    console.log("You are an adult.");
  } else {
    console.log("You are a minor.");
  }
} else {
  // Handle invalid input
  console.log("Invalid input. Please enter a valid age as a number.");
}

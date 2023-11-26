// Prompt the user to enter a list of numbers separated by commas
var userInput = prompt("Enter a list of numbers separated by commas:");

// Split the user input into an array using commas as the delimiter
var numberArray = userInput.split(",");

// Convert the array elements to numbers (assuming they are all numeric)
for (var i = 0; i < numberArray.length; i++) {
  numberArray[i] = parseFloat(numberArray[i]);
}

// Display the resulting array
console.log("User input as an array:", numberArray);

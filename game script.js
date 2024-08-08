let secretNumber;
let attempts;

function startNewGame() {
    secretNumber = Math.floor(Math.random() * 100) + 1;
    attempts = 0;
    document.getElementById('feedback').textContent = '';
    document.getElementById('attempts').textContent = 'Attempts: 0';
    document.getElementById('guess-input').value = '';
    document.getElementById('play-again').style.display = 'none';
}

function checkGuess() {
    const guess = parseInt(document.getElementById('guess-input').value);
    attempts++;
    document.getElementById('attempts').textContent = 'Attempts: ' + attempts;

    if (isNaN(guess)) {
        document.getElementById('feedback').textContent = 'Please enter a valid number.';
    } else if (guess < secretNumber) {
        document.getElementById('feedback').textContent = 'Too low! Try again.';
    } else if (guess > secretNumber) {
        document.getElementById('feedback').textContent = 'Too high! Try again.';
    } else {
        document.getElementById('feedback').textContent = 'Congratulations! You guessed it right!';
        document.getElementById('play-again').style.display = 'inline';
    }
}

document.addEventListener('DOMContentLoaded', (event) => {
    startNewGame();
});

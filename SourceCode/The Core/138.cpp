A sentence is considered correct if:

it starts with a capital letter;
it ends with a full stop, question mark or exclamation point ('.', '?' or '!');
full stops, question marks and exclamation points don't appear anywhere else in the sentence.
Given a sentence, return true if it is correct and false otherwise.

Example

For sentence = "This is an example of *correct* sentence.",
the output should be
solution(sentence) = true;

For sentence = "!this sentence is TOTALLY incorrecT",
the output should be
solution(sentence) = false.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string sentence

A string without newline characters.

Guaranteed constraints:
2 ≤ sentence.length ≤ 100.

[output] boolean

true if the given sentence is correct, false otherwise.
----------------------------------------------------------------------------------
bool solution(std::string sentence) {
  std::regex regex("^[A-Z][^.?!]*[.?!]$");
  return std::regex_match(sentence, regex);
}

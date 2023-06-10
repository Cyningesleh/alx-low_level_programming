#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @s: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int s)

{

if ((s >= 'a' && s <= 'z') ||

(s >= 'A' && s <= 'Z'))

return (1);

else

return (0);

}

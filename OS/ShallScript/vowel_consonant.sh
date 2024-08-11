printf "Enter Character vowel or consonant: "
read char;

char_lower=$(echo "$char" | tr '[:upper:]' '[:lower:]')

if [[ "$char_lower" == [aeiou] ]]; 
then
    printf "The character is a vowel.\n"
else
    printf "The character is a consonant.\n"
fi

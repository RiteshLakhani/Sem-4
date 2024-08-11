echo "Enter a Number to check if it's Palindrome or Not: "
read num

reverse=0
original=$num

while [ $num -gt 0 ]
do
    remainder=$(( $num % 10 ))
    reverse=$(( $reverse * 10 + $remainder ))
    num=$(( $num / 10 ))
done

if [ $original -eq $reverse ]
then
    echo "$original is a Palindrome"
else
    echo "$original is not a Palindrome"
fi

echo 
read num

rev=0
original = $num

while [ $num -gt 0]
do
    r = $((num%10))
    rev = $(($rev*10+r));
    num = $(($n/10))
done

if

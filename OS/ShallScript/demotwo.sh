printf "Enter the first integer number : "
read a
printf "Enter the second integer number : "
read b
printf "Enter the third integer number : "
read c
printf "Enter the fourth integer number : "
read d
printf "Enter the fifth integer number : "
read e

echo "Sum:$a+$b+$c+$d+$e is $((a+b+c+d+e))"
echo "Sub:$a-$b-$c-$d-$e is $((a-b-c-d-e))"
echo "Mul:$a*$b*$c*$d*$e is $((a*b*c*d*e))"
echo "Divi:$a/$b is $(awk "BEGIN {printf \"%.2f\",$a/$b}")"

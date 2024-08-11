printf "Enter 1st Subject Mark: "
read sub1;
printf "Enter 2nd Subject Mark: "
read sub2;
printf "Enter 3rd Subject Mark: "
read sub3;
printf "Enter 4th Subject Mark: "
read sub4;
printf "Enter 5th Subject Mark: "
read sub5;

total=$((sub1 + sub2 + sub3 + sub4 + sub5))
echo "Total Mark: $total"
percentage=$((total * 100 / 500))

echo "Percentage: $percentage%"

if [ $percentage -lt 35 ]; then
    echo "Grade: F"
elif [ $percentage -lt 50 ]; then
    echo "Grade: D"
elif [ $percentage -lt 60 ]; then
    echo "Grade: C"
elif [ $percentage -lt 70 ]; then
    echo "Grade: B"
elif [ $percentage -lt 80 ]; then
    echo "Grade: A"
else
    echo "Grade: A+"
fi

total = $((sub1+sub2+sub3+sub4+sub5))
echo "Total: $total"
percentage = $((total * 100/ 500));
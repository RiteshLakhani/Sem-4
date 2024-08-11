echo "Enter Number: "
read a;

i=1;
sum=0;
while [ $i -le $a ]
do
    sum=$((sum + i))
    i=$((i + 1))
done

echo "Sum of N numbers: $sum";

avg=$(awk "BEGIN {printf \"%.2f\", $sum/$a}")
echo "Average using awk: $avg"

$avg=(awk "BEGIN {PRINTF \"%.2F\", $sum/$a}")
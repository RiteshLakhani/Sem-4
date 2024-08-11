echo "Enter Electricity Unit Charges: "
read a

if [ $a -le 50 ]; then
    bill=$(awk "BEGIN {printf \"%.2f\", $a * 0.50}")
elif [ $a -le 150 ]; then
    bill=$(awk "BEGIN {printf \"%.2f\", 50 * 0.50 + ($a - 50) * 0.75}")
elif [ $a -le 250 ]; then
    bill=$(awk "BEGIN {printf \"%.2f\", 50 * 0.50 + 100 * 0.75 + ($a - 150) * 1.20}")
else
    bill=$(awk "BEGIN {printf \"%.2f\", 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + ($a - 250) * 1.50}")
fi

surcharge=$(awk "BEGIN {printf \"%.2f\", $bill * 0.20}")
total_bill=$(awk "BEGIN {printf \"%.2f\", $bill + $surcharge}")

echo "Electricity Bill: Rs. $total_bill"

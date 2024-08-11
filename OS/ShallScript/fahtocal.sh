printf "Enter Fahrenheit of the Temp: "
read temp;

celsius=$(awk "BEGIN {printf \"%.2f\", (5/9) * ($temp - 32)}")

echo "Temperature in Celsius: $celsius"

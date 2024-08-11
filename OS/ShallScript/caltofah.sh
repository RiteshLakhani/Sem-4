printf "Enter Celsius of the Temp: "
read temp;

fahrenheit=$(awk "BEGIN {printf \"%.2f\", (9/5) * $temp + 32}")

echo "Temperature in Fahrenheit: $fahrenheit"

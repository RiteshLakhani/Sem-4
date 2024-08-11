echo "Enter Basic Salary: "
read basic_salary

if [ $basic_salary -ge 30000 ]; then
    da=$((basic_salary * 95 / 100))
    hra=$((basic_salary * 30 / 100 + da))
elif [ $basic_salary -ge 20000 ]; then
    da=$((basic_salary * 90 / 100))
    hra=$((basic_salary * 25 / 100 + da))
elif [ $basic_salary -ge 10000 ]; then
    da=$((basic_salary * 80 / 100))
    hra=$((basic_salary * 20 / 100 + da))
else
    da=$((basic_salary * 40 / 100))
    hra=$((basic_salary * 15 / 100 + da))
fi

gross_salary=$((basic_salary + da + hra))

echo "DA: $da"
echo "HRA: $hra"
echo "Gross Salary: $gross_salary"

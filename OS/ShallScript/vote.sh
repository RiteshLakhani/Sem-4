printf "Enter the Age of Person: "
read age

if [ $age -ge 18 ]
then
    echo "Person is eligible for vote"
else
    echo "Person is not eligible for vote"
fi

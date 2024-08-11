printf "Enter 1st Number : "
read a;

if [ $((a % 2)) -eq 0 ]
then
  echo "Number is Even"
else
    echo "Number is odd"
fi


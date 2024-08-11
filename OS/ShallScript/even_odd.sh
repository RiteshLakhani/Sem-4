printf "Enter 1st Number : "
read a;

if [ $((a % 2)) -eq 0 ]
then
  echo "Number is Even"
fi

if [ $((a % 2)) -ne 0 ]
then 
    echo "Number is odd"
fi


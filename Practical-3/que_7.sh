echo "Enter Number 1"
read num1
echo "Enter Number 2"
read num2
echo "How Many Fibonnaci Numbers You Want to Print"
read n
n=`expr $n - 2`
i=0
fib=("$num1" "$num2")
while [ $n -gt $i ]
do
    idx=`expr $i + 2`
    temp=`expr ${fib[$i]} + ${fib[$i+1]}`
    fib[$idx]=$temp
    i=`expr $i + 1`
done
echo "Fibonnaci Series: ${fib[@]}"
isTrue=0
while [ $isTrue = 0 ]
do
echo "Enter Capital Of Gujarat:"
read cap
if [ $cap = "gandhinagar" ] || [ $cap = "Gandhinagar" ]
then
isTrue=1
fi
done
/workspace/exam -h
find /workspace/ -type f
cat /workspace/key.txt
/workspace/exam -e NOVA
mv /workspace/input.txt /workspace/input
/workspace/exam -e NOVA
cat -An /workspace/input
sed -i '1s/$/ /' /workspace/input
/workspace/exam -e NOVA
mv /workspace/output /workspace/flag

/workspace/exam -h
find /workspace/ -maxdepth 5
find /workspace/ -type f -name "*signal*"
grep -rni "access_key" /workspace/
mv /workspace/archive/2026/signal-A.bin /workspace/input
/workspace/exam -e STAR
mv /workspace/output /workspace/flag
mv /workspace/inbox/signal-B.bin /workspace/input
/workspace/exam -e STAR
cat  /workspace/output >> /workspace/flag

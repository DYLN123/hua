#!/bin/bash
/workspace/exam -help
find /workspace -maxdepth 5 -printf '%y %p\n'
mv /workspace/input.bin /workspace/input
/workspace/exam -e MOON
mv /workspace/output /workspace/flag

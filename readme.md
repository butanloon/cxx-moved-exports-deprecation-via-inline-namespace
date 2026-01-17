## Introduction

This repository is a playground for experimenting with different build configurations related to deprecation of exports moved to another header.

### Build

Try building 2 different versions: one should produce a deprecation warning, another should not produce it.

```bash
mkdir build && cd build
cmake -DMY_LIB_VERSION=1345689110 ..
cmake --build .
cmake -DMY_LIB_VERSION=1345689310 ..
cmake --build .
```

## Run

Run the example executable to see the version used.

## Note

Please, do not use this as is

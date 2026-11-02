# 2Dロボットシミュレーター状態推定
## Build & Test
Requires CMake 3.21 or later.

### Debug
```bash
cmake --preset debug
cmake --build --preset debug --parallel
ctest --preset debug
```

### Release
```bash
cmake --preset release
cmake --build --preset release --parallel
ctest --preset release
```

## License
このリポジトリは[MIT License](./LICENSE)の下で公開されています。

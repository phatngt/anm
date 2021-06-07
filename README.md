# RSA - cryptosystem

Implement RSA alogorithm by C++ language. This project is run on linux (Debian) enviroment.

## Install library for this project

Install NTL library

```bash
sudo apt-get install -y libntl-dev
```

Install GMP library

```bash
sudo apt-get install -y libgmp-dev
```

## Install tool to build the project
Install make
```bash
sudo apt-get install make
```

## Build and run the project

Build project
```bash
make all
```

Run project
```bash
make run [filename.txt]
```

Clean pre-compile project
```bash
make clean
```

## Result
Private key is stored in:
```bash
privatekey.txt
```
Public key is stored in:
```bash
publickey.txt
```
Content is encrypted store in:
```bash
encryptFile.txt
```
Content is decrypted store in:
```bash
decryptFile.txt
```

## License
[MIT](https://choosealicense.com/licenses/mit/)

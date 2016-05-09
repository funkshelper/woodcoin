# BSD BUILD NOTES

## General

Potentially helpful are the following lines, though with many configurations they will be unnecessary: 

```
export CC=clang
export CXX=clang++ **OR** export CXX=c++ *(try one if the other does not work)*
export CXXFLAGS="-I/usr/local/include -I/usr/local/include/db48"
export LDFLAGS="-L/usr/local/lib -L/usr/local/lib/db48"
```

The last two have strictly to do with how your pkg manager installed libdb4.8. 

If you're unsure, you can try creating a symbolic link to to /usr/include/db4.8 and simply use the above sequence:

`ln -s /usr/local/include/db4.8 /usr/include/db4.8`

Or vice versa. 

## QT

To build the **QT Wallet** on FreeBSD 10.x: 

### Dependencies

`pkg install gmake qt4 qt4-qmake databases/db48 devel/boost-libs openssl libqrencode`

### Sequence

```
qmake-qt4 woodcoin-qt.pro "BDB_LIB_PATH=/usr/local/lib/db4.8" "BDB_INCLUDE_PATH=/usr/include/db4.8" "BDB_LIB_SUFFIX=-4.8" "USE_UPNP=-"
gmake
```

This should build an executable of the QT graphical wallet. 

## Daemon (woodcoind)

To only build **woodcoind** on BSD:

### Dependencies

(As root:)

`pkg install gmake databases/db48 devel/boost-libs openssl`

### Sequence

```
cd src
export CC=clang
export CXX=c++
export CXXFLAGS="-I/usr/local/include -I/usr/local/include/db48"
export LDFLAGS="-L/usr/local/lib -L/usr/local/lib/db48"
chmod +xr leveldb
rm db.h && mv db.bsd.h db.h
gmake -f makefile.bsd "USE_UPNP=-"
```

## Post-Installation

For usage help, `./woodcoind --help`
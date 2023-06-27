# fitqlite

Converts Garmin FIT files to SQLite databases. Works with FIT-SDK v21.115 and SQLite 3.42.0.

# Build Instructions

## Get FIT SDK
- Go to the https://developer.garmin.com/fit/download/, press Accept & Download
- Unzip downloaded file, and place the content of `cpp` into `lib/fit-sdk` directory in project.

## Get SQLite
- Go to the https://www.sqlite.org/download.html and download `sqlite-src-3420000.zip`
- Place the contents of the zip file into the `lib/sqlite3` directory in project.

## Compile sources (on OSX)

`make build-osx`

At the moment i do not have any Windows PCs, so if you want to build this on windows, and if you know how - contributions welcome :D
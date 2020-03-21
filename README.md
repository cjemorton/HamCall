# HamCall
## Clem Morton
# This program is designed to download the most recent version of the Canadian Ham Radio Callsign database and perform a lookup on that table. It is written in C so it can be as machine independent as possible.
Canadian Ham Radio Callsign Lookup Script

Dependencies.

- For Debian systems run: `apt-get install libcurl4-openssl-dev` to install curl libraries.

-- NOTE: Check out - https://youtu.be/PQF_IU2YXIg


-- NOTE: This program could be reimplemented in crystal.
  - Download the zip file of callsigns.
  - Store the content of the zip file in REDIS database.
  - Query the database for callsigns.

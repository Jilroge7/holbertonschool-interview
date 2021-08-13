#!/usr/bin/node
const process = require('process');
const request = require('request');
const id = process.argv[2];
const reqURL = 'https://swapi-api.hbtn.io/api/films/' + id;

request(reqURL, async (error, response, body) => {
  if (!error) {
    const chars = JSON.parse(body).characters;
    const newPromise = (reqURL) => {
      return new Promise(function (resolve, reject) {
        request(reqURL, (error, response, body) => {
          if (error) reject(error);
          else resolve(body);
        });
      });
    };
    for (const char in chars) {
      const star = await newPromise(chars[char]);
      const charList = JSON.parse(star);
      console.log(charList.name);
    }
  }
});

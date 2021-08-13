#!/usr/bin/node
const request = require('request');
const reqURL = 'https://swapi-api.hbtn.io/api/films/';
const id = process.argv[2];

request(reqURL + id, function (error, result, body) {
  const charList = JSON.parse(body).characters;
  for (let i = 0; i < charList.length; i++) {
    request(charList[i], function (error, result, body) {
      console.log(JSON.parse(body).name);
      if (error) {
        return (console.log('error'));
      }
    });
  }
  if (error) {
    return (console.log('error'));
  }
});

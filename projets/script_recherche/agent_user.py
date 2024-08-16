import requests
import bs4
import pandas as pd
import yaml


proxy_list = pd.read_html(response.text)[0]
proxy_list["url"] = "http://"+proxy_list["IP Address"] + ":" + proxy_list["Port"].astype(str)
proxy_list.head()

https_proxies = proxy_list[proxy_list["Https"]=="yes"]
https_proxies.count()





with open ("headers.yaml", "r") as f_headers:
    browser_headers = yaml.safe_load(f_headers)
browser_headers["Firefox"]

url = "https://httpbin.org/ip"
good_proxies = set()
headers = browser_headers["Chrome"]
for proxy_url in https_proxies["url"]:
    proxies = {
        "http": proxy_url,
        "https": proxy_url,
    }

    try:
        response = requests.get(url, headers = headers, proxies = proxies, timeout = 5)
        good_proxies.add(proxy_url)
        print(f"Proxy {proxy_url} OK, ajouter sur la liste good_proxy")
    except Exception:
        pass
    if len(good_proxies) >= 5:
        break





headers = {"user-agent" : "toto"}
response = requests.get("https://httpin.org/user-agent", headers = browser_headers["Firefox"])
response = requests.get("https://free-proxy-list.net/")
response.json()

proxies = {
    "http": "http://77.86.36.251:8080",
    "https": "http://77.86.36.251:8080",
}
response = requests.get("https://httpbin.org/ip", proxies = proxies)
response.json()

# Erreur 403 : Forbidden  (le site web refuse de répondre à la requête)
headers = {"user-agent" : "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/127.0.0.0 Safari/537.36 Edg/127.0.0.0"
           }


    ### Il faut que je fasse une recherche python d'un film ou serie sur les sites de streaming illegaux qui ne sont aps répertié par google
    ##juststream.id
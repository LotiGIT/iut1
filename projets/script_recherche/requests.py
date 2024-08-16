url = "https://httpbin.org/anything"
for browser, headers in browser_headers.items():
    print(f"\n\nUsing {browser} headers\n")
    for proxy_url in good_proxies:
        proxies = proxiese = {
            "http": proxy_url,
            "https": proxy_url,
        }
        try:
            response = requests.get(url, headers = headers, proxies = proxies, timeout = 5)
            print(response.json())
        except Exception:
            print(f"Proxy {proxy_url} failed, essaie un autre")
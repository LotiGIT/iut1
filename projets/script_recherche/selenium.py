from selenium import webdriver

for proxy_url in good_proxies:
    proxy = proxy_url.replace("http://", "")

    firefox_capabilities = webdriver.DesiredCapabilities.FIREFOX
    firefox_capabilities['marionette'] = True

    firefox_capabilities['proxy'] = {
        "proxyType": "MANUAL",
        "httpProxy": proxy,
        "ftpProxy": proxy,
        "sslProxy": proxy,
    }

    driver = webdriver.Firefox(capabilities = firefox_capabilities)
    try:
        driver.get("https://httpbin.org/ip")
    except Exception:
        pass
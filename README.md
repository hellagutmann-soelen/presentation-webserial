# Interacting with Hardware in the Frontend

- Sharing experiences I made
- Showing some live examples
- Showing code examples

<wm-tutorial tipps="Benutze die rechte Pfeiltaste ➡ oder wische nach links um zur nächsten Folie zu gelangen. Mit F11 kannst du zum Vollbild Modus wechseln."></wm-tutorial>

---

## How it began for me

- Browser interacting with hardware existed since the beginning
- Companies and products modified browser sourcecodes or created browser plugin in order to have an web inteface for their hardware
- This is not about this but rather about webstandards and how it all began

---

## Firefox OS

<img src="/assets/firefox-os.jpg" alt="Firefox OS" width="400"/>
<img src="/assets/firefox-os-interface.jpg" alt="Firefox OS" width="230"/>

- Firefox created the Web Apps Standard (a predecessor of PWA)
- App manifest similar to manifest.webmanifest
- Mozilla tried to push a lot of [web standards](https://wiki.mozilla.org/WebAPI) out in order to make Firefox OS possible ([Vibration API](https://developer.mozilla.org/en-US/docs/Web/API/Vibration_API), [Device Orientation API](https://developer.mozilla.org/en-US/docs/Web/API/Device_orientation_events/Detecting_device_orientation), Geolocation API, WebUSB, WebRTC, [WebNFC](https://developer.mozilla.org/en-US/docs/Web/API/Web_NFC_API), WebBluetooth, WebSMS, WebTelephony, Camera API etc.)
- Some API's survived after the collapse of Firefox OS, a lot of these standards didn't
- Some standards were redefined entirely, e.g. WebBluetooth


---

### Webbluetooth

[Webmontag Webbluetooth](https://webmontag-webbluetooth.netlify.app/)

---

### Why do we see a Renaissance of Web Hardware standards?

- Google tries to make PWA (Progressive Web App) a thing
- As in: Writing an application with webtechnologies (html, css, javascript) and be integrated into your Operating system like any other application (installable)
- Thus: PWA should also be cabable to access the hardware
- Google tries to slowly reach this goal, somewhat

### Web USB

- Similar interface like for Web Bluetooth
- [Access USB Devices on the Web](https://developer.chrome.com/en/articles/usb/)
- Mentioning quickly this also exist and runs stable on all chrome like browsers


### Web Serial

- Similar interface like for Web Bluetooth and Web USB
- Of of the ideas of Web Serial: Connect to old devices which only provide serial interfaces and make them accessible again with web based user interfaces

- For that I created yet another example

---

# Vielen Dank!

![webmontag-webbluetooth.netlify.app](/assets/url.png)

[webmontag-webbluetooth.netlify.app](https://webmontag-webbluetooth.netlify.app/)

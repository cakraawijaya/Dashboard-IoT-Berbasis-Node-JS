[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Dashboard-IoT-Berbasis-Node-JS?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Website-light.svg?style=flat&logo=googlechrome&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Workshop%20Assignment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Dashboard-IoT-Berbasis-Node-JS
Proyek ini memiliki efisiensi sumber daya dan kinerja yang tinggi, termasuk pemrosesan data secara real-time, serta keamanan siber yang baik.

<br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Fitur | Publish dan Subscribe |
| Kerangka Kerja | Bootstrap 5, ExpressJS, Font-Awesome 6 |
| Papan Pengembangan | DOIT ESP32 DEVKIT V1 |
| Skema | Virtual |
| Protokol komunikasi | Message Queuing Telemetry Transport (MQTT) |
| Platform IoT | EMQX Broker |
| Peralatan | Wokwi, MQTTX, Visual Studio Code, NodeJS |

<br><br>

## Unduh & Instal
1. Visual Studio Code

   <table><tr><td width="810">

   ```
   https://bit.ly/VScode_Installer
   ```

   </td></tr></table><br>

2. NodeJS

   <table><tr><td width="810">

   ```
   https://nodejs.org/en/download/prebuilt-installer
   ```

   </td></tr></table><br>

3. MQTTX

   <table><tr><td width="810">

   ```
   https://mqttx.app/downloads
   ```

   </td></tr></table><br>

4. Font-Awesome

   <table><tr><td width="810">

   ```
   https://fontawesome.com/download
   ```

   </td></tr></table>

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>

2. Buka direktori ``` Dashboard ```, lalu buka ``` CMD ``` di dalam direktori tersebut.<br><br>

   • Pertama, jika tidak ada kesalahan yang terjadi maka lewati saja langkah ini, tetapi jika sebaliknya, silakan salin perintah berikut:

      <table><tr><td width="810">

      ````bash
      npm install
      ````

      </td></tr></table><br>

   • Kedua, untuk menjalankan server dengan penyegaran berulang kali secara otomatis dapat dilakukan dengan perintah:

      <table><tr><td width="810">

      ````bash
      nodemon server.js
      ````

      </td></tr></table><br>

3. Buka ``` Peramban ``` anda, lalu ketik -> ``` localhost:3000 ``` atau sesuaikan dengan yang ada di ``` CMD ``` anda.<br><br>

4. Isi form Topic dan Data terlebih dahulu, misalnya: ``` kelasiot/pot ``` | ``` 4095 ``` -> kemudian klik ``` Publish ```, maka hasilnya akan tertampil.<br><br>
   
5. Port dan Topic Subscribe ini dapat diubah sesuai keinginan pengguna. Pengaturan ini terdapat dalam file bernama ``` server.js ```.<br><br>

6. Bersenang-senang dan nikmatilah [Selesai].

<br><br>

## Sorotan
<table>
<tr>
<th width="420">Tampilan Dashboard</th>
<th width="420">Menjalankan Server</th>
</tr>
<tr>
<td><img src="Documentation/Web Dashboard.jpg" alt="dashboard"></td>
<td><img src="Documentation/Nodemon Server.js.jpg" alt="server"></td>
</tr>
</table>

<br><br>

## Simulasi Dengan MQTTX
1. Unduh dan buka aplikasi ini di Laptop atau Komputer anda.<br><br>

2. Klik ``` + New Connection ``` -> lalu beri nama koneksi sesuai dengan keinginan anda -> lalu klik ``` Connect ```.<br><br>

3. Buat topic baru dengan nama ``` kelasiot/pot ```.<br><br>

4. Kemudian untuk pengaturan topic bisa anda sesuaikan seperti yang terlihat di bawah ini:

   • Format Payload to Publish by : &nbsp; ``` Plaintext ```.

   • Qos : &nbsp; ``` 0 ```.

   • Beri tanda centang pada ``` Retain ```.<br><br>

5. Publish data.<br><br>

6. Setelah itu, silakan klik ``` + New Subscription ``` -> lalu cantumkan topic yang ingin anda subscribe, contohnya: ``` kelasiot/pot ```.<br><br>

7. Tunggu hingga hasil subscribenya tertampil.<br><br>

8. Bersenang-senang dan nikmatilah [Selesai].

<br><br>

## Apresiasi
Jika karya ini bermanfaat bagi anda, maka dukunglah karya ini sebagai bentuk apresiasi kepada penulis dengan mengklik tombol ``` ⭐Bintang ``` di bagian atas repositori.

<br><br>

## Penafian
Aplikasi ini merupakan hasil pengembangan dari praktikum Kelas IoT. Saya tidak memungkiri bahwa saya masih menggunakan layanan pihak ketiga dalam pengerjaan ini, antara lain: library, framework, dan lain sebagainya.

<br><br>

## LISENSI 
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.

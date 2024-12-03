[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Dashboard-IoT-Berbasis-Node-JS?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Website-light.svg?style=flat&logo=googlechrome&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Workshop%20Assignment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Dashboard-IoT-Berbasis-Node-JS
This project has high resource efficiency and performance, including real-time data processing, as well as good cybersecurity.

<br>

## Project Requirements
| Part | Description |
| --- | --- |
| Features | • Publish<br>• Subscribe |
| Framework | • Bootstrap 5<br>• Express.js<br>• Font-Awesome 6 |
| Libraries | MQTT.js |
| Development Board | DOIT ESP32 DEVKIT V1 |
| Scheme | Virtual |
| Communications Protocol | Message Queuing Telemetry Transport (MQTT) |
| IoT Platform | EMQX Broker |
| Tools | • Wokwi<br>• MQTTX<br>• Visual Studio Code<br>• Node.js |

<br><br>

## Download & Install
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

## Get Started
1. Download and extract this repository.<br><br>

2. Open the ``` Web ``` directory, then open ``` CMD ``` inside the directory.<br><br>

   • First, if no error occurs then just skip this step, but if otherwise then please copy the following command:

      <table><tr><td width="810">

      ````bash
      npm install
      ````

      </td></tr></table><br>

   • Secondly, to run the server with repeated refreshes automatically can be done with the command:

      <table><tr><td width="810">

      ````bash
      nodemon server.js
      ````

      </td></tr></table><br>

3. Open your ``` Browser ```, then type -> ``` localhost:3000 ``` or customize the one on your ``` CMD ```.<br><br>

4. Fill in the Topic and Data form first, for example: ``` kelasiot/pot ``` | ``` 4095 ``` -> then click ``Publish``, then the result will be displayed.<br><br>

5. This port and Topic Subscribe can be changed according to the user's preference. These settings are contained in a file called ``server.js``.<br><br>

6. Have fun and enjoy [Done].

<br><br>

## Simulation With MQTTX
1. Download and open this application on your Laptop or Computer.<br><br>

2. Click ``` + New Connection ``` -> then name the connection as you want -> then click ``` Connect ```.<br><br>

3. Create a new topic with the name ``` kelasiot/pot ```.<br><br>

4. Then for topic settings you can customize as seen below:

   • Format Payload to Publish by : &nbsp; ``` Plaintext ```.

   • Qos : &nbsp; ``` 0 ```.

   • Put a check mark on ``` Retain ```.<br><br>

5. Publish data.<br><br>

6. After that, please click ``` + New Subscription ``` -> then list the topics you want to subscribe, for example: ``` kelasiot/# ```.<br><br>

7. Wait for the subscription results to be displayed.<br><br>

8. Have fun and enjoy [Done].

<br><br>

## Simulation With Wokwi
Link to simulate : <strong><a href="https://wokwi.com/projects/413253569138415617" target="_blank">Click Here</a></strong>

<br><br>

## Highlights
<table>
<tr>
<th width="420">Dashboard View</th>
<th width="420">Running the Server</th>
</tr>
<tr>
<td><img src="Documentation/Web Dashboard.jpg" alt="dashboard"></td>
<td><img src="Documentation/Nodemon Server.js.jpg" alt="server"></td>
</tr>
</table>
<table>
<tr>
<th width="420">MQTTX Simulation</th>
<th width="420">Wokwi Simulation</th>
</tr>
<tr>
<td><img src="Documentation/MQTTX Simulation.jpg" alt="mqttx"></td>
<td><img src="Documentation/Wokwi Simulation.jpg" alt="wokwi"></td>
</tr>
</table>

<br><br>

## Appreciation
If this work is useful to you, then support this work as a form of appreciation to the author by clicking the ``` ⭐Star ``` button at the top of the repository.

<br><br>

## Disclaimer
This application is the result of the development of the Kelas IoT Workshop. I do not deny that I still use third-party services in this work, including: libraries, frameworks, and so on.

<br><br>

## LICENSE
MIT License - Copyright © 2024 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.

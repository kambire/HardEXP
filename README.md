# **hardEXP - Custom Experience Rate Module for AzerothCore**

![AzerothCore](https://img.shields.io/badge/AzerothCore-3.3.5-blue)  
![License](https://img.shields.io/badge/License-MIT-green)  

The **hardEXP** module allows you to adjust the global experience rate on your AzerothCore server. With this module, you can set custom experience rates (e.g., 0.1x for 10% of the default XP) to create a more challenging gameplay experience.

---

## **Features**
- **Customizable Global XP Rate**: Adjust the experience rate for all players.
- **Easy Configuration**: Modify the experience rate via a simple `.conf` file.
- **Client-Side Compatibility**: Displays the correct XP amount in the client UI.
- **No Database Changes Required**: Fully script-based and easy to install.

---

## **Installation**

### 1. Clone the Module
Clone this repository into your `modules` directory:
```bash
cd path/to/azerothcore/modules
git clone https://github.com/yourusername/hardEXP.git
```

### 2. Import Configuration
Copy the configuration file to your server's `etc` directory:
```bash
cp modules/hardEXP/conf/mod_hardexp.conf.dist etc/worldserver.conf.d/mod_hardexp.conf
```

### 3. Recompile the Core
Recompile AzerothCore to include the new module:
```bash
cd path/to/azerothcore/build
cmake ..
make -j$(nproc)
```

---

## **Configuration**
Edit the configuration file (`etc/worldserver.conf.d/mod_hardexp.conf`) to set your desired experience rate:

```ini
[hardEXP]
# XP Rate (0.1 = 10% of default XP)
XpRate = 0.1
```

---

## **How It Works**
- The module hooks into the `OnGiveXP` event and adjusts the experience gained by players.
- The adjusted XP amount is displayed correctly in the client UI.
- The configuration is reloaded automatically when the server restarts.

---

## **Compatibility**
- **AzerothCore Version**: 3.3.5
- **Dependencies**: None

---

## **Contributing**
Contributions are welcome! If you'd like to improve this module, follow these steps:
1. Fork the repository.
2. Create a new branch for your feature or bugfix.
3. Submit a pull request with a detailed description of your changes.

---

## **License**
This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.

---

## **Credits**
- Developed by **[Geeks Team]**.
- [AzerothCore](https://www.azerothcore.org/) Framework.

---

## **Support**
If you encounter any issues or have questions, feel free to open an issue on the [GitHub repository](https://github.com/kambire/hardEXP).

---

## **Example**
With `XpRate = 0.1`, players will receive 10% of the default experience from quests, mobs, and other sources. The client UI will display the adjusted XP amount correctly.

---

Enjoy your custom experience rate with **hardEXP**! 🎮

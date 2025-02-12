# 🌟 LDR-Based Binary Decoder: LiFi

## 📌 Overview
This project implements a **Light-Dependent Resistor (LDR)-based binary decoder** using the **LiFi Concept**, designed to interpret variations in light intensity and convert them into a binary sequence. The binary data is then decoded into ASCII characters, making it useful for optical communication applications.

## 🔧 Components Used
- 🖥️ **Microcontroller** (Arduino or compatible board)
- 🌞 **LDR (Light Dependent Resistor)**
- 🔌 **Resistor** (appropriate value to form a voltage divider with the LDR)
- 💡 **Light Source** (LED or another light-emitting device)
- 🔗 **Jumper Wires**
![Receiver Schematic](https://github.com/PrajwalUlli/LiFi/blob/main/receiver%20schematic.png)

## 🛠️ How It Works
1. **📡 Light Intensity Measurement:** The LDR, connected to **analog pin A0**, continuously reads light intensity levels.
2. **📝 Binary Conversion:** If the intensity surpasses a defined **threshold (70)**, it is recorded as '1'; otherwise, as '0'.
3. **📦 Data Storage:** The system records an **8-bit sequence**, which represents a character in **binary format**.
4. **🔍 Decoding:** The collected binary sequence is converted into an **ASCII character**.
5. **📤 Output Display:** The decoded character is printed on the **Serial Monitor**.

## 🖥️ Code Explanation
- **🔢 Variables:**
  - `ldrPin = A0` → Defines the analog pin for the LDR.
  - `threshold = 70` → Sets the sensitivity level for detecting light changes.
  - `size = 8` → Number of bits captured per cycle.
  - `ledDelay = 22` → Delay (ms) between consecutive bit readings.
- **🔄 Continuous Monitoring:**
  - The LDR value is continuously recorded in an **8-bit array**.
  - If a predefined binary pattern (e.g., `1011100`) is detected, it is ignored.
  - Otherwise, the binary sequence is **converted to ASCII** and displayed.

## 📊 Example Serial Output
```
helloWorld
```

## 🚀 How to Use
1. **Upload** the code to your Arduino board.
2. **Open** the Serial Monitor (baud rate: **9600**).
3. **Use** a light source to create intensity variations.
4. **Observe** the decoded characters appearing on the Serial Monitor.

## 🔮 Future Enhancements
- ✅ Implement **error detection** to improve accuracy.
- 🔄 Support for **continuous multi-character** sequences.
- ⏳ Optimize **timing mechanisms** for better precision.

## 📜 License
This project is **open-source** and can be modified or improved freely. Feel free to contribute! 🤝


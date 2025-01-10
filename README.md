# 🚀 Rotary Solar System Controller with Unity and DFPlayer Mini

Welcome to the **Rotary Solar System Controller** project! This interactive system combines the functionality of a rotary phone dial with Unity visualization and audio feedback. By dialing numbers, users can explore the wonders of the solar system, listen to educational audio, and see corresponding visualizations in Unity.

---

## 🎯 Project Overview

This project brings a creative twist to exploring the solar system. By combining Arduino hardware, Unity, and audio from the **DFPlayer Mini**, users can:
- Interact with a rotary phone to explore celestial bodies.
- Hear unique MP3 audio descriptions for each destination.
- View corresponding visualizations in Unity for an immersive experience.
- Trigger additional actions, such as launching a rocket or stopping interactions, using buttons.

Unity enhances the experience with animations, audio synchronization, and dynamic camera movements. Each action initiated through the rotary phone is mirrored in Unity with real-time visuals and sound effects, creating an educational and entertaining system.

---

## 💡 Features

- **Rotary Dial Integration**: Interact with the system using a vintage rotary phone dial.
- **Unity Visualization**: View planets and celestial bodies in a 3D solar system with unique animations like Saturn's rotating rings and Neptune's pulsating glow.
- **Audio Feedback**: Listen to MP3 descriptions for planets, the Moon, and the Sun.
- **DFPlayer Mini Integration**: Handles audio playback directly from an SD card.
- **Customizable Audio**: Easily replace MP3 files for personalized content.
- **Button-Controlled Actions**: Launch or stop additional features with physical buttons.
- **Rocket Launch**: Watch a detailed rocket launch sequence transitioning to a solar system overview.

---

## 🔧 Hardware Requirements

1. Arduino Uno.
2. DFPlayer Mini MP3 module.
3. Rotary dial phone.
4. MicroSD card (formatted to FAT32 with MP3 files named sequentially: `0001.mp3`, `0002.mp3`, etc.).
5. Speaker.
6. Push buttons for additional actions.
7. Jumper wires and breadboard for connections.

---

## 🛠️ Circuit Connections

### **Rotary Phone Dial**
- `RotaryPin`: Connect to Arduino Pin `2` (INPUT_PULLUP).
  
### **Buttons**
- `Button C`: Connect to Arduino Pin `7` for launching the rocket.
- `Button D`: Connect to Arduino Pin `6` for stopping all actions.

### **DFPlayer Mini**
- `RX`: Connect to Arduino Pin `10`.
- `TX`: Connect to Arduino Pin `11`.
- `VCC` and `GND`: Connect to power and ground, respectively.
- Speaker: Connect to DFPlayer Mini output pins.

---

## 🖥️ Software Requirements

- Arduino IDE
- DFPlayer Mini library ([Download here](https://github.com/DFRobot/DFRobotDFPlayerMini))
- Unity 3D (for visualizing the solar system)

---

## 📜 Code Functionality

### Arduino
1. **Setup Phase**:
   - Initializes the rotary dial, buttons, DFPlayer Mini, and Unity serial communication.
   - Confirms the system is ready for operation.

2. **Dial Numbers**:
   - Numbers 0-9 correspond to specific celestial bodies.
   - Unity visualizes the selected destination.
   - Triggered audio provides information and engagement for each selection.

3. **Special Buttons**:
   - **Launch Rocket**: Plays an audio prompt and triggers a Unity rocket launch animation.
   - **Stop Everything**: Halts ongoing processes, resets Unity visuals, and plays stopping audio.

### Unity
- **Visual Animations**: Each planet and celestial object has unique animations:
  - Earth rotates on its axis and orbits the Sun.
  - Neptune pulses, Uranus bobs, and Jupiter tilts.
  - Saturn’s rings rotate dynamically.
- **Audio Integration**: Unity handles additional audio sources for real-time planetary descriptions.
- **Camera Transitions**: Automatically adjusts views during the rocket launch and transitions to solar system exploration.
- **Reset Functionality**: Restores Unity objects to their initial state upon pressing the "Stop Everything" button.

---

## 🎵 Audio Files

Ensure MP3 files are named in sequence (`0001.mp3`, `0002.mp3`, etc.) and stored in the root directory of the SD card. Match the order with the dialed numbers for accurate playback.

---

## 🌌 Unity Visualization

![image](https://github.com/user-attachments/assets/7370e5bd-960e-4fb2-8004-79404bb58eea)
![image](https://github.com/user-attachments/assets/18d8c701-0c8d-42b5-8288-8f92362e2cf1)
![image](https://github.com/user-attachments/assets/bde72d57-ba99-42d2-9d1f-ab23c8b55276)
![image](https://github.com/user-attachments/assets/ad8c42dc-fdb6-434b-95df-fbfd0a065d8a)
![image](https://github.com/user-attachments/assets/09355251-ac35-4ffc-94cd-3406de085eba)

---

## 📚 Future Enhancements

- Expand Unity visualizations with more interactive features.


---

## 🤝 Acknowledgments

Special thanks to:
- **Professor Michael Haller** for guidance and support.
- **Bitz Unibz Fablab** in Bolzano for providing some of the necessary equipment.

---

## 👨‍🎓 Contributor

This project was developed by **Ridvan Plluzhina**, a student at the **Free University of Bolzano/Bozen**, Faculty of Engineering.







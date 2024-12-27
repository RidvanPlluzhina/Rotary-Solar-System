# Rotary Solar System

### **Overview**
The **Rotary Solar System** is an interactive educational and entertainment project that combines Arduino hardware and Unity 3D to bring the solar system to life. Using a rotary phone as the control interface, users can:
- Launch a rocket from Earth with immersive audio.
- Dial numbers on the rotary phone to interact with planets and celestial bodies.
- Experience animations and narratives for an exciting journey through space.
- ...

---

### **Features**
- **Rocket Launch:** Press a button to launch the rocket, complete with liftoff animations and narrated audio through the rotary phone's speaker.
- **Rotary Phone Controls:** Use the dial to trigger unique events:
  - `0`: Rotate Earth.
  - `1-9`: Other animations for (e.g., Mars, Jupiter, the Moon, etc.).
- **Audio Narration:** Play MP3 sounds during rocket launch and planetary interactions, providing an immersive experience.
- **Planet Animations:** Explore the solar system with individual planet rotation triggered by the rotary phone.
- **Dynamic Camera:** View transitions between the rocket's launch, planetary rotations, and the entire solar system.
- **Arduino-Unity Integration:** Real-time communication between Arduino and Unity for seamless interactions.

---

### **Technologies Used**
- **Arduino:** Hardware control for rotary dial, buttons, and audio playback.
- **Unity 3D:** Visualizing the solar system and handling animations.
- **C# and Arduino C++:** For scripting logic and communication.
- **DFPlayer Mini MP3 Module:** Playing pre-recorded audio during interactions. (TO BE USED)

---

### **How It Works**
1. **Launch the Rocket:**
   - Press a button on the rotary phone to trigger the rocket's liftoff.
   - Audio narration begins: "Hello, this is your captain! We're launching the rocket and leaving Earth..."
   
2. **Explore the Solar System:**
   - Dial numbers from `0-9` to interact with the solar system:
   - The interactions will be more than just rotating
     - `0`: Rotate Earth.
     - `1`: Rotate Mars.
     - `2`: Rotate the Sun.
     - `3`: Rotate Mercury.
     - `4`: Rotate Venus.
     - `5`: Rotate Jupiter.
     - `6`: Rotate Saturn.
     - `7`: Rotate Uranus.
     - `8`: Rotate Neptune.
     - `9`: Rotate the Moon.

3. **Dynamic Visuals:**
   - Watch the rocket's liftoff and transition to the solar system view.
   - View the planets rotating when dialed.
   - ...

---

### **Getting Started**

#### **Hardware Requirements**
- Arduino board (e.g., Uno).
- Rotary phone or rotary dial emulator.
- DFPlayer Mini MP3 module and speaker.
- Push button for rocket launch.
- USB cable for Arduino connection.

#### **Software Requirements**
- Arduino IDE for programming the hardware.
- Unity 3D for visualizing the solar system and animations.
- Serial communication plugin for Unity (e.g., SerialController).


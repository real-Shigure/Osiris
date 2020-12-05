#pragma once

class KeyBind {
public:
    enum KeyCode {
        KEY_0 = 0,
        KEY_1,
        KEY_2,
        KEY_3,
        KEY_4,
        KEY_5,
        KEY_6,
        KEY_7,
        KEY_8,
        KEY_9,
        A,
        B,
        C,
        D,
        E,
        F,
        F1,
        F10,
        F11,
        F12,
        F2,
        F3,
        F4,
        F5,
        F6,
        F7,
        F8,
        F9,
        G,
        H,
        I,
        INSERT,
        J,
        K,
        L,
        M,
        MOUSE1,
        MOUSE2,
        MOUSE3,
        MOUSE4,
        MOUSE5,
        MOUSEWHEEL_DOWN,
        MOUSEWHEEL_UP,
        N,
        NONE,
        O,
        ONE,
        P,
        Q,
        R,
        S,
        T,
        U,
        V,
        W,
        X,
        Y,
        Z
    };

    KeyBind(KeyCode keyCode) noexcept;
    KeyBind(const char* keyName) noexcept;

    bool operator==(KeyCode keyCode) const noexcept { return this->keyCode == keyCode; }
    bool operator==(const KeyBind& other) const noexcept { return this->keyCode == other.keyCode; }

    const char* toString() const noexcept;
    bool isPressed() const noexcept;
    bool isDown() const noexcept;

    void setToPressedKey() noexcept;
private:
    KeyCode keyCode;
};

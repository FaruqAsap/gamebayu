#ifndef ENGINE_H
#define ENGINE_H

class ENGINE
{
    public:
        static ENGINE* GetInstance(); // Declaration of GetInstance method

        bool Init();
        void Clean();
        void Quit();

        void Update();
        void Render();
        void Events();

        inline bool IsRunning() const { return m_IsRunning; }

    private:
        ENGINE() : m_IsRunning(false) {}
        bool m_IsRunning;
        static ENGINE* a_Instance;
};

#endif // ENGINE_H

class Observer
{
public:
    virtual ~Observer() { }
    virtual void OnNotify(const Game.Obj& entity, EventType event) = 0; 
};

class Subject
{
public:
    void AddObserver(Observer* observer)
    {
        m_observers.add(observer);
    }
    
    void RemoveObserver(Observer* observer)
    {
        int i = m_observers.find(observer);
        if(i != -1) m_observers.remove(i);
    }
    
    void Notify(const Game.Obj& entity, EventType event)
    {
        FREPA(m_observers)
        {
            m_observers[i].OnNotify(entity, event);
        }
    }
    
private:
    Memc<Observer*> m_observers;
    int m_numObservers;
};
//
//	Copyright (c) 2014 Hoolai	 All rights reserved.
//	FileName    :	HLSemaphore.h
//	Author      :	tq
//	Date        :   2015-04-01
//	Description :	模拟信号机制
//

#ifndef __Relive__HLSemaphore__
#define __Relive__HLSemaphore__

#include <stdio.h>
#include <mutex>
#include <condition_variable>

class HLSemaphone
{
public:
 
    HLSemaphone(int nValue):m_nCount(nValue),m_nWakeups(0)
    {
    }
    
    ~HLSemaphone()
    {
        m_nCount = 0;
        m_nWakeups = 0;
    }
    
    void wait()
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        
        if (--m_nCount < 0)
        {
            // suspend and wait ...挂起等待唤醒
            m_condition.wait(lock,[&]()->bool{ return m_nWakeups;});
            --m_nWakeups;
        }
    }
    
    void nofity_one()
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        
        if (++m_nCount <= 0)
        {
            ++m_nWakeups;
            //唤醒一个线程
            m_condition.notify_one();
        }
    }
    
private:

    int m_nCount;
    int m_nWakeups;
    std::mutex m_mutex;
    std::condition_variable m_condition;

};


#endif 


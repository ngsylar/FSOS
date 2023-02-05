#ifndef PROCESS_H
#define PROCESS_H

#include "cpplibraries.h"

class Process {
    public:
        Process();
        Process(
            int init_time,
            int priority,
            int exec_time,
            int alloc_mem_blocks,
            int printer_code,
            int scan_req,
            int modem_req,
            int disk_num);
        int getRemainingTime();
        void resetRunTime();
        void updateRunTime(int executed_time);
        int getPid();
        int getInitTime();
        int getPriority();
        int getExecTime();
        int getRunTime();
        int getAllocMemBlocks();
        int getPrinterCode();
        int getScanReq();
        int getModemReq();
        int getDiskNum();
        int getWait();
        void setPriority(int new_priority);
        void incrementWait();
        void updateWait(int new_wait);
    private:
        int pid;
        int init_time;
        int priority;
        int exec_time;
        int run_time;
        int alloc_mem_blocks;
        int printer_code;
        int scan_req;
        int modem_req;
        int disk_num;
        int wait;
    friend class MemoryManager;
};

#endif

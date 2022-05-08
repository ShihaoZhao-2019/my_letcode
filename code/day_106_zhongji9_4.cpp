/*
给你一个用字符数组 tasks 表示的 CPU 需要执行的任务列表。其中每个字母表示一种不同种类的任务。任务可以以任意顺序执行，并且每个任务都可以在 1 个单位时间内执行完。在任何一个单位时间，CPU 可以完成一个任务，或者处于待命状态。

然而，两个 相同种类 的任务之间必须有长度为整数 n 的冷却时间，因此至少有连续 n 个单位时间内 CPU 在执行不同的任务，或者在待命状态。

你需要计算完成所有任务所需要的 最短时间 。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-medium/xwvaot/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


//#include <ext/hash_map>
//using namespace __gnu_cxx;
//class Solution {
//public:
//    typedef struct INF{
//        char name;
//        int count;
//        int time;
//    }inf;
//    //构建队列时使用，向前调整。按照任务剩余的数量降序排列，传入需要调整的队列和需要被调整的任务的名字,和存储索引信息的map
//    void adjustQueue(vector<inf> &taskQueue,hash_map<char, int> &taskMap,char name ){

//        int taskIndex =taskMap[name];
//        for(int i = taskIndex-1;(i>=0&&taskQueue[taskIndex].count>taskQueue[i].count);i--,taskIndex--){
//            swap(taskQueue[taskIndex],taskQueue[i]);
//            taskMap[taskQueue[i].name] = i;
//            taskMap[taskQueue[taskIndex].name] = taskIndex;
//        }
//    }
//    //任务调度时使用，向后调整。按照任务剩余的数量降序排列，传入需要调整的队列和需要被调整的任务的名字,和存储索引信息的map
//    void adjustQueue2(vector<inf> &taskQueue,hash_map<char, int> &taskMap,char name ){

//        int taskIndex =taskMap[name];
//        int newIndex = taskIndex;
//        for(int i = taskIndex+1;(i<=taskQueue.size()-1&&taskQueue[taskIndex].count<taskQueue[i].count);i++,taskIndex++){
//            swap(taskQueue[taskIndex],taskQueue[i]);
//            taskMap[taskQueue[i].name] = i;
//            taskMap[taskQueue[taskIndex].name] = taskIndex;
//        }
//    }
//    //构建一个任务队列，存储了任务的信息
//    void buildTaskQueue(vector<char>& tasks,hash_map<char, int> &taskMap,vector<inf> &taskQueue){
//        for(int i=0;i<tasks.size();i++){
//            if(taskMap.find(tasks[i])==taskMap.end()){
//                inf oneTaskInfor;
//                oneTaskInfor.name = tasks[i];
//                oneTaskInfor.count = 1;
//                oneTaskInfor.time = 0;
//                taskQueue.push_back(oneTaskInfor);
//                taskMap[tasks[i]] = taskQueue.size()-1;
//            }else{
//                inf *oneTaskInfor;
//                oneTaskInfor = &taskQueue[taskMap[tasks[i]]];
//                ++oneTaskInfor->count;
//                adjustQueue(taskQueue,taskMap,tasks[i]);
//            }
//        }
//        inf oneTaskInfor;
//        oneTaskInfor.name = 0xA5;
//        oneTaskInfor.count = 0xffffffff;
//        oneTaskInfor.time = 0;
//        taskQueue.push_back(oneTaskInfor);
//        taskMap[0xA5] = taskQueue.size();
//    }
//    int leastInterval(vector<char>& tasks, int n) {
//        //构建任务队列
//        hash_map<char, int> taskMap;
//        vector<inf> taskQueue;
//        buildTaskQueue(tasks,taskMap,taskQueue);
//        vector<char> fininshTask;
//        while(taskQueue[0].count>0){
//            int i=0;
//            int isWorking = 0;
//            char workingTask;
//            //找冷却完成并且剩余未完成次数最多的任务
//            while(i<taskQueue.size()){
//                if(taskQueue[i].time>0)--taskQueue[i].time;
//                else if(taskQueue[i].count>0&&isWorking == 0){
//                    fininshTask.push_back(taskQueue[i].name);
//                    --taskQueue[i].count;
//                    taskQueue[i].time = n;
//                    isWorking = 1;
//                    workingTask = taskQueue[i].name;
//                }
//                if(taskQueue[i].count==0&&taskQueue[i].time!=2){
//                    if(isWorking==0)workingTask = taskQueue[taskQueue.size()-1].name;
//                    break;
//                }
//                i++;
//            }
//            if(isWorking==0)fininshTask.push_back(taskQueue[taskQueue.size()-1].name);

//            //当前任务的数量减少向后调整任务的优先级
//            adjustQueue2(taskQueue,taskMap,workingTask);
//        }
//        return fininshTask.size();
//        return 1;
//    }
//};

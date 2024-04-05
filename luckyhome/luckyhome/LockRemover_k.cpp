#include "../luckyhome/LockRemover_k.h"

LockRemover_k::LockRemover_k() {
    setName("开锁器");
    setPrice(3);
    setNumber(3);
    setDescribe("在3个带锁箱，保险箱，宝箱和巨大宝箱被消除后，消除自身。带锁箱，保险箱，宝箱和巨大宝箱由100%的几率被消除。");
    setCounter(3); // 代表当前道具满足条件3次就删除
    setAccumulator(0);
}
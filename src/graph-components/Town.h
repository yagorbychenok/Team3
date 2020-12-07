#pragma once

#include <string>
#include <Node.h>

class Town : public Node {
public:
    constexpr static uint32_t TYPE = 1;

private:
    const std::string playerIdx_;

    uint32_t nextLevelPrice_;
    uint32_t populationCapacity_;
    uint32_t productCapacity_;
    uint32_t armorCapacity_;

    uint32_t level_;
    uint32_t population_;
    uint32_t product_;
    uint32_t armor_;

    const std::string name_;

public:
    Town() = delete;
    Town(int32_t pointIdx, int32_t postIdx, Point coordinates, std::string playerIdx,
         uint32_t nextLevelPrice, uint32_t populationCapacity,
         uint32_t productCapacity, uint32_t armorCapacity, uint32_t level, uint32_t population,
         uint32_t product, uint32_t armor, std::string name);

    std::string getPlayerIdx() const;

    uint32_t getNextLevelPrice() const;
    uint32_t getPopulationCapacity() const;
    uint32_t getProductCapacity() const;
    uint32_t getArmorCapacity() const;

    uint32_t getLevel() const;
    uint32_t getPopulation() const;
    uint32_t getProduct() const;
    uint32_t getArmor() const;

    void setNextLevelPrice(uint32_t nextLevelPrice);
    void setPopulationCapacity(uint32_t populationCapacity);
    void setProductCapacity(uint32_t productCapacity);
    void setArmorCapacity(uint32_t armorCapacity);

    void setLevel(uint32_t level);
    void setPopulation(uint32_t population);
    void setProduct(uint32_t product);
    void setArmor(uint32_t armor);
};
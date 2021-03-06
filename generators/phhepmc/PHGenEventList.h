#ifndef PHHEPMC_PHGENEVENTLIST_H
#define PHHEPMC_PHGENEVENTLIST_H

#include "PHGenEvent.h"

#include <phool/PHObject.h>
#include <phool/phool.h>

#include <iostream>

class PHGenEventList : public PHObject
{
 public:
  virtual ~PHGenEventList() {}

  virtual size_t size() const
  {
    PHOOL_VIRTUAL_WARNING;
    return 0;
  }
  virtual const PHGenEvent* at(size_t i) const
  {
    PHOOL_VIRTUAL_WARNING;
    return nullptr;
  }
  virtual PHGenEvent* at(size_t i)
  {
    PHOOL_VIRTUAL_WARNING;
    return nullptr;
  }

  virtual bool has(unsigned int id) const
  {
    PHOOL_VIRTUAL_WARNING;
    return false;
  }
  virtual size_t find(unsigned int id) const
  {
    PHOOL_VIRTUAL_WARNING;
    return size();
  }
  virtual const PHGenEvent* fetch(unsigned int id) const
  {
    PHOOL_VIRTUAL_WARNING;
    return nullptr;
  }

  virtual unsigned int generate_id() const
  {
    PHOOL_VIRTUAL_WARNING;
    return 0;
  }
  virtual void insert(const PHGenEvent* event) { PHOOL_VIRTUAL_WARNING; }
  virtual void remove(size_t i) { PHOOL_VIRTUAL_WARNING; }
  virtual void clear() { PHOOL_VIRTUAL_WARNING; }

  virtual void identify(std::ostream& out = std::cout) const
  {
    out << "PHGenEventList" << std::endl;
  }
  virtual void print(std::ostream& os = std::cout) const { PHOOL_VIRTUAL_WARNING; }
  virtual void Reset() { PHOOL_VIRTUAL_WARNING; }

 protected:
  PHGenEventList()
    : PHObject()
  {
  }

 private:
  ClassDef(PHGenEventList, 1)
};

#endif  // __PHGENEVENTLIST_H__

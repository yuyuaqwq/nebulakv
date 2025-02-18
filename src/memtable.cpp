#include <map>

#include <nebulakv/noncopyable.h>
#include <nebulakv/slice.h>

#include <wal/writer.h>

namespace nebulakv {

class MemTable : public noncopyable {
public:
    
private:
    std::map<Slice, Slice> table_;
};

} // namespace nebulakv
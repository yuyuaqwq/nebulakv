#include <map>

#include <wal/writer.h>

#include <nebulakv/noncopyable.h>
#include <nebulakv/slice.h>

#include <nebulakv/memtable.h>

namespace nebulakv {

class DB : public noncopyable {
public:
    
    void Put(std::string_view key, std::string_view value) {
        // 

        wal_writer_.AppendRecordToBuffer();

        table_.Put(key, value);
    }

    std::string Get(std::string_view key) {

    }

private:
    wal::Writer wal_writer_;
    MemTable table_;
};

} // namespace nebulakv
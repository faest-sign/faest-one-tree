#ifndef TEST_EXT_WITNESS_HPP
#define TEST_EXT_WITNESS_HPP

#include <array>
#include <cstdint>

extern const std::array<uint8_t, 16> AES_CTR_128_KEY;
extern const std::array<uint8_t, 16> AES_CTR_128_INPUT;
extern const std::array<uint8_t, 16> AES_CTR_128_OUTPUT;
extern const std::array<uint8_t, 200> AES_CTR_128_EXTENDED_WITNESS;

extern const std::array<uint8_t, 24> AES_CTR_192_KEY;
extern const std::array<uint8_t, 32> AES_CTR_192_INPUT;
extern const std::array<uint8_t, 32> AES_CTR_192_OUTPUT;
extern const std::array<uint8_t, 408> AES_CTR_192_EXTENDED_WITNESS;

extern const std::array<uint8_t, 32> AES_CTR_256_KEY;
extern const std::array<uint8_t, 32> AES_CTR_256_INPUT;
extern const std::array<uint8_t, 32> AES_CTR_256_OUTPUT;
extern const std::array<uint8_t, 500> AES_CTR_256_EXTENDED_WITNESS;

extern const std::array<uint8_t, 16> RIJNDAEL_EM_128_KEY;
extern const std::array<uint8_t, 16> RIJNDAEL_EM_128_INPUT;
extern const std::array<uint8_t, 16> RIJNDAEL_EM_128_OUTPUT;
extern const std::array<uint8_t, 160> RIJNDAEL_EM_128_EXTENDED_WITNESS;

extern const std::array<uint8_t, 24> RIJNDAEL_EM_192_KEY;
extern const std::array<uint8_t, 24> RIJNDAEL_EM_192_INPUT;
extern const std::array<uint8_t, 24> RIJNDAEL_EM_192_OUTPUT;
extern const std::array<uint8_t, 288> RIJNDAEL_EM_192_EXTENDED_WITNESS;

extern const std::array<uint8_t, 32> RIJNDAEL_EM_256_KEY;
extern const std::array<uint8_t, 32> RIJNDAEL_EM_256_INPUT;
extern const std::array<uint8_t, 32> RIJNDAEL_EM_256_OUTPUT;
extern const std::array<uint8_t, 448> RIJNDAEL_EM_256_EXTENDED_WITNESS;

extern const std::array<uint64_t, 2> RAIN_3_128_KEY;
extern const std::array<uint64_t, 2> RAIN_3_128_INPUT;
extern const std::array<uint64_t, 2> RAIN_3_128_OUTPUT;
extern const std::array<uint64_t, 6> RAIN_3_128_EXTENDED_WITNESS;

extern const std::array<uint64_t, 3> RAIN_3_192_KEY;
extern const std::array<uint64_t, 3> RAIN_3_192_INPUT;
extern const std::array<uint64_t, 3> RAIN_3_192_OUTPUT;
extern const std::array<uint64_t, 9> RAIN_3_192_EXTENDED_WITNESS;

extern const std::array<uint64_t, 4> RAIN_3_256_KEY;
extern const std::array<uint64_t, 4> RAIN_3_256_INPUT;
extern const std::array<uint64_t, 4> RAIN_3_256_OUTPUT;
extern const std::array<uint64_t, 12> RAIN_3_256_EXTENDED_WITNESS;

extern const std::array<uint64_t, 2> RAIN_4_128_KEY;
extern const std::array<uint64_t, 2> RAIN_4_128_INPUT;
extern const std::array<uint64_t, 2> RAIN_4_128_OUTPUT;
extern const std::array<uint64_t, 8> RAIN_4_128_EXTENDED_WITNESS;

extern const std::array<uint64_t, 3> RAIN_4_192_KEY;
extern const std::array<uint64_t, 3> RAIN_4_192_INPUT;
extern const std::array<uint64_t, 3> RAIN_4_192_OUTPUT;
extern const std::array<uint64_t, 12> RAIN_4_192_EXTENDED_WITNESS;

extern const std::array<uint64_t, 4> RAIN_4_256_KEY;
extern const std::array<uint64_t, 4> RAIN_4_256_INPUT;
extern const std::array<uint64_t, 4> RAIN_4_256_OUTPUT;
extern const std::array<uint64_t, 16> RAIN_4_256_EXTENDED_WITNESS;

#endif // TEST_EXT_WITNESS_HPP

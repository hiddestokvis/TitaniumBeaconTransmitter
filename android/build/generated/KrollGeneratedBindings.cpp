/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/nt/khvw543s43g6kqt28fwdmlj40000gn/T/hiddestokvis/ble-transmitter-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/nt/khvw543s43g6kqt28fwdmlj40000gn/T/hiddestokvis/ble-transmitter-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.neverhide.bletransmitter.ExampleProxy.h"
#include "com.neverhide.bletransmitter.BleTransmitterModule.h"


#line 14 "/private/var/folders/nt/khvw543s43g6kqt28fwdmlj40000gn/T/hiddestokvis/ble-transmitter-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 9, duplicates = 0 */

class BleTransmitterBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
BleTransmitterBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
BleTransmitterBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 41,
      MAX_WORD_LENGTH = 49,
      MIN_HASH_VALUE = 41,
      MAX_HASH_VALUE = 49
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/nt/khvw543s43g6kqt28fwdmlj40000gn/T/hiddestokvis/ble-transmitter-generated/KrollGeneratedBindings.gperf"
      {"com.neverhide.bletransmitter.ExampleProxy", ::com::neverhide::bletransmitter::bletransmitter::ExampleProxy::bindProxy, ::com::neverhide::bletransmitter::bletransmitter::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/nt/khvw543s43g6kqt28fwdmlj40000gn/T/hiddestokvis/ble-transmitter-generated/KrollGeneratedBindings.gperf"
      {"com.neverhide.bletransmitter.BleTransmitterModule", ::com::neverhide::bletransmitter::BleTransmitterModule::bindProxy, ::com::neverhide::bletransmitter::BleTransmitterModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/nt/khvw543s43g6kqt28fwdmlj40000gn/T/hiddestokvis/ble-transmitter-generated/KrollGeneratedBindings.gperf"


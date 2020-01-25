/* Include files */

#include "LabB_CheckCommunications_cgxe.h"
#include "m_PJ3q4qU4judu2TR1CjEpQB.h"

unsigned int cgxe_LabB_CheckCommunications_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 3839626716 &&
      ssGetChecksum1(S) == 370258406 &&
      ssGetChecksum2(S) == 2588868234 &&
      ssGetChecksum3(S) == 2394463763) {
    method_dispatcher_PJ3q4qU4judu2TR1CjEpQB(S, method, data);
    return 1;
  }

  return 0;
}

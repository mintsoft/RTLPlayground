#ifndef _CMD_PARSE_2_STP_H
#define _CMD_PARSE_2_STP_H
#include "cmd_parse_util.h"

void cmd_parse_stp_version(void);
void cmd_parse_stp_pathcost(void);
void cmd_parse_stp_bpdu(void);
void cmd_parse_stp_priority(void);
void cmd_parse_stp_hello(void);
void cmd_parse_stp_maxage(void);
void cmd_parse_stp_fwd(void);
void cmd_parse_stp_txhold(void);

#endif
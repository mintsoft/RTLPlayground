#include "cmd_parse_2_lag.h"
#pragma codeseg BANK2
#pragma constseg BANK2

void cmd_parse_lag_NUMBER(void) {
    if (cmd_compare(2, "static")) {
        cmd_parse_lag_NUMBER_ports(0);
    } else if (cmd_compare(2, "lacp")) {
        cmd_parse_lag_NUMBER_ports(1);
    } else if (cmd_compare(2, "hash")) {
        cmd_parse_lag_NUMBER_laghash();
    }
}

void cmd_parse_lag_NUMBER_ports(uint8_t useLACP) {
    __xdata uint16_t members = 0;
    uint8_t lagnum = atoi_results_u8;
    uint8_t w = 3;

    while (w < cmd_words_len) {
        if (cmd_arg_port_separator(cmd_words_b[w++]) == 0)
            return;

        members |= ((uint16_t)1) << atoi_results_u8;
    }
    if (useLACP) {
        lacp_lag_set(lagnum, members);
    } else {
        lacp_lag_set(lagnum, 0);
        port_lag_members_set(lagnum, members);
    }
}

void cmd_parse_lag_NUMBER_laghash(void) {
    uint8_t lagnum = atoi_results_u8;

    uint8_t hash = 0;
    uint8_t w = 3;
    while (w < cmd_words_len) {
        if (cmd_compare(w, "spa"))
            hash |= LAG_HASH_SOURCE_PORT_NUMBER;
        else if (cmd_compare(w, "smac"))
            hash |= LAG_HASH_L2_SMAC;
        else if (cmd_compare(w, "dmac"))
            hash |= LAG_HASH_L2_DMAC;
        else if (cmd_compare(w, "sip"))
            hash |= LAG_HASH_L3_SIP;
        else if (cmd_compare(w, "dip"))
            hash |= LAG_HASH_L3_DIP;
        else if (cmd_compare(w, "sport"))
            hash |= LAG_HASH_L4_SPORT;
        else if (cmd_compare(w, "dport"))
            hash |= LAG_HASH_L4_DPORT;
        else {
            return;
        }
        w++;
    }
    port_lag_hash_set(lagnum, hash);
}
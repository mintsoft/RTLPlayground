#include "cmd_parse_2_port.h"
#pragma codeseg BANK2
#pragma constseg BANK2

void cmd_parse_port_NUMBER(void) {
    uint8_t portnum = atoi_results_u8;

    if (cmd_compare(2, "name")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "speed")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "down")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "up")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "mtu")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "lldp")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "stp")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "stp-edge")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "stp-cost")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "stp-p2p")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "stp-priority")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "stp-guard")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "pvid")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "untagged")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "tagged")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "isolate-to")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "mirror-from")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "eee")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "bw-in")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "bw-out")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "storm")) {
        cmd_error("ROB TODO\n");
    } else if (cmd_compare(2, "ingress-filter")) {
        cmd_error("ROB TODO\n");
    }
}


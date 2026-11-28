#include "cmd_parse_2_port.h"
#pragma codeseg BANK2
#pragma constseg BANK2

void cmd_parse_port_NUMBER(void) {
    uint8_t portnum = atoi_results_u8;

    if (cmd_compare(2, "name")) {

    } else if (cmd_compare(2, "speed")) {

    } else if (cmd_compare(2, "down")) {

    } else if (cmd_compare(2, "up")) {

    } else if (cmd_compare(2, "mtu")) {

    } else if (cmd_compare(2, "lldp")) {

    } else if (cmd_compare(2, "stp")) {

    } else if (cmd_compare(2, "stp-edge")) {

    } else if (cmd_compare(2, "stp-cost")) {

    } else if (cmd_compare(2, "stp-p2p")) {

    } else if (cmd_compare(2, "stp-priority")) {

    } else if (cmd_compare(2, "stp-guard")) {

    } else if (cmd_compare(2, "pvid")) {

    } else if (cmd_compare(2, "untagged")) {

    } else if (cmd_compare(2, "tagged")) {

    } else if (cmd_compare(2, "isolate-to")) {

    } else if (cmd_compare(2, "mirror-from")) {

    } else if (cmd_compare(2, "eee")) {

    } else if (cmd_compare(2, "bw-in")) {

    } else if (cmd_compare(2, "bw-out")) {

    } else if (cmd_compare(2, "storm")) {

    } else if (cmd_compare(2, "ingress-filter")) {

    }
}


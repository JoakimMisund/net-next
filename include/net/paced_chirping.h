#ifndef __NET_PACED_CHIRPING_H
#define __NET_PACED_CHIRPING_H

#include <linux/skbuff.h>
#include <linux/tcp.h>
#include <linux/types.h>

struct paced_chirping_ext {
	u64 scheduled_gap;
	u16 chirp_number;
	u8 packets;
};

void paced_chirping_not_in_chirp(struct sk_buff *skb);
int packed_chirping_packet_in_chirp(struct sk_buff *skb);
#endif
